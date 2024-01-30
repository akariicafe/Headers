@protocol MTLComputePipelineState;

@interface ColorCubeCorrectionShaders : NSObject {
    id<MTLComputePipelineState> colorCubeCorrectionComputePipeline;
    id<MTLComputePipelineState> maskedColorCubeCorrectionComputePipeline;
}

- (void).cxx_destruct;
- (id)initWithMetal:(id)a0;

@end
