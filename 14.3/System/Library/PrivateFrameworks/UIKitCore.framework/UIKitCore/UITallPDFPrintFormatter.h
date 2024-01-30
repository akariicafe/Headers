@class NSURL;

@interface UITallPDFPrintFormatter : UIPrintFormatter {
    NSURL *_pdfPath;
    struct CGPDFDocument { } *_pdfDocRef;
    double _pdfScaleFactor;
    BOOL _rotate90;
    double _shiftUpLength;
}

- (void).cxx_destruct;
- (long long)_recalcPageCount;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 forPageAtIndex:(long long)a1;
- (id)initWithPDFURL:(id)a0;
- (id)initWithPDFData:(id)a0;

@end
