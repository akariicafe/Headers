@interface TSDMutableLayoutGeometry : TSDLayoutGeometry

@property (nonatomic) struct CGSize { double x0; double x1; } size;
@property (nonatomic) struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; } transform;

- (void)setTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (void)setSize:(struct CGSize { double x0; double x1; })a0;
- (void)outsetBy:(struct CGSize { double x0; double x1; })a0;
- (void)transformBy:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;

@end
