@interface CPImage : CPGraphicObject {
    struct CPPDFImage { struct CPPDFObject { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; unsigned int x2; unsigned int x3; } x0; unsigned int x1; struct CGPDFStream *x2; int x3; struct CGImage *x4; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x5; struct CGPDFDictionary *x6; double x7; struct CGColor *x8; long long x9; } *imageData;
    BOOL renderedBoundsComputed;
}

- (id)initWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isVisible;
- (struct CPPDFImage { struct CPPDFObject { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; unsigned int x2; unsigned int x3; } x0; unsigned int x1; struct CGPDFStream *x2; int x3; struct CGImage *x4; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x5; struct CGPDFDictionary *x6; double x7; struct CGColor *x8; long long x9; } *)imageData;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (long long)zOrder;
- (void)accept:(id)a0;
- (id)initWithPDFImage:(struct CPPDFImage { struct CPPDFObject { struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x0; struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } x1; unsigned int x2; unsigned int x3; } x0; unsigned int x1; struct CGPDFStream *x2; int x3; struct CGImage *x4; struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } x5; struct CGPDFDictionary *x6; double x7; struct CGColor *x8; long long x9; } *)a0;
- (void)recomputeRenderedBounds;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })renderedBounds;

@end
