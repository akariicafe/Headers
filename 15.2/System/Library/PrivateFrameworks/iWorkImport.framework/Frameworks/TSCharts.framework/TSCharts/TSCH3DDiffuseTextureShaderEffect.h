@interface TSCH3DDiffuseTextureShaderEffect : TSCH3DShaderEffect

+ (Class)stateClass;
+ (id)variableTexture;

- (void)addVariables:(id)a0;
- (void)injectCommonShaderInto:(id)a0 context:(id)a1;
- (void)uploadData:(id)a0 effectsStates:(id)a1;
- (id)variableDiffuseTexture;

@end
