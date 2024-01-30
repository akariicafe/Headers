@interface TSCH3DMatrixRenderProcessor : TSCH3DRetargetRenderProcessor {
    struct StateStack<glm::detail::tmat4x4<float>, 8> { unsigned long long mIndex; struct tmat4x4<float> { struct tvec4<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; union { float w; float a; float q; } ; } value[4]; } mCurrent; struct tmat4x4<float> { struct tvec4<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; union { float w; float a; float q; } ; } value[4]; } mStack[8]; } mTransformStack;
    struct tmat4x4<float> { struct tvec4<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; union { float w; float a; float q; } ; } value[4]; } mProjection;
}

@property (readonly, nonatomic) const struct tmat4x4<float> { struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; } x0[4]; } *current;
@property (readonly, nonatomic) const struct tmat4x4<float> { struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; } x0[4]; } *projection;
@property (readonly, nonatomic) BOOL transformChanged;
@property (readonly, nonatomic) BOOL projectionChanged;

- (void)replace:(struct tmat4x4<float> { struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; } x0[4]; } *)a0;
- (void)scale:(struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } *)a0;
- (id).cxx_construct;
- (void)translate:(struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } *)a0;
- (void)projection:(struct tmat4x4<float> { struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; } x0[4]; } *)a0;
- (void)multiply:(struct tmat4x4<float> { struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; } x0[4]; } *)a0;
- (void)pushMatrix;
- (void)popMatrix;
- (void)copyProjectionInto:(struct tmat4x4<float> { struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; } x0[4]; } *)a0;
- (void)copyTransformInto:(struct tmat4x4<float> { struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; } x0[4]; } *)a0;
- (void)resetChangeFlags;
- (id)normalizedViewAll;

@end
