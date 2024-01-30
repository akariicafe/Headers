@interface TSCH3DLightingPackageShaderEffect : TSCH3DShaderEffect

+ (void)setLightingPackageEffectState:(const struct LightingPackageShaderEffectState { struct array<glm::detail::tmat4x4<float>, 2> { struct tmat4x4<float> { struct tvec4<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; union { float x0; float x1; float x2; } x2; union { float x0; float x1; float x2; } x3; } x0[4]; } x0[2]; } x0; } *)a0 effectsStates:(id)a1;

- (void)injectCommonShaderInto:(id)a0 context:(id)a1;

@end
