@class CIImage;

@interface _UIImageCIImageContent : _UIImageContent {
    CIImage *_ciImage;
}

- (struct CGSize { double x0; double x1; })sizeInPixels;
- (void)_prepareforDrawingInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1;
- (id)initWithScale:(double)a0;
- (id)CIImage;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isCIImage;
- (BOOL)canProvideFullResCGImage;
- (id)description;
- (id)initWithCIImage:(id)a0 scale:(double)a1;
- (BOOL)isEqual:(id)a0;
- (void)_drawWithoutEffectInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1;

@end
