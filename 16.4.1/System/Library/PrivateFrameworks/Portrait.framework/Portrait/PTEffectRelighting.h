@class PTUtil, PTMSRResize, PTMTLDropHints, SingleColorCubeCorrectionStage, PTSyntheticLight;
@protocol MTLDevice, MTLTexture, MTLComputePipelineState, MTLCommandQueue;

@interface PTEffectRelighting : NSObject {
    id<MTLComputePipelineState> _studioLight;
    id<MTLComputePipelineState> _createLightMask;
    id<MTLComputePipelineState> _fgBgForDebug;
    id<MTLComputePipelineState> _lightMaskForDebug;
    id<MTLComputePipelineState> _relightFullsizeInput;
    id<MTLComputePipelineState> _studioLightDebug;
    id<MTLComputePipelineState> _lightMaskOutline;
    id<MTLComputePipelineState> _filterLightGainApplyToRGB;
    PTSyntheticLight *_syntheticLight;
    PTUtil *_util;
    id<MTLDevice> _device;
    id<MTLCommandQueue> _commandQueue;
    struct RelightingParam { float bgLightIntensity[3]; float bgVignetteLightIntensity[3]; float bgVignetteFalloff; float fgOffsetFactorNear; float fgOffsetFactorFar; float bgThresholdDisparity; float bgEffectThresholdDisparity; float fgLightDesaturation; float fgLightColor[3]; float bgToneCurveReciprocal[3]; } _parameters;
    struct SmoothFaceRectData { float aspect; float lightMaskExponent; float preumbraBendFactor; float lightMaskWidth; float lightMaskFaceOffsetY; void /* unknown type, empty encoding */ faceEyeWeight; struct { void /* unknown type, empty encoding */ columns[2]; } rotation; struct SmoothFaceRect { void /* unknown type, empty encoding */ faceCenter; float faceRadius; void /* unknown type, empty encoding */ bodyPos; void /* unknown type, empty encoding */ bodySize; void /* unknown type, empty encoding */ leftEyeCenter; float leftEyeRadius; void /* unknown type, empty encoding */ rightEyeCenter; float rightEyeRadius; float preumbra; float weight; } faces[4]; } _smoothFaceRects;
    int _frameIndex;
    float _weightHeadEye[2];
    float _eyeRadiusFactor;
    id<MTLTexture> _lightMasks;
    float _lightGainMapScale;
    id<MTLTexture> _lightGainMapLowRes;
    id<MTLTexture> _lightGainMapLowResFiltered;
    id<MTLTexture> _lightGainMapFiltered;
    SingleColorCubeCorrectionStage *_colorCube;
    PTMSRResize *_msrColorPyramid;
    id<MTLTexture> _quarterSizeRGBA;
    id<MTLTexture> _relightSizeRGBA;
    int _colorCubeType;
    PTMTLDropHints *_dropHints;
}

- (id)colorCube;
- (void).cxx_destruct;
- (void)reset;
- (id)gainMap;
- (struct SmoothFaceRectData { float x0; float x1; float x2; float x3; float x4; struct { void /* unknown type, empty encoding */ x0[2]; } x5; struct SmoothFaceRect { float x0; float x1; float x2; float x3; float x4; } x6[4]; } *)smoothFaceRects;
- (void)updateParamters;
- (void)updateColorCube;
- (int)commaSeparatedString:(id)a0 toFloatArray:(float *)a1 maxCount:(int)a2;
- (void)computeSmoothFaceRect:(id)a0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1;
- (void)estimateLightIntensity:(id)a0 inChroma:(id)a1 inFaceRects:(void *)a2 numberOfFaceRects:(int)a3 focusFaceIndex:(id)a4 humanDetections:(id)a5 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a6;
- (void)fgBgForDebug:(id)a0 inDisparity:(id)a1 inNormal:(id)a2 inFocusObject:(id)a3 outMask:(id)a4 debugType:(long long)a5;
- (int)filterLightGainApplyToRGB:(id)a0 inRGB:(id)a1 outRGB:(id)a2 filterLightGainMapLowres:(BOOL)a3;
- (void)initRelightingParam;
- (id)initWithDevice:(id)a0 library:(id)a1 pipelineLibrary:(id)a2 commandQueue:(id)a3 faceAttributesNetwork:(id)a4 effectUtil:(id)a5 util:(id)a6 prewarmOnly:(BOOL)a7 colorSize:(struct { unsigned long long x0; unsigned long long x1; unsigned long long x2; })a8 msrColorPyramid:(id)a9 sharedResources:(id)a10;
- (void)lightMaskDebug:(id)a0 msrColorPyramid:(id)a1 outFaceMask:(id)a2;
- (void)studioLight:(id)a0 inLuma:(id)a1 inChroma:(id)a2 inNormal:(id)a3 inDisparity:(id)a4 inFocusObject:(id)a5 outPTTexture:(id)a6 outRgbaPyramid:(id)a7 colorTransferFunction:(int)a8 colorYCbCrMatrix:(int)a9;
- (id)syntheticLight;

@end
