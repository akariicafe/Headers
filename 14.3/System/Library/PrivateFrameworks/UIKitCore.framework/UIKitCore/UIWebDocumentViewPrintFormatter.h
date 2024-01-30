@class WebFrame, UIWebPaginationInfo;

@interface UIWebDocumentViewPrintFormatter : UIViewPrintFormatter {
    UIWebPaginationInfo *_paginationInfo;
}

@property (retain, nonatomic) WebFrame *frameToPrint;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_resetPaginationInfo;
- (void)removeFromPrintPageRenderer;
- (long long)_recalcPageCount;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForPageAtIndex:(long long)a0;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forPageAtIndex:(long long)a1;
- (id)_webDocumentView;

@end
