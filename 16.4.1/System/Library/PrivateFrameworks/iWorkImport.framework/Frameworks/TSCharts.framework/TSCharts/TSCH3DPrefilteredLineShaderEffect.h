@interface TSCH3DPrefilteredLineShaderEffect : TSCH3DShaderEffect

+ (id)variableTexture;
+ (id)variablePrefilterBox;
+ (id)variablePrefilterBoxTexture;
+ (id)variablePrefilterBoxTextureCoordinate;
+ (id)variablePrefilterLineColor;

- (void)addVariables:(id)a0;
- (void)injectCommonShaderInto:(id)a0 context:(id)a1;
- (void)uploadData:(id)a0 effectsStates:(id)a1;
- (id)variablePrefilterBox;
- (id)variablePrefilterBoxTexture;
- (id)variablePrefilterBoxTextureCoordinate;
- (id)variablePrefilterLineColor;

@end
