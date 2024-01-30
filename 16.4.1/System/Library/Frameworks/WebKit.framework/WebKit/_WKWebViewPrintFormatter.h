@class _WKFrameHandle;

@interface _WKWebViewPrintFormatter : UIViewPrintFormatter {
    struct RetainPtr<_WKFrameHandle> { void *m_ptr; } _frameToPrint;
    BOOL _suppressPageCountRecalc;
    struct Lock { struct Atomic<unsigned char> { struct atomic<unsigned char> { struct __cxx_atomic_impl<unsigned char, std::__cxx_atomic_base_impl<unsigned char>> { _Atomic unsigned char __a_value; } __a_; } value; } m_byte; } _printLock;
    struct Condition { struct Atomic<bool> { struct atomic<bool> { struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { _Atomic BOOL __a_value; } __a_; } value; } m_hasWaiters; } _printCompletionCondition;
    struct RetainPtr<CGPDFDocument *> { void *m_ptr; } _printedDocument;
}

@property (retain, nonatomic) _WKFrameHandle *frameToPrint;
@property (nonatomic) BOOL snapshotFirstPage;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_webView;
- (void)_setNeedsRecalc;
- (struct CGPDFDocument { } *)_printedDocument;
- (long long)_recalcPageCount;
- (void)_setPrintedDocument:(struct CGPDFDocument { } *)a0;
- (void)_setSnapshotPaperRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_waitForPrintedDocument;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forPageAtIndex:(long long)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectForPageAtIndex:(long long)a0;
- (BOOL)requiresMainThread;

@end
