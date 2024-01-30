@class TSCH3DShaderVariable;

@interface TSCH3DGaussianBlurShaderEffect : TSCH3DShaderEffect {
    TSCH3DShaderVariable *_samplingTexcoords;
}

+ (id)variableTexture;
+ (id)variableAccum;
+ (id)variableTapUnit;
+ (void)setTapUnit:(struct tvec2<float> { union { float x0; float x1; float x2; } x0; union { float x0; float x1; float x2; } x1; })a0 effectsStates:(id)a1;

- (void).cxx_destruct;
- (id)init;
- (void)addVariables:(id)a0;
- (id)variableTexture;
- (void)injectCommonShaderInto:(id)a0 context:(id)a1;
- (void)uploadData:(id)a0 effectsStates:(id)a1;
- (id)variableAccum;
- (id)variableTapUnit;

@end
