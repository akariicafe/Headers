@interface TSCH3DLightShaderEffect : TSCH3DShaderEffect {
    unsigned long long mLightCount;
}

+ (Class)stateClass;
+ (void)createStateInEffectsStates:(id)a0;
+ (id)effectWithLightCount:(unsigned long long)a0;
+ (void)updatePackageState:(const struct LightingPackageShaderEffectState { struct array<glm::detail::tmat4x4<float>, 2> { struct tmat4x4<float> { struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; } x0[4]; } x0[2]; } x0; } *)a0 effectsStates:(id)a1;

- (void)dealloc;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)addVariables:(id)a0;
- (void)uploadData:(id)a0 effectsStates:(id)a1;
- (void)uploadLightPositionablesWithUploader:(id)a0 effectsStates:(id)a1;
- (void)uploadLightDirectionalWithUploader:(id)a0 effectsStates:(id)a1;
- (id)initWithLightCount:(unsigned long long)a0;

@end
