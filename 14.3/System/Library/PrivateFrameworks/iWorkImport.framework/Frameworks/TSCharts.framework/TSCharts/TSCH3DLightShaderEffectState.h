@class NSMutableArray;

@interface TSCH3DLightShaderEffectState : NSObject <NSCopying> {
    NSMutableArray *mLights;
    struct LightingPackageShaderEffectState { struct array<glm::detail::tmat4x4<float>, 2> { struct tmat4x4<float> { struct tvec4<float> { union { float x; float r; float s; } ; union { float y; float g; float t; } ; union { float z; float b; float p; } ; union { float w; float a; float q; } ; } value[4]; } __elems_[2]; } transforms; } mPackageState;
}

+ (id)effectState;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)count;
- (void)addObject:(id)a0;
- (void)removeAllObjects;
- (id)objectAtIndex:(unsigned long long)a0;
- (const struct LightingPackageShaderEffectState { struct array<glm::detail::tmat4x4<float>, 2> { struct tmat4x4<float> { struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; } x0[4]; } x0[2]; } x0; } *)packageState;
- (void)setPackageState:(const struct LightingPackageShaderEffectState { struct array<glm::detail::tmat4x4<float>, 2> { struct tmat4x4<float> { struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; } x0[4]; } x0[2]; } x0; } *)a0;

@end
