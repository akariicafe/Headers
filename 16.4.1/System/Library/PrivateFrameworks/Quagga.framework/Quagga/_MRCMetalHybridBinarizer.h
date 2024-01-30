@class _MRCMetalContext;
@protocol MTLComputePipelineState;

@interface _MRCMetalHybridBinarizer : NSObject {
    _MRCMetalContext *_metalContext;
    id<MTLComputePipelineState> _calcuateBlackPointsPipelineState;
    id<MTLComputePipelineState> _fixBlackPointsPipelineState;
    id<MTLComputePipelineState> _thresholdPipelineState;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithMetalContext:(id)a0 error:(id *)a1;
- (id)newTextureByBinarizingPixelBuffer:(struct __CVBuffer { } *)a0 error:(id *)a1;

@end
