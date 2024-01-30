@protocol MTLComputePipelineState;

@interface GrayGhostDetectionShaders : NSObject {
    id<MTLComputePipelineState> _computeGrayGhostCount;
    id<MTLComputePipelineState> _computeGrayGhostCountRGB;
}

- (id)initWithMetal:(id)a0;
- (void).cxx_destruct;

@end
