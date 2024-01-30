@interface _UIImageCGSVGDocumentContent : _UIImageContent {
    struct CGSVGDocument { } *_svgDocumentRef;
}

- (void)_drawWithoutEffectInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1;
- (struct CGSize { double x0; double x1; })sizeInPixels;
- (BOOL)canScaleImageToTargetResolution;
- (id)initWithCGSVGDocument:(struct CGSVGDocument { } *)a0 scale:(double)a1;
- (struct CGSVGDocument { } *)CGSVGDocument;
- (BOOL)isCGSVGDocument;
- (id)description;
- (id)initWithScale:(double)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;

@end
