@class ARDualGuidedFilter;
@protocol MTLDevice, MTLLibrary, MTLTexture, MTLComputePipelineState;

@interface ARMatteGenerator : NSObject {
    id<MTLDevice> _device;
    ARDualGuidedFilter *_dualGuidedFilter;
    float _depthScale;
    id<MTLLibrary> _mattingLibrary;
    id<MTLComputePipelineState> _mattingDual;
    id<MTLComputePipelineState> _resampleAlpha;
    id<MTLComputePipelineState> _depthDilation;
    id<MTLTexture> _overlayCoefficientsFG;
    id<MTLTexture> _overlayCoefficientsBG;
    id<MTLTexture> _cameraImageTexture;
    id<MTLTexture> _alphaTexture;
    id<MTLTexture> _occluderDepthDilatedTexture;
    id<MTLTexture> _stencilTexture;
    long long _matteResolution;
    BOOL _enableDoubleMLResolutionMatting;
}

@property (nonatomic) unsigned long long uncertaintyRadius;
@property (nonatomic) unsigned long long erosionRadius;
@property (nonatomic) unsigned long long dilationRadius;

- (void).cxx_destruct;
- (id)initWithDevice:(id)a0 matteResolution:(long long)a1;
- (void)_commonInitWithDevice:(id)a0 matteResolution:(long long)a1 useSmoothing:(BOOL)a2;
- (void)encodeCoefficients:(id)a0 frame:(id)a1 coefficientsForeground:(id)a2 coefficientsBackground:(id)a3;
- (id)generateDilatedDepthFromFrame:(id)a0 commandBuffer:(id)a1;
- (id)generateMatteFromFrame:(id)a0 commandBuffer:(id)a1;
- (id)initWithDevice:(id)a0 matteResolution:(long long)a1 useSmoothing:(BOOL)a2;
- (void)setupAlphaBufferForFrame:(id)a0;
- (void)setupBuffersForFrame:(id)a0;
- (void)setupDepthBufferForFrame:(id)a0;

@end
