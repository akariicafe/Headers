@class FusionRemixUniforms, FigMetalContext;
@protocol SidecarWriter, MTLRenderPipelineState, MTLTexture, MTLComputePipelineState, MTLBuffer;

@interface FusionRemixStage : NSObject {
    struct FusionRemixStageUniformsSBP { struct FusionConfiguration { int fusionAlgo; struct { void /* unknown type, empty encoding */ columns[3]; } xforms3x3[4]; int frameCount; BOOL fixPyramidAlignment; int registrationReference; int longest; int evm; int ev0; int evp; } config; float lumaSigmaIntercept; float lumaSigmaSlope; float lumaSigmaMax; float chromaSigmaCr; float chromaSigmaCb; float blackThreshold; float sharpening; float adaptiveBlur; float hdrEVPChromaWeightBoost; struct { float dense; float normal; } diffWeight; struct { float dense; float normal; } fusionStrength; float relativeBrightness[4]; struct BilateralGridUniforms { int space_sigma; float range_sigma; float oo_space_sigma; float oo_range_sigma; int grid_depth; struct BilateralSolverConfiguration { float min_confidence; float min_input_signal; float max_input_signal; float lambda; } solver; } bgUniforms; float toneMapSaturationFactor; float staticOISSharpening; float accumulatedWeightSaturation; BOOL supportLumaBlotchinessRemoval; } _arrayOfinputParams[8];
    struct AmbnrConfiguration { struct NoiseModel { float lumaSigmaIntercept; float lumaSigmaSlope; float lumaSigmaMax; void /* unknown type, empty encoding */ chromaSigma; float lumaRemixWeight; float chromaRemixWeight; float blueBoost; float flatnessBoost; float flatnessThreshold; float blurKernelSize; float haloSuppression; float highGainDenoiseThreshold; float highGainSharpenThreshold; float radialSharpnessBoost; float radialFlatnessBoost; struct { float start; float end; float margin; } bluenessCb; struct { float start; float end; float margin; } bluenessCr; } nm; struct NoiseModel { float lumaSigmaIntercept; float lumaSigmaSlope; float lumaSigmaMax; void /* unknown type, empty encoding */ chromaSigma; float lumaRemixWeight; float chromaRemixWeight; float blueBoost; float flatnessBoost; float flatnessThreshold; float blurKernelSize; float haloSuppression; float highGainDenoiseThreshold; float highGainSharpenThreshold; float radialSharpnessBoost; float radialFlatnessBoost; struct { float start; float end; float margin; } bluenessCb; struct { float start; float end; float margin; } bluenessCr; } nmHighGain; struct exposureParameters { float gain; float red_gain; float blue_gain; float digital_gain; float exposure_time; float average_focus_score; float normalized_snr; float original_exposure_bias; float exposure_bias; BOOL is_long; } exposureParams; float lumaLensShadingFactor; float chromaLensShadingFactor; float chromaDemoireStrength; float lumaBlurKernelSize; float chromaBlurKernelSize; void /* unknown type, empty encoding */ lumaUpsamplingCoordOffset; void /* unknown type, empty encoding */ chromaUpsamplingCoordOffset; } _oisDenoiseConf[4];
    BOOL _isOISDenoiseParamsSet;
    BOOL _isFusionParamsSet;
    FigMetalContext *_metal;
    FusionRemixUniforms *_uniforms[10];
    struct FusionRemixStageUniformsVertex { struct FusionConfiguration { int fusionAlgo; struct { void /* unknown type, empty encoding */ columns[3]; } xforms3x3[4]; int frameCount; BOOL fixPyramidAlignment; int registrationReference; int longest; int evm; int ev0; int evp; } config; int hdrFusionMode; float width; float height; int bandIndex; } _vertexUniforms;
    void /* unknown type, empty encoding */ _dcValue[4];
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _ROI;
    id<MTLComputePipelineState> _computeGrayGhostCount;
    id<MTLBuffer> _grayGhostCountBuffer;
    id<MTLComputePipelineState> _detectFlickerForHDR;
    id<MTLBuffer> _flickerCountBuffer;
    id<MTLBuffer> _blackSubBandHistogram;
    id<MTLComputePipelineState> _calculateBlackWhiteStrengthCenter;
    id<MTLBuffer> _blackWhiteStrengthCenter;
    id<MTLRenderPipelineState> _blackSubRenderPipeline;
    id<MTLComputePipelineState> _ltmApply;
    id<MTLTexture> _ltcBinsTex;
    id<MTLTexture> _ltcGTCRatioTex;
    id<MTLTexture> _ltcGTCFinalTex;
    id<MTLTexture> _simMapTex;
    id<MTLTexture> _placeHolderTex;
    float _toneMapSaturationFactor;
}

