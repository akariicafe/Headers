@protocol MTLComputePipelineState;

@interface SemanticStylesShaders : NSObject {
    id<MTLComputePipelineState> _ssCalculateLocalHistogramStats;
    id<MTLComputePipelineState> _ssCalculateGlobalHistogram;
    id<MTLComputePipelineState> _ssCalculateGlobalStats;
    id<MTLComputePipelineState> _ssCreateGuide;
    id<MTLComputePipelineState> _ssRenderAdjustments;
}

- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;

@end
