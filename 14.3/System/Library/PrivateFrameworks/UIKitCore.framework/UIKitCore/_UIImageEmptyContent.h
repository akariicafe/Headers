@interface _UIImageEmptyContent : _UIImageContent

- (struct CGSize { double x0; double x1; })sizeInPixels;
- (void)_prepareforDrawingInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1;
- (id)renditionWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 applyingEffect:(id)a2;
- (struct CGSize { double x0; double x1; })size;
- (unsigned long long)hash;
- (BOOL)canProvideFullResCGImage;
- (BOOL)isEqual:(id)a0;
- (BOOL)canProvideCGImage;
- (BOOL)_drawInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1 effect:(id)a2;

@end
