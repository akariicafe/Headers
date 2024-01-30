@class FigMetalContext, H13FastPowerBlurStageMetal, RawDFPowerBlurTuningParams;

@interface RawDFPowerBlurStage : NSObject {
    FigMetalContext *_metal;
    H13FastPowerBlurStageMetal *_stageMetal;
}

@property (retain, nonatomic) RawDFPowerBlurTuningParams *tuningParams;

+ (int)prewarmShaders:(id)a0;

- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;
- (void)convertRawDFNoiseModel:(struct RawDFRawNoiseModelParameters { float x0; float x1; float x2; float x3; float x4; } *)a0 toPowerBlurNoiseModel:(struct { float x0; float x1; float x2; float x3; float x4; } *)a1;
- (int)runWithInputFrame:(id)a0 frameType:(int)a1 inputTex:(id)a2 lscGainsTex:(id)a3 outputTex:(id)a4;

@end
