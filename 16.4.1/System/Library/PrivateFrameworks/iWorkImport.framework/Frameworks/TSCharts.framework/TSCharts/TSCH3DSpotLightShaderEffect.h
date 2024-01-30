@interface TSCH3DSpotLightShaderEffect : TSCH3DLightShaderEffect

+ (id)variableSpotLightLightIntensities;

- (id)variables;
- (void)injectCommonShaderInto:(id)a0 context:(id)a1;
- (void)uploadData:(id)a0 effectsStates:(id)a1;
- (void)uploadSpotLightWithUploader:(id)a0 effectsStates:(id)a1;
- (id)variableSpotLightLightIntensities;

@end
