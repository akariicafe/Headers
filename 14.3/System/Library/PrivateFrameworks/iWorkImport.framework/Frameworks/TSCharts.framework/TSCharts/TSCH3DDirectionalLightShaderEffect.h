@interface TSCH3DDirectionalLightShaderEffect : TSCH3DLightShaderEffect

+ (id)variableDirectionalLightIntensities;

- (id)variables;
- (void)injectCommonShaderInto:(id)a0 context:(id)a1;
- (void)uploadData:(id)a0 effectsStates:(id)a1;
- (id)variableDirectionalLightIntensities;

@end
