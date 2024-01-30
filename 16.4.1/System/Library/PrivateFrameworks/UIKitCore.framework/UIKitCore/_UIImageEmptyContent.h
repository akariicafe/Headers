@interface _UIImageEmptyContent : _UIImageContent

- (struct CGSize { double x0; double x1; })sizeInPixels;
- (BOOL)canScaleImageToTargetResolution;
- (id)renditionWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 applyingEffect:(id)a2;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (struct CGSize { double x0; double x1; })size;
- (void)_prepareForDrawingWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2;
- (BOOL)canEmitDrawingCommands;
- (void)_drawWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 inContext:(struct CGContext { } *)a2 effect:(id)a3;
- (BOOL)canDrawImage;

@end
