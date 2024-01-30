@interface _UIImageCGPDFPageContent : _UIImageContent {
    struct CGPDFPage { } *_pdfPageRef;
}

- (struct CGSize { double x0; double x1; })sizeInPixels;
- (id)initWithScale:(double)a0;
- (BOOL)canScaleImageToTargetResolution;
- (BOOL)isCGPDFPage;
- (struct CGPDFPage { } *)CGPDFPage;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)_prepareForDrawingWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2;
- (BOOL)canEmitDrawingCommands;
- (void)_drawWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2 effect:(id)a3;
- (id)initWithCGPDFPage:(struct CGPDFPage { } *)a0 scale:(double)a1;

@end
