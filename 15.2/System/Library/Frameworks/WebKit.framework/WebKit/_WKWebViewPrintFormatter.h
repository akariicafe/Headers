@class _WKFrameHandle;

@interface _WKWebViewPrintFormatter : UIViewPrintFormatter {
    struct RetainPtr<_WKFrameHandle> { void *m_ptr; } _frameToPrint;
    struct RetainPtr<CGPDFDocument *> { void *m_ptr; } _printedDocument;
    BOOL _suppressPageCountRecalc;
}

@property (retain, nonatomic) _WKFrameHandle *frameToPrint;
@property (nonatomic) BOOL snapshotFirstPage;

- (void)_setNeedsRecalc;
- (long long)_recalcPageCount;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForPageAtIndex:(long long)a0;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forPageAtIndex:(long long)a1;
- (id)_webView;
- (void).cxx_destruct;
- (void)_setSnapshotPaperRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id).cxx_construct;

@end
