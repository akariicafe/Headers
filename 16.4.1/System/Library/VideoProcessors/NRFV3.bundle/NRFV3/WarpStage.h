@class FigMetalContext;

@interface WarpStage : NSObject {
    FigMetalContext *_metal;
}

+ (int)prewarmShaders:(id)a0;

- (int)runWarpUsingTransform:(struct { void /* unknown type, empty encoding */ x0[3]; })a0 inputLumaTex:(id)a1 inputChromaTex:(id)a2 outputLumaTex:(id)a3 outputChromaTex:(id)a4;
- (void).cxx_destruct;
- (id)initWarpStage:(id)a0;
- (int)runWarpUsingTransform:(struct { void /* unknown type, empty encoding */ x0[3]; })a0 inputYCbCrTex:(id)a1 inputCscParams:(const struct ColorSpaceConversionParameters { struct { void /* unknown type, empty encoding */ x0[3]; } x0; struct { void /* unknown type, empty encoding */ x0[3]; } x1; struct { void /* unknown type, empty encoding */ x0[3]; } x2; struct TransferFunctionParameters { float x0; float x1; float x2; float x3; float x4; } x3; struct TransferFunctionParameters { float x0; float x1; float x2; float x3; float x4; } x4; float x5; float x6; float x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; } *)a2 outputLinearLumaTex:(id)a3 outputLinearChromaTex:(id)a4;

@end
