@interface CAMeshInterpolator : CAMeshTransform {
    struct Interpolator { void /* function */ **x0; struct Atomic { struct { int x0; } x0; } x1; struct Ref<CA::Render::Object> { struct Object *x0; } x2; struct Ref<CA::Render::Object> { struct Object *x0; } x3; struct Ref<CA::Render::Object> { struct Object *x0; } x4; struct Ref<CA::Render::Object> { struct Object *x0; } x5; struct ValueInterpolator { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; BOOL x9; } x6; } *_interp;
}

- (void)dealloc;
- (id)meshTransformForLayer:(id)a0;

@end
