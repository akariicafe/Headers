@class GlobalDistortionCorrectionShaders, FigMetalContext;

@interface GlobalDistortionCorrectionStage : NSObject {
    FigMetalContext *_metal;
    GlobalDistortionCorrectionShaders *_shaders;
}

+ (int)prewarmShaders:(id)a0;

- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;
- (int)_copyTexture:(id)a0 outTex:(id)a1;
- (int)applyInplace:(struct __CVBuffer { } *)a0 gdcParams:(const struct GlobalDistortionCorrectionParameters { float x0; float x1; float x2[8]; } *)a1 cscParams:(const struct ColorSpaceConversionParameters { struct { void /* unknown type, empty encoding */ x0[3]; } x0; struct { void /* unknown type, empty encoding */ x0[3]; } x1; struct { void /* unknown type, empty encoding */ x0[3]; } x2; struct TransferFunctionParameters { float x0; float x1; float x2; float x3; float x4; } x3; struct TransferFunctionParameters { float x0; float x1; float x2; float x3; float x4; } x4; float x5; float x6; float x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; } *)a2;

@end
