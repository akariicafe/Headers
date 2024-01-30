@class RegDenseShaders, PyramidStorage_NRF, FigMetalContext, RegPyrFusion;
@protocol MTLTexture, MTLBuffer, MTLSamplerState;

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
    id<MTLBuffer> _homographyMatrixBuffer;
    id<MTLSamplerState> _warpingSampler;
}

+ (int)prewarmShaders:(id)a0;

- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reset;
- (int)prepareWithImageWidth:(unsigned long long)a0 imageHeight:(unsigned long long)a1;
- (int)runWithReferenceImage:(id)a0 nonReferenceImage:(id)a1 warpedImage:(id)a2 relativeBrightness:(float)a3 homography:(const struct { void /* unknown type, empty encoding */ x0[3]; } *)a4;
- (void)resetIncludingConfidence:(BOOL)a0;
- (int)prepareWithRegDenseParams:(struct RegDenseParameters { float x0; float x1; float x2; struct NoiseModel *x3; int x4; int x5; id x6; id x7; BOOL x8; } *)a0 subAllocatorID:(unsigned int)a1 imageWidth:(unsigned long long)a2 imageHeight:(unsigned long long)a3;
- (int)runLowLightWithReferenceImage:(id)a0 nonReferenceImage:(id)a1 warpedImage:(id)a2 refWeightsLuma:(id)a3 nonRefWeightsLuma:(id)a4 relativeBrightness:(float)a5 homography:(const struct { void /* unknown type, empty encoding */ x0[3]; } *)a6 regDenseParams:(struct RegDenseParameters { float x0; float x1; float x2; struct NoiseModel *x3; int x4; int x5; id x6; id x7; BOOL x8; } *)a7;
- (int)pyramidConfidence:(id)a0 input:(id)a1;
- (id)initWithMetalContext:(id)a0 bicubicWarping:(BOOL)a1;
- (int)runWithReferenceImage:(id)a0 nonReferenceImage:(id)a1 warpedImage:(id)a2 relativeBrightness:(float)a3 homography:(const struct { void /* unknown type, empty encoding */ x0[3]; } *)a4 regDenseParams:(struct RegDenseParameters { float x0; float x1; float x2; struct NoiseModel *x3; int x4; int x5; id x6; id x7; BOOL x8; } *)a5 alwaysDense:(BOOL)a6 refWeightsLevel:(id)a7 nonRefWeightsLevel:(id)a8;
- (int)warpAdditionalImage:(id)a0 warpedImage:(id)a1 homography:(const struct { void /* unknown type, empty encoding */ x0[3]; } *)a2 hybridReg:(BOOL)a3 alwaysDense:(BOOL)a4;
- (int)blendingWeightUsing:(id)a0 and:(id)a1 homography:(const struct { void /* unknown type, empty encoding */ x0[3]; } *)a2 relativeBrightness:(float)a3;
- (int)blendingWeightLowLightUsing:(id)a0 and:(id)a1 shadowDenseBlendStrength:(float)a2 nonShadowDenseBlendStrength:(float)a3 relativeBrightness:(float)a4 lensShadingFactor:(float)a5 noiseModel:(const struct NoiseModel { float x0; float x1; float x2; } *)a6 homography:(const struct { void /* unknown type, empty encoding */ x0[3]; } *)a7;
- (int)generateSparseBlendingMapUsing:(id)a0 nonReference:(id)a1 sparseBlendingMap:(id)a2 homography:(const struct { void /* unknown type, empty encoding */ x0[3]; } *)a3 relativeBrightness:(float)a4;
- (int)warpFrameWithInputYAndConfidence:(id)a0 inputUV:(id)a1 outputY:(id)a2 outputUV:(id)a3 homography:(const struct { void /* unknown type, empty encoding */ x0[3]; } *)a4;
- (int)warpFrameWithInputY:(id)a0 inputUV:(id)a1 outputY:(id)a2 outputUV:(id)a3 homography:(const struct { void /* unknown type, empty encoding */ x0[3]; } *)a4 hybridReg:(BOOL)a5 alwaysDense:(BOOL)a6;

@end
