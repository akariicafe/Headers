@interface TSCH3DProjectiveTextureShaderEffect : TSCH3DShaderEffect

+ (id)variableTexture;
+ (id)stateSharingID;
+ (id)variableShadowColor;
+ (id)variableShadowBorderFade;

- (void)addVariables:(id)a0;
- (id)variableTexture;
- (void)injectCommonShaderInto:(id)a0 context:(id)a1;
- (id)variableShadowColor;
- (id)variableShadowBorderFade;
- (void)uploadData:(id)a0 effectsStates:(id)a1;

@end