@property (weak, nonatomic) id<SidecarWriter> sidecarWriter;

+ (BOOL)isSupported;
+ (id)getFragmentShader:(id)a0 bandIndex:(int)a1 isLuma:(BOOL)a2;

- (void).cxx_destruct;
- (id)initBandFusion:(id)a0;
- (void)setROI:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setToneCurvesWithLtmEVM:(struct ltmCurves { unsigned short x0[1584]; unsigned short x1[257]; unsigned short x2[257]; } *)a0 ltmEv0:(struct ltmCurves { unsigned short x0[1584]; unsigned short x1[257]; unsigned short x2[257]; } *)a1;
- (int)prepareForFusion:(id)a0 config:(struct FusionConfiguration { int x0; struct { void /* unknown type, empty encoding */ x0[3]; } x1[4]; int x2; BOOL x3; int x4; int x5; int x6; int x7; int x8; } *)a1 fusedPyramid:(id)a2 preAllocatedBuffers:(id)a3 exposures:(struct exposureParameters { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; BOOL x9; } *)a4 tuningParams:(id)a5;
- (int)selectOisFusionMode:(id)a0 config:(struct FusionConfiguration { int x0; struct { void /* unknown type, empty encoding */ x0[3]; } x1[4]; int x2; BOOL x3; int x4; int x5; int x6; int x7; int x8; } *)a1 exposures:(struct exposureParameters { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; BOOL x9; } *)a2 tuningParams:(id)a3 outputFusionMode:(int *)a4;
- (int)selectHdrFusionReferenceFrame:(id)a0 config:(struct FusionConfiguration { int x0; struct { void /* unknown type, empty encoding */ x0[3]; } x1[4]; int x2; BOOL x3; int x4; int x5; int x6; int x7; int x8; } *)a1 exposures:(struct exposureParameters { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; BOOL x9; } *)a2 tuningParams:(id)a3 outputFusionMode:(int *)a4;
- (int)runImageFusion:(id)a0 config:(struct FusionConfiguration { int x0; struct { void /* unknown type, empty encoding */ x0[3]; } x1[4]; int x2; BOOL x3; int x4; int x5; int x6; int x7; int x8; } *)a1 fusedPyramid:(id)a2 fusedDenoisedPyramid:(id)a3 preAllocatedBuffers:(id)a4 denoiser:(id)a5 bilateralGrid:(id)a6 exposures:(struct exposureParameters { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; BOOL x9; } *)a7 tuningParams:(id)a8 confidence:(id)a9 hdrFusionMode:(int)a10 oisFusionMode:(int)a11;
- (int)calculateBlackWhiteContrastCenter:(SEL)a0 contrastParam:(float)a1;
- (void)computeFusionParams:(id)a0 exposures:(struct exposureParameters { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; BOOL x9; } *)a1 config:(struct FusionConfiguration { int x0; struct { void /* unknown type, empty encoding */ x0[3]; } x1[4]; int x2; BOOL x3; int x4; int x5; int x6; int x7; int x8; } *)a2;
- (int)estimateDCValues:(struct FusionConfiguration { int x0; struct { void /* unknown type, empty encoding */ x0[3]; } x1[4]; int x2; BOOL x3; int x4; int x5; int x6; int x7; int x8; } *)a0 ambnrBuffers:(id)a1;
- (int)runBandFusion:(int)a0 config:(struct FusionConfiguration { int x0; struct { void /* unknown type, empty encoding */ x0[3]; } x1[4]; int x2; BOOL x3; int x4; int x5; int x6; int x7; int x8; } *)a1 prevFusedTex:(id)a2 outputTex:(id)a3 bandFusionParams:(struct FusionRemixStageUniformsSBP { struct FusionConfiguration { int x0; struct { void /* unknown type, empty encoding */ x0[3]; } x1[4]; int x2; BOOL x3; int x4; int x5; int x6; int x7; int x8; } x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; struct { float x0; float x1; } x10; struct { float x0; float x1; } x11; float x12[4]; struct BilateralGridUniforms { int x0; float x1; float x2; float x3; int x4; struct BilateralSolverConfiguration { float x0; float x1; float x2; float x3; } x5; } x13; float x14; float x15; float x16; BOOL x17; } *)a4 fragmentBufferIndex:(int)a5 processLuma:(BOOL)a6 processTopBand:(BOOL)a7 computeSpecialMap:(int)a8 hdrFusionMode:(int)a9 ambnrBuffers:(id)a10 simMapTex:(id)a11 toneMapTex:(id)a12 mismatchCoef:(float)a13 confidence:(id)a14 staticOIS:(BOOL)a15 reduceOisGhosting:(BOOL)a16;
- (int)detectFlickerForHDR:(id)a0 config:(struct FusionConfiguration { int x0; struct { void /* unknown type, empty encoding */ x0[3]; } x1[4]; int x2; BOOL x3; int x4; int x5; int x6; int x7; int x8; } *)a1 exposures:(struct exposureParameters { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; BOOL x9; } *)a2 tuningParams:(id)a3 height:(int *)a4;
- (int)computeGrayGhostCount:(id)a0 atBand:(int)a1 config:(struct FusionConfiguration { int x0; struct { void /* unknown type, empty encoding */ x0[3]; } x1[4]; int x2; BOOL x3; int x4; int x5; int x6; int x7; int x8; } *)a2 exposures:(struct exposureParameters { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; BOOL x9; } *)a3 tuningParams:(id)a4 size:(int *)a5;
- (int)computeMismatchCoef:(struct __CVBuffer { } *)a0 morphologyBuffer:(char *)a1 gain:(float)a2 mismatchCoef:(float *)a3 config:(struct FusionConfiguration { int x0; struct { void /* unknown type, empty encoding */ x0[3]; } x1[4]; int x2; BOOL x3; int x4; int x5; int x6; int x7; int x8; } *)a4;
- (int)performLTM:(SEL)a0 bufferOffset:(id)a1 chromaTex:(unsigned long long)a2 outChromaTex:(id)a3 bilateralGrid:(id)a4 detailEnhance:(id)a5 evmTransform:(struct { void /* unknown type, empty encoding */ x0[3]; })a6;
- (int)performBlackSubtractionWithBlackWhiteParams:(SEL)a0 maxContrastStrength:(float)a1 tmpTex:(id)a2 outputTex:(id)a3;
- (void)setOISDenoiseConf:(struct AmbnrConfiguration { struct NoiseModel { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; struct { float x0; float x1; float x2; } x14; struct { float x0; float x1; float x2; } x15; } x0; struct NoiseModel { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; struct { float x0; float x1; float x2; } x14; struct { float x0; float x1; float x2; } x15; } x1; struct exposureParameters { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; BOOL x9; } x2; float x3; float x4; float x5; float x6; float x7; } *)a0;
- (void)setArrayOfInputParams:(struct FusionRemixStageUniformsSBP { struct FusionConfiguration { int x0; struct { void /* unknown type, empty encoding */ x0[3]; } x1[4]; int x2; BOOL x3; int x4; int x5; int x6; int x7; int x8; } x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; struct { float x0; float x1; } x10; struct { float x0; float x1; } x11; float x12[4]; struct BilateralGridUniforms { int x0; float x1; float x2; float x3; int x4; struct BilateralSolverConfiguration { float x0; float x1; float x2; float x3; } x5; } x13; float x14; float x15; float x16; BOOL x17; } *)a0;

@end
