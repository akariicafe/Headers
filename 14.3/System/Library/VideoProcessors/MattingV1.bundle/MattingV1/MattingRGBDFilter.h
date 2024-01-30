@class NSArray, MattingBoxTensorFilter;
@protocol MTLDevice, MTLLibrary, MTLTexture, MTLComputePipelineState;

@interface MattingRGBDFilter : NSObject <MattingFilter> {
    id<MTLDevice> _device;
    id<MTLLibrary> _library;
    id<MTLTexture> _guideStack;
    id<MTLTexture> _guideStackTexture2DView;
    id<MTLTexture> _alphaStack;
    id<MTLTexture> _alphaStackTexture2DView;
    id<MTLTexture> _mean_I;
    id<MTLTexture> _mean_alpha;
    NSArray *_var_I;
    NSArray *_coefficients;
    NSArray *_coefficientsTexture2DView;
    id<MTLTexture> _constraints;
    id<MTLTexture> _constraintsTexture2DView;
    id<MTLComputePipelineState> _nearestNeighborDownsamplingKernel;
    id<MTLComputePipelineState> _halfToAlphaBLKernel;
    id<MTLComputePipelineState> _computeInverted4DGuideCovarianceMatrixKernel;
    id<MTLComputePipelineState> _compute4DCoefficientsKernel;
    id<MTLComputePipelineState> _applyDepthAwareCoefficientsKernel;
    id<MTLComputePipelineState> _applyDepthAwareCoefficientsSamplingKernel;
}

@property (nonatomic) struct { unsigned int internalWidth; unsigned int internalHeight; unsigned int spatialRadius; unsigned int temporalRadius; unsigned int arrayLength; float epsilon; BOOL disableForSameResolution; } config;
@property (retain, nonatomic) MattingBoxTensorFilter *boxTensorFilter;
@property (readonly, nonatomic) BOOL stateComputed;
@property (readonly, nonatomic) BOOL coefficientsComputed;

- (id)initWithDevice:(id)a0 library:(id)a1;
- (void).cxx_destruct;
- (void)releaseResources;
- (int)allocateResources:(struct { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; float x5; BOOL x6; })a0;
- (void)dealloc;
- (int)_compileShadersWithLibrary:(id)a0;
- (int)encodeDisparityToAlphaOn:(id)a0 disparityTexture:(id)a1 destinationTexture:(id)a2;
- (int)encodeNearestNeighborDownSamplingOn:(id)a0 inputTexture:(id)a1 outputTexture:(id)a2;
- (int)encodeCoefficientsOn:(id)a0 guideStack:(id)a1 alphaStack:(id)a2 mean_I:(id)a3 var_I:(id)a4 coefficients:(id)a5;
- (int)encodeApplyCoefficientsOn:(id)a0 colorGuide:(id)a1 disparityGuide:(id)a2 constraints:(id)a3 destinationAlphaTexture:(id)a4;
- (int)encodeStepOn:(id)a0;
- (int)encodeStateOn:(id)a0 colorGuide:(id)a1 disparityGuide:(id)a2 initialSegmentation:(id)a3 constraints:(id)a4;
- (int)encodeUpsampleOn:(id)a0 segmentation:(id)a1 colorGuide:(id)a2 disparityGuide:(id)a3 outputMatte:(id)a4;
- (void)encodePushOn:(id)a0 textureArray:(id)a1 texture:(id)a2;
- (id)initWithMetalContext:(id)a0;

@end
