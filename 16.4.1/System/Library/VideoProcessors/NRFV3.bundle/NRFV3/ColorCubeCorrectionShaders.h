@protocol MTLComputePipelineState;

@interface ColorCubeCorrectionShaders : NSObject {
    id<MTLComputePipelineState> colorCubeCorrectionComputePipeline;
    id<MTLComputePipelineState> maskedColorCubeCorrectionComputePipeline;
}

- (id)initWithMetal:(id)a0;
- (void).cxx_destruct;

@end
