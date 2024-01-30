@interface IPAImageIdentityTransform : IPAImageTransform

- (id)description;
- (id)inverseTransform;
- (struct Vector2d { double x0; double x1; })mapVector:(struct Vector2d { double x0; double x1; })a0;
- (BOOL)canAlignToPixelsExactly;

@end
