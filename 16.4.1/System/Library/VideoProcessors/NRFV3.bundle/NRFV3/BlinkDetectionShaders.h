@protocol MTLComputePipelineState;

@interface BlinkDetectionShaders : NSObject {
    id<MTLComputePipelineState> blinkDetectionComputePipeline;
}

- (id)initWithMetal:(id)a0;
- (void).cxx_destruct;

@end
