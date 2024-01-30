@interface TSCH3DTexCoordTilingShaderEffect : TSCH3DShaderEffect

+ (void)initialize;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)effect;
+ (id)_singletonAlloc;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addVariables:(id)a0;
- (void)injectCommonShaderInto:(id)a0 context:(id)a1;
- (id)transformedTexcoordBuffer:(id)a0 effectsStates:(id)a1;
- (void)uploadData:(id)a0 effectsStates:(id)a1;

@end
