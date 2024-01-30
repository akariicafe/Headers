@class PDFDocument;

@interface PDFPageIconLayer : CALayer {
    int _pageIndex;
    struct CGSize { double width; double height; } _frameSize;
    BOOL _needsUpdate;
}

@property (weak, nonatomic) PDFDocument *document;
@property (readonly, nonatomic) int pageIndex;

- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setNeedsUpdate;
- (void).cxx_destruct;
- (void)updateAsPageIndex:(int)a0 forDocument:(id)a1;

@end
