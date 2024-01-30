@class CUINamedVectorImage;

@interface _UIImageCUIVectorImageContent : _UIImageCGImageContent {
    CUINamedVectorImage *_vectorImage;
    struct { unsigned char isPDF : 1; unsigned char isSVG : 1; } coreFlags;
}

- (void)_prepareforDrawingInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1;
- (id)initWithScale:(double)a0;
- (struct CGSVGDocument { } *)CGSVGDocument;
- (id)contentWithCGImage:(struct CGImage { } *)a0;
- (struct CGPDFPage { } *)CGPDFPage;
- (void).cxx_destruct;
- (BOOL)isCGPDFPage;
- (unsigned long long)hash;
- (BOOL)isCGSVGDocument;
- (BOOL)_canProvideCGImageDirectly;
- (BOOL)canProvideFullResCGImage;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)_drawWithoutEffectInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1;
- (id)initWithCGImage:(struct CGImage { } *)a0 CUIVectorImage:(id)a1 scale:(double)a2;
- (struct CGImage { } *)_CGImageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (double)vectorScale;

@end
