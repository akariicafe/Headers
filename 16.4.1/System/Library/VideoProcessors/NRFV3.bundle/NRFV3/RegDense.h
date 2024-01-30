@class RegDenseShaders, PyramidStorage_NRF, FigMetalContext, RegPyrFusion;
@protocol MTLTexture, MTLSamplerState;

@interface RegDense : NSObject {
    PyramidStorage_NRF *_pyrConfidence;
    FigMetalContext *_metal;
    RegDenseShaders *_shaders;
    int _pyrwidths[20];
    int _pyrheights[20];
    RegPyrFusion *_sfRegPyr;
    id<MTLTexture> _shiftMap;
    id<MTLTexture> _confidenceMap;
    id<MTLTexture> _blendingWeight;
    id<MTLTexture> _blendingWeightLowLight;
    int _mirroredRepeatClampingMode;
    id<MTLSamplerState> _warpingSampler;
}

+ (int)prewarmShaders:(id)a0;
+ (struct RegDenseMapProperties { struct RegDenseMapProperty { unsigned long long x0; } x0; struct RegDenseMapProperty { unsigned long long x0; } x1; struct RegDenseMapProperty { unsigned long long x0; } x2; })getRegDenseMapPropertiesWithImageWidth:(unsigned long long)a0 imageHeight:(unsigned long long)a1 regDenseParams:(struct RegDenseParameters { float x0; float x1; float x2; struct NoiseModel *x3; int x4; int x5; id x6; id x7; BOOL x8; } *)a2;

- (void)dealloc;
- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;
- (void)reset;
- (int)pyramidConfidence:(id)a0 input:(id)a1;
- (int)blendingWeightLowLightUsing:(id)a0 and:(id)a1 shadowDenseBlendStrength:(float)a2 nonShadowDenseBlendStrength:(float)a3 relativeBrightness:(float)a4 lensShadingFactor:(float)a5 noiseModel:(const struct NoiseModel { float x0; float x1; float x2; } *)a6 homography:(const struct { void /* unknown type, empty encoding */ x0[3]; } *)a7 blendingWeight:(id)a8;
- (int)blendingWeightUsing:(id)a0 and:(id)a1 homography:(const struct { void /* unknown type, empty encoding */ x0[3]; } *)a2 relativeBrightness:(float)a3 shiftMap:(id)a4 confidenceMap:(id)a5 blendingWeight:(id)a6;
- (int)generateSparseBlendingMapUsing:(id)a0 nonReference:(id)a1 sparseBlendingMap:(id)a2 homography:(const struct { void /* unknown type, empty encoding */ x0[3]; } *)a3 relativeBrightness:(float)a4 shiftMap:(id)a5;
- (id)initWithMetalContext:(id)a0 bicubicWarping:(BOOL)a1 useMirroredRepeat:(BOOL)a2;
- (int)prepareWithImageWidth:(unsigned long long)a0 imageHeight:(unsigned long long)a1;
- (int)prepareWithRegDenseParams:(struct RegDenseParameters { float x0; float x1; float x2; struct NoiseModel *x3; int x4; int x5; id x6; id x7; BOOL x8; } *)a0 subAllocatorID:(unsigned int)a1 imageWidth:(unsigned long long)a2 imageHeight:(unsigned long long)a3;
- (void)resetIncludingConfidence:(BOOL)a0;
- (int)runLowLightWithReferenceImage:(id)a0 nonReferenceImage:(id)a1 warpedImage:(id)a2 refWeightsLuma:(id)a3 nonRefWeightsLuma:(id)a4 relativeBrightness:(float)a5 homography:(const struct { void /* unknown type, empty encoding */ x0[3]; } *)a6 regDenseParams:(struct RegDenseParameters { float x0; float x1; float x2; struct NoiseModel *x3; int x4; int x5; id x6; id x7; BOOL x8; } *)a7;
- (int)runWithReferenceImage:(id)a0 nonReferenceImage:(id)a1 warpedImage:(id)a2 relativeBrightness:(float)a3 homography:(const struct { void /* unknown type, empty encoding */ x0[3]; } *)a4;
- (int)runWithReferenceImage:(id)a0 nonReferenceImage:(id)a1 warpedImage:(id)a2 relativeBrightness:(float)a3 homography:(const struct { void /* unknown type, empty encoding */ x0[3]; } *)a4 regDenseParams:(struct RegDenseParameters { float x0; float x1; float x2; struct NoiseModel *x3; int x4; int x5; id x6; id x7; BOOL x8; } *)a5 alwaysDense:(BOOL)a6 refWeightsLevel:(id)a7 nonRefWeightsLevel:(id)a8;
- (int)runWithReferenceTex:(id)a0 nonReferenceTex:(id)a1 relativeBrightness:(float)a2 homography:(const struct { void /* unknown type, empty encoding */ x0[3]; } *)a3 regDenseParams:(struct RegDenseParameters { float x0; float x1; float x2; struct NoiseModel *x3; int x4; int x5; id x6; id x7; BOOL x8; } *)a4 refWeightsLevel:(id)a5 nonRefWeightsLevel:(id)a6 outputShiftMap:(id)a7 outputConfidenceMap:(id)a8 outputBlendingWeight:(id)a9;
- (int)runWithReferenceTex:(id)a0 nonReferenceTex:(id)a1 warpedTex:(id)a2 relativeBrightness:(float)a3 homography:(const struct { void /* unknown type, empty encoding */ x0[3]; } *)a4 alwaysDense:(BOOL)a5;
- (int)runWithReferenceTex:(id)a0 nonReferenceTex:(id)a1 warpedTex:(id)a2 relativeBrightness:(float)a3 homography:(const struct { void /* unknown type, empty encoding */ x0[3]; } *)a4 regDenseParams:(struct RegDenseParameters { float x0; float x1; float x2; struct NoiseModel *x3; int x4; int x5; id x6; id x7; BOOL x8; } *)a5 alwaysDense:(BOOL)a6 refWeightsLevel:(id)a7 nonRefWeightsLevel:(id)a8;
- (int)warpAdditionalImage:(id)a0 warpedImage:(id)a1 homography:(const struct { void /* unknown type, empty encoding */ x0[3]; } *)a2 hybridReg:(BOOL)a3 alwaysDense:(BOOL)a4;
- (int)warpInputTex:(id)a0 outputTex:(id)a1 withHomography:(const struct { void /* unknown type, empty encoding */ x0[3]; } *)a2 shiftMap:(id)a3 confidenceMap:(id)a4 blendingWeight:(id)a5;
- (int)warpInputY:(id)a0 inputUV:(id)a1 outputY:(id)a2 outputUV:(id)a3 homography:(const struct { void /* unknown type, empty encoding */ x0[3]; } *)a4 shiftMap:(id)a5 confidenceMap:(id)a6 blendingWeight:(id)a7;

@end
