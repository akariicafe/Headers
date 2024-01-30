@interface TSCH3DTransform : NSObject <NSCopying> {
    struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } mTranslation;
    struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } mScaleFactor;
    struct tquat<float> { float x; float y; float z; float w; } mRotation;
    struct tvec3<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; } mCenter;
    struct tmat4x4<float> { struct tvec4<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; union { float w; float a; float q; } ; } value[4]; } mMatrix;
    BOOL mDirty;
}

@property (nonatomic) struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } translation;
@property (nonatomic) struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } scaleFactor;
@property (nonatomic) struct tquat<float> { float x0; float x1; float x2; float x3; } rotation;
@property (nonatomic) struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } center;

+ (id)transform;

- (const struct tmat4x4<float> { struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; } x0[4]; } *)transform;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (struct Transform { struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x0; struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x1; struct tquat<float> { float x0; float x1; float x2; float x3; } x2; struct tvec3<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; } x3; BOOL x4; })asTSCH3DCPPTransform;

@end
