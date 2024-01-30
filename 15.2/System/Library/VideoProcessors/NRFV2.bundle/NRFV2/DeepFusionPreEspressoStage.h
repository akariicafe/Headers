@class DeepFusionPreEspressoKernels, FigMetalContext;
@protocol MTLBuffer;

@interface DeepFusionPreEspressoStage : NSObject {
    id<MTLBuffer> _noiseParamBuffer;
    DeepFusionPreEspressoKernels *_kernels;
    FigMetalContext *_metalContext;
    int _networkVersion;
}

- (void).cxx_destruct;
- (id)initWithContext:(id)a0 networkVersion:(int)a1;
- (int)filterChroma:(id)a0 outChroma:(id)a1 alpha:(float)a2;
- (int)estimateNoiseRefNoise:(id)a0 synthLongNoise:(SEL)a1 synthRefNoisePretuning:(id)a2 synthLongNoisePretuning:(id)a3 synthRefLuma:(id)a4 synthRefChroma:(id)a5 synthLongLuma:(id)a6 synthLongChroma:(id)a7 lscGains:(id)a8 slFusionMap:(id)a9 longFusionMap:(id)a10 outRefNoisePyramid:(id)a11 outSLNoisePyramid:(id)a12 noiseEstimationParams:(id)a13 offset:(id)a14 tileDimension:(struct NoiseEstimationParameters { float x0; float x1; float x2; struct DeepFusionFrameMeta *x3; id x4; id x5; float x6; struct NoiseDivisorQuantizationBoundaries { float x0; float x1; } x7; } *)a15;
- (int)setEstimateNoiseParams:(SEL)a0 fullDimension:(struct NoiseEstimationParameters { float x0; float x1; float x2; struct DeepFusionFrameMeta *x3; id x4; id x5; float x6; struct NoiseDivisorQuantizationBoundaries { float x0; float x1; } x7; } *)a1 intermediateEncodingParams:(const struct IntermediateEncodingParameters { float x0; float x1; } *)a2;
- (void)computeGlobalNoiseFactor:(id)a0 totalGain:(float)a1 synthRefFactor:(float *)a2 synthLongFactor:(float *)a3;
- (void)getLumaMaskTuning:(const struct NoiseEstimationParameters { float x0; float x1; float x2; struct DeepFusionFrameMeta *x3; id x4; id x5; float x6; struct NoiseDivisorQuantizationBoundaries { float x0; float x1; } x7; } *)a0 outTuning:(struct LumaMaskTuningParam { float x0; float x1; float x2; } *)a1;
- (struct DeepFusionRawNoiseModelParameters { float x0; float x1; float x2; float x3; unsigned char x4; float x5; })_createRawNoiseModelParameters:(const struct exposureParameters { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; BOOL x19; BOOL x20; BOOL x21; float x22; BOOL x23; float x24; float x25; float x26; } *)a0;
- (struct DFSynthLongHighlightParameters { float x0; float x1; float x2; float x3; float x4; })_createHighlightParameters:(const struct DeepFusionFrameMeta { long long x0; struct exposureParameters { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; BOOL x19; BOOL x20; BOOL x21; float x22; BOOL x23; float x24; float x25; float x26; } x1; struct exposureParameters { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; BOOL x19; BOOL x20; BOOL x21; float x22; BOOL x23; float x24; float x25; float x26; } x2; struct exposureParameters { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; float x17; float x18; BOOL x19; BOOL x20; BOOL x21; float x22; BOOL x23; float x24; float x25; float x26; } x3; } *)a0 highlightTuning:(id)a1 totalGain:(float)a2;
- (void)getNoiseTuningParams:(SEL)a0 fullDimension:(const struct NoiseEstimationParameters { float x0; float x1; float x2; struct DeepFusionFrameMeta *x3; id x4; id x5; float x6; struct NoiseDivisorQuantizationBoundaries { float x0; float x1; } x7; } *)a1 outTuning:(struct NoiseTuningParams { float x0; float x1; float x2; float x3; struct LumaMaskTuningParam { float x0; float x1; float x2; } x4; } *)a2;
- (int)yuvCopyAndBias:(id)a0 chromaInput:(id)a1 lumaOutput:(id)a2 chromaOutput:(id)a3;
- (int)yuvPlanarRGBToRGBA:(id)a0 outRGBA:(id)a1;

@end
