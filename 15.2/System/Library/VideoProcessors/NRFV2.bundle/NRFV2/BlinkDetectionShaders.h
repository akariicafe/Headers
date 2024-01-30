@protocol MTLComputePipelineState;

@interface BlinkDetectionShaders : NSObject {
    id<MTLComputePipelineState> blinkDetectionComputePipeline;
}

- (void).cxx_destruct;
- (id)initWithMetal:(id)a0;

@end
