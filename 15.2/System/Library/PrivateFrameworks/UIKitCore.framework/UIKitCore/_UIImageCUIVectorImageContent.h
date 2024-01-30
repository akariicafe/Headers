@class CUINamedVectorImage;

@interface _UIImageCUIVectorImageContent : _UIImageCGImageContent {
    CUINamedVectorImage *_vectorImage;
}

- (void)_drawWithoutEffectInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1;
- (void)_prepareforDrawingInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1;
- (BOOL)canScaleImageToTargetResolution;
- (BOOL)_canProvideCGImageDirectly;
- (id)contentWithCGImage:(struct CGImage { } *)a0;
- (struct CGPDFPage { } *)CGPDFPage;
- (double)vectorScale;
- (struct CGSVGDocument { } *)CGSVGDocument;
- (BOOL)isCGSVGDocument;
- (id)description;
- (BOOL)isCGPDFPage;
- (id)initWithScale:(double)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCGImage:(struct CGImage { } *)a0 CUIVectorImage:(id)a1 scale:(double)a2;
- (unsigned long long)hash;
- (struct CGImage { } *)_provideCGImageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;

@end
