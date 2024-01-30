@protocol MTLComputePipelineState;

@interface GrayGhostDetectionShaders : NSObject {
    id<MTLComputePipelineState> _computeGrayGhostCount;
}

- (void).cxx_destruct;
- (id)initWithMetal:(id)a0;

@end
