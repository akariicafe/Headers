@interface IPAImageIdentityTransform : IPAImageTransform

- (id)description;
- (id)inverseTransform;
- (BOOL)canAlignToPixelsExactly;
- (struct Vector2d { double x0; double x1; })mapVector:(struct Vector2d { double x0; double x1; })a0;

@end
