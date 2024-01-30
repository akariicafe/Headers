@class PDFPointerRegionPrivate;

@interface PDFPointerRegion : NSObject {
    PDFPointerRegionPrivate *_private;
}

- (id)identifier;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rect;
- (void).cxx_destruct;
- (void)setRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setIdentifier:(id)a0;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 identifier:(id)a1;

@end
