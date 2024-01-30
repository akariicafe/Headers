@interface IPAAffineImageTransform : IPAImageTransform {
    BOOL _canAlignToPixelsExactly;
    struct Matrix4d { double m[16]; } _matrix;
}

- (struct Matrix4d { double x0[16]; })matrix;
- (id)description;
- (id).cxx_construct;
- (id)inverseTransform;
- (id)initWithInputGeometry:(id)a0 intrinsicGeometry:(id)a1 matrix:(const struct Matrix4d { double x0[16]; } *)a2 canAlignToPixelsExactly:(BOOL)a3;
- (struct Vector2d { double x0; double x1; })mapVector:(struct Vector2d { double x0; double x1; })a0;
- (BOOL)canAlignToPixelsExactly;

@end
