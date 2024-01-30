@interface CPTextBox : CPRegion {
    double rotationAngle;
}

- (double)rotationAngle;
- (void)setRotationAngle:(double)a0;
- (id)init;
- (BOOL)isRotated;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (id)description;
- (void)accept:(id)a0;
- (BOOL)isBoxRegion;

@end
