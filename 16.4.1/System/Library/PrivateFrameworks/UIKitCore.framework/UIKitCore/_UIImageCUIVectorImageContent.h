@class CUINamedVectorImage;

@interface _UIImageCUIVectorImageContent : _UIImageCGImageContent {
    CUINamedVectorImage *_vectorImage;
}

- (id)initWithScale:(double)a0;
- (BOOL)canScaleImageToTargetResolution;
- (id)initWithCGImage:(struct CGImage { } *)a0 CUIVectorImage:(id)a1 scale:(double)a2;
- (struct CGSVGDocument { } *)CGSVGDocument;
- (BOOL)isCGPDFPage;
- (struct CGPDFPage { } *)CGPDFPage;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)_canProvideCGImageDirectly;
- (BOOL)isCGSVGDocument;
- (double)vectorScale;
- (id)description;
- (struct CGImage { } *)_provideCGImageWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (id)contentWithCGImage:(struct CGImage { } *)a0;
- (BOOL)canEmitDrawingCommands;
- (void).cxx_destruct;
- (void)_drawWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2 effect:(id)a3;

@end
