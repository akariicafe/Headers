@protocol IPAQuadGeometry;

@interface IPAPerspectiveTransform : IPAImageTransform {
    struct Matrix4d { double m[16]; } _projectionTransform;
    struct Matrix4d { double m[16]; } _viewingTransform;
    id<IPAQuadGeometry> _intrinsicGeometry;
    BOOL _isInverse;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)inverseTransform;
- (BOOL)canAlignToPixelsExactly;
- (id)initWithInputGeometry:(id)a0 intrinsicGeometry:(id)a1 projectionTransform:(const struct Matrix4d { double x0[16]; } *)a2 viewingTransform:(const struct Matrix4d { double x0[16]; } *)a3;
- (id)intrinsicGeometry;
- (struct Vector2d { double x0; double x1; })mapVector:(struct Vector2d { double x0; double x1; })a0;

@end
