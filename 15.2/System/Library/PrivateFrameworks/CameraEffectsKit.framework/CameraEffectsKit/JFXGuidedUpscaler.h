@class MPSImageGaussianBlur, JFXMetalHelpers, MPSImageBilinearScale, JFXGuidedFilter;
@protocol MTLDevice, MTLTexture, MTLComputePipelineState, MTLCommandQueue;

@interface JFXGuidedUpscaler : NSObject {
    id<MTLDevice> _device;
    MPSImageBilinearScale *_scaler;
    MPSImageGaussianBlur *_blur;
    struct __CVMetalTextureCache { } *_textureCache;
    id<MTLCommandQueue> _commandQueue;
    JFXMetalHelpers *_helpers;
    JFXGuidedFilter *_guidedFilter;
}

@property (retain, nonatomic) id<MTLTexture> scaledGuidance;
@property (retain, nonatomic) id<MTLTexture> oldScaledGuidance;
@property (retain, nonatomic) id<MTLTexture> currentOutputTexture;
@property (retain, nonatomic) id<MTLTexture> previousOutputTexture;
@property (retain, nonatomic) id<MTLTexture> similarity;
@property (retain, nonatomic) id<MTLComputePipelineState> pipelineStateSimilarity;
@property (retain, nonatomic) id<MTLComputePipelineState> pipelineStateSmoothing;
@property (nonatomic) float temporalSmoothing;
@property (nonatomic) BOOL showSimilarity;
@property (nonatomic) float updateRate;
@property (nonatomic) float similarityGaussianBlur;

- (BOOL)initialized;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDiameter:(int)a0;
- (BOOL)scaleImage:(struct __CVBuffer { } *)a0 guidanceImage:(struct __CVBuffer { } *)a1 destinationImage:(struct __CVBuffer { } *)a2;

@end
