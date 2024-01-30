@interface _UIImageCGSVGDocumentContent : _UIImageContent {
    struct CGSVGDocument { } *_svgDocumentRef;
}

- (struct CGSize { double x0; double x1; })sizeInPixels;
- (id)initWithScale:(double)a0;
- (struct CGSVGDocument { } *)CGSVGDocument;
- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isCGSVGDocument;
- (BOOL)canProvideFullResCGImage;
- (id)description;
- (id)initWithCGSVGDocument:(struct CGSVGDocument { } *)a0 scale:(double)a1;
- (BOOL)isEqual:(id)a0;
- (void)_drawWithoutEffectInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1;

@end
