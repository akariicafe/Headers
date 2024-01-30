@class CIImage;

@interface _UIImageCIImageContent : _UIImageContent {
    CIImage *_ciImage;
}

- (struct CGSize { double x0; double x1; })sizeInPixels;
- (id)initWithScale:(double)a0;
- (BOOL)canScaleImageToTargetResolution;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void)_prepareForDrawingWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2;
- (BOOL)canEmitDrawingCommands;
- (void).cxx_destruct;
- (void)_drawWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2 effect:(id)a3;
- (id)CIImage;
- (id)initWithCIImage:(id)a0 scale:(double)a1;
- (BOOL)isCIImage;

@end
