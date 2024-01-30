@interface TSDMutableInfoGeometry : TSDInfoGeometry

- (void)setPosition:(struct CGPoint { double x0; double x1; })a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setCenter:(struct CGPoint { double x0; double x1; })a0;
- (void)setSize:(struct CGSize { double x0; double x1; })a0;
- (void)setAngle:(double)a0;
- (void)setHeightValid:(BOOL)a0;
- (void)setHorizontalFlip:(BOOL)a0;
- (void)setTransformedBoundsOrigin:(struct CGPoint { double x0; double x1; })a0;
- (void)setVerticalFlip:(BOOL)a0;
- (void)setWidthValid:(BOOL)a0;

@end
