@interface TSCH3DStrokePatternShaderEffect : TSCH3DShaderEffect

+ (id)variableTexture;
+ (id)variableStrokeTexture;

- (void)addVariables:(id)a0;
- (void)injectCommonShaderInto:(id)a0 context:(id)a1;
- (void)uploadData:(id)a0 effectsStates:(id)a1;
- (id)variableStrokeTexture;

@end
