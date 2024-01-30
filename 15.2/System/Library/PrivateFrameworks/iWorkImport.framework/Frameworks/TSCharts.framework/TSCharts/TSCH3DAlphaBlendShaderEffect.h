@interface TSCH3DAlphaBlendShaderEffect : TSCH3DShaderEffect

+ (id)effect;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)_singletonAlloc;
+ (void)setChartAlpha:(float)a0 effectsStates:(id)a1;
+ (id)variableAlphaBlendValue;
+ (void)setElementAlpha:(float)a0 effectsStates:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addVariables:(id)a0;
- (void)injectCommonShaderInto:(id)a0 context:(id)a1;
- (void)uploadData:(id)a0 effectsStates:(id)a1;
- (id)variableAlphaBlendValue;

@end
