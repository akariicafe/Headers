@class PyramidStage, PyramidStorage, DenoiseRemixStage;

@interface AMBNRStage : NSObject {
    PyramidStage *_pyramidStage;
    DenoiseRemixStage *_denoiseRemixStage;
    struct AmbnrConfiguration { struct NoiseModel { float lumaSigmaIntercept; float lumaSigmaSlope; float lumaSigmaMax; void /* unknown type, empty encoding */ chromaSigma; float lumaRemixWeight; float chromaRemixWeight; float blueBoost; float flatnessBoost; float flatnessThreshold; float blurKernelSize; float haloSuppression; float highGainDenoiseThreshold; float highGainSharpenThreshold; float radialSharpnessBoost; float radialFlatnessBoost; struct { float start; float end; float margin; } bluenessCb; struct { float start; float end; float margin; } bluenessCr; } nm; struct NoiseModel { float lumaSigmaIntercept; float lumaSigmaSlope; float lumaSigmaMax; void /* unknown type, empty encoding */ chromaSigma; float lumaRemixWeight; float chromaRemixWeight; float blueBoost; float flatnessBoost; float flatnessThreshold; float blurKernelSize; float haloSuppression; float highGainDenoiseThreshold; float highGainSharpenThreshold; float radialSharpnessBoost; float radialFlatnessBoost; struct { float start; float end; float margin; } bluenessCb; struct { float start; float end; float margin; } bluenessCr; } nmHighGain; struct exposureParameters { float gain; float red_gain; float blue_gain; float digital_gain; float exposure_time; float average_focus_score; float normalized_snr; float original_exposure_bias; float exposure_bias; BOOL is_long; } exposureParams; float lumaLensShadingFactor; float chromaLensShadingFactor; float chromaDemoireStrength; float lumaBlurKernelSize; float chromaBlurKernelSize; void /* unknown type, empty encoding */ lumaUpsamplingCoordOffset; void /* unknown type, empty encoding */ chromaUpsamplingCoordOffset; } _ambnrConf[4];
    PyramidStorage *_pyramid;
    struct PyramidFilterParams { int filterType; float luma_param; float chroma_param; } _pyrFilters[3];
    BOOL _pyramidOffsetsMatchStock;
}

- (void).cxx_destruct;
- (void)selectBlurKernelSize:(struct AmbnrConfiguration { struct NoiseModel { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; struct { float x0; float x1; float x2; } x14; struct { float x0; float x1; float x2; } x15; } x0; struct NoiseModel { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; struct { float x0; float x1; float x2; } x14; struct { float x0; float x1; float x2; } x15; } x1; struct exposureParameters { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; BOOL x9; } x2; float x3; float x4; float x5; float x6; float x7; } *)a0;
- (void)computeConfiguration:(struct exposureParameters { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; BOOL x9; } *)a0 tuningParams:(id)a1 highGainTuningParams:(id)a2 correctBias:(BOOL)a3;
- (id)init:(id)a0 onlySingleImageDenoising:(BOOL)a1;
- (int)setResourcesWithPyramid:(id)a0 laplacianPyramid:(id)a1 denoisedPyramid:(id)a2;
- (int)run:(struct __CVBuffer { } *)a0 metalContext:(id)a1 exposure:(struct exposureParameters { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; BOOL x9; } *)a2 tuningParams:(id)a3 highGainTuningParams:(id)a4 ltmBuffers:(id)a5 correctBias:(BOOL)a6;

@end
