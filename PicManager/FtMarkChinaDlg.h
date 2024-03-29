#pragma once


// CFtMarkChinaDlg 对话框
#include"PicInfoList.h"

class CFtMarkChinaDlg : public CDialog
{
	DECLARE_DYNAMIC(CFtMarkChinaDlg)

public:
	CFtMarkChinaDlg(CWnd* pParent = NULL);   // 标准构造函数
	CFtMarkChinaDlg(CWnd* pParent, PictureInfoList * picLibraryPtr_,
	List<Node<PictureRecord>*>  *my_foot_list_); 
	virtual ~CFtMarkChinaDlg();

// 对话框数据
	enum { IDD = IDD_DIALOG_FootMarkDlgChina };


private:
	LocationGraph<600> ecnuMap;
    PictureInfoList *picLibraryPtr;
	List<Node<PictureRecord>*>  *my_foot_list;

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPaint();

	virtual BOOL OnInitDialog();
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
};
