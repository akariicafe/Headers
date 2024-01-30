@interface _UIImageCGPDFPageContent : _UIImageContent {
    struct CGPDFPage { } *_pdfPageRef;
}

- (void)_drawWithoutEffectInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1;
- (struct CGSize { double x0; double x1; })sizeInPixels;
- (BOOL)canScaleImageToTargetResolution;
- (struct CGPDFPage { } *)CGPDFPage;
- (id)description;
- (BOOL)isCGPDFPage;
- (id)initWithScale:(double)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithCGPDFPage:(struct CGPDFPage { } *)a0 scale:(double)a1;

@end
