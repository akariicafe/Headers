@class CIImage;

@interface _UIImageCIImageContent : _UIImageContent {
    CIImage *_ciImage;
}

- (void)_drawWithoutEffectInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1;
- (struct CGSize { double x0; double x1; })sizeInPixels;
- (void)_prepareforDrawingInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1;
- (id)CIImage;
- (BOOL)canScaleImageToTargetResolution;
- (BOOL)isCIImage;
- (id)description;
- (id)initWithScale:(double)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithCIImage:(id)a0 scale:(double)a1;

@end
