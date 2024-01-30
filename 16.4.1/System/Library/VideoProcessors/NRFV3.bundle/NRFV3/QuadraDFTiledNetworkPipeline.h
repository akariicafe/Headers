@class NSObject, QuadraDFShaders, FigMetalContext, DeepFusionLaplacianPyramid, DeepFusionGaussianPyramid, RawDFNetworkPreprocess, RawDFApplyNetworkWeights;
@protocol OS_dispatch_queue, MTLTexture;

@interface QuadraDFTiledNetworkPipeline : NSObject {
    FigMetalContext *_metal;
    QuadraDFShaders *_shaders;
    RawDFNetworkPreprocess *_qdfNetworkPreprocess;
    RawDFApplyNetworkWeights *_applyNetworkWeights;
    unsigned long long _tileWidth;
    unsigned long long _tileHeight;
    void *_fusionPlan;
    struct { void *plan; int network_index; } _fusionNetwork;
    void *_espressoContext;
    NSObject<OS_dispatch_queue> *_espressoDispatchQueue;
    BOOL _isNetworkLoaded;
    struct __CVBuffer *_fusionInputPb[2][4];
    id<MTLTexture> _fusionInputTex[2][4];
    struct __CVBuffer *_fusionOutputPb[2][4];
    id<MTLTexture> _fusionOutputTex[2][4];
    DeepFusionGaussianPyramid *_gaussianPyramids[2][2];
    DeepFusionLaplacianPyramid *_laplacianPyramids[2][2];
    DeepFusionGaussianPyramid *_gaussianNoisePyramids[2][2];
    DeepFusionGaussianPyramid *_qsrFusionMapGaussianPyramids[2];
}

@property (nonatomic) struct RawDFNetworkUniforms { BOOL useArtifactCorrectionNetwork; void /* unknown type, empty encoding */ outputTextureDimensions; void /* unknown type, empty encoding */ quadraSynetheticReferenceValidRegion; struct RawDFNoiseUniforms { float eitRatio; float longEitRatio; float qsumEitRatio; float syntheticLongTotalNoiseFactor; float syntheticLongGlobalNoiseFactor; float syntheticReferenceTotalNoiseFactor; float syntheticReferenceGlobalNoiseFactor; float artifactCorrectionNoiseFactor; float qsrHighResNoiseFactor; float qsrLowResNoiseFactor; float qsrGlobalNoiseFactor; float slGlobalNoiseFactor; float fusionMaxNoiseFactor; float lscNoiseFactor; struct RawDFLumaMaskTuningParam { float lumaExponent; float srMaxMultFactor; float slMaxMultFactor; } lumaMask; struct RawDFRawNoiseModelParameters { void /* unknown type, empty encoding */ whiteBalanceGains; float analogGain; float readNoise; float conversionGain; float sensorBlackLevel; float lsModulationWeight; } realLongNoiseParams; struct RawDFRawNoiseModelParameters { void /* unknown type, empty encoding */ whiteBalanceGains; float analogGain; float readNoise; float conversionGain; float sensorBlackLevel; float lsModulationWeight; } syntheticLongNoiseParams; struct RawDFRawNoiseModelParameters { void /* unknown type, empty encoding */ whiteBalanceGains; float analogGain; float readNoise; float conversionGain; float sensorBlackLevel; float lsModulationWeight; } syntheticReferenceNoiseParams; struct RawDFRawNoiseModelParameters { void /* unknown type, empty encoding */ whiteBalanceGains; float analogGain; float readNoise; float conversionGain; float sensorBlackLevel; float lsModulationWeight; } quadraSyntheticReferenceNoiseParams; struct RawDFFusionMapQuantizationBoundaries { float minValue; float maxValue; } syntheticLongQuantBounds; } noiseEstimationUniforms; struct RawDFDeghostUniforms { float gaussianDiffFactor; float laplacianDiffFactor; float highlightLumaMid; float highlightLumaSlope; float highlightMaskFactor; float globalDeghostingFactor; float noiseGhostReductionFactor; } deghostUniforms[4]; struct RawDFDenoiseUniforms { float noiseFactor; float addBackFactor; float skinAddBackFactor; float skyAddBackFactor; float fusionAddBackFactor; struct TileBounds { int index; int in_x; int in_y; int in_w; int in_h; int out_x; int out_y; int out_w; int out_h; int padding; } tile; void /* unknown type, empty encoding */ textureDimensions; int pyramidLevel; } denoiseUniforms[4]; } shaderUniforms;

- (void)dealloc;
- (void).cxx_destruct;
- (void)releaseTextures;
- (int)allocateEspressoBuffers;
- (int)allocateMetalTexturesWithTileWidth:(unsigned long long)a0 tileHeight:(unsigned long long)a1;
- (int)allocateTextures;
- (int)convertSyntheticLongRGBtoYUVandTile:(struct TileBounds { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; } *)a0 syntheticLong:(id)a1 outTile:(id)a2 outPlanarTile:(id)a3;
- (int)convertYUV420to444AndTile:(struct TileBounds { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; } *)a0 luma:(id)a1 chroma:(id)a2 outTile:(id)a3 outPlanarTile:(id)a4;
- (void)freeFusionEspressoNetworkBuffers;
- (int)generateImagePyramids:(struct TileBounds { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; } *)a0;
- (int)initEspressoNetwork;
- (int)initImagePyramidsWithTileWidth:(long long)a0 tileHeight:(long long)a1;
- (id)initWithContext:(id)a0 tileWidth:(unsigned long long)a1 tileHeight:(unsigned long long)a2;
- (int)stage1GPUonTile:(struct TileBounds { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; } *)a0 quadraSyntheticReference:(id)a1 quadraSyntheticReferenceFusionMap:(id)a2 syntheticReferenceNoiseMap:(id)a3 rawDFOutputLuma:(id)a4 rawDFOutputChroma:(id)a5 lscGains:(id)a6;
- (int)stage1GPUonTile:(struct TileBounds { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; } *)a0 quadraSyntheticReference:(id)a1 quadraSyntheticReferenceFusionMap:(id)a2 syntheticReferenceNoiseMap:(id)a3 syntheticLong:(id)a4 lscGains:(id)a5;
- (int)stage2ANEonTile:(struct TileBounds { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; } *)a0;
- (int)stage3GPUonTile:(struct TileBounds { int x0; int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; } *)a0 outLuma:(id)a1 outChroma:(id)a2;
- (void)unloadEspressoNetworks;

@end
