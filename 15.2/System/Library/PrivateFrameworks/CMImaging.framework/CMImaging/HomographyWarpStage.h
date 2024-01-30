@class FigMetalContext;

@interface HomographyWarpStage : NSObject {
    FigMetalContext *_metal;
}

+ (int)prewarmShaders:(id)a0;

- (void).cxx_destruct;
- (id)initHomographyWarpStage:(id)a0;
- (int)runWarpUsingTransform:(struct { void /* unknown type, empty encoding */ x0[3]; })a0 inputLumaTex:(id)a1 inputChromaTex:(id)a2 outputLumaTex:(id)a3 outputChromaTex:(id)a4;

@end
