@class PDFDocument;

@interface PDFPageIconLayer : CALayer {
    PDFDocument *_document;
    struct CGSize { double width; double height; } _frameSize;
    int _pageIndex;
    BOOL _needsUpdate;
}

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)setNeedsUpdate;
- (void).cxx_destruct;
- (int)pageIndex;
- (id)document;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateAsPageIndex:(int)a0 forDocument:(id)a1;

@end
