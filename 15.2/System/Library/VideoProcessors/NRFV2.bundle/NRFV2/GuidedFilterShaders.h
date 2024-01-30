@protocol MTLComputePipelineState;

@interface GuidedFilterShaders : NSObject {
    id<MTLComputePipelineState> _gfDownsampleGuide;
    id<MTLComputePipelineState> _gfCalculateCoefficients;
    id<MTLComputePipelineState> _gfFilterCoefficients;
    id<MTLComputePipelineState> _gfApplyCoefficients;
}

- (id)initWithMetalContext:(id)a0;
- (void).cxx_destruct;

@end
