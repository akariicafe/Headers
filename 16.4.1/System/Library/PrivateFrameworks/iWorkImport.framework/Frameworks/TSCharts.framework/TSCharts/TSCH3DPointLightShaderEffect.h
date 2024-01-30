@interface TSCH3DPointLightShaderEffect : TSCH3DLightShaderEffect

+ (id)variableLightIntensities;

- (id)variables;
- (void)injectCommonShaderInto:(id)a0 context:(id)a1;
- (void)uploadData:(id)a0 effectsStates:(id)a1;
- (id)variableLightIntensities;

@end
