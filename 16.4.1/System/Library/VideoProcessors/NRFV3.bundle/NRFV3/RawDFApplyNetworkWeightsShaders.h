@protocol MTLComputePipelineState;

@interface RawDFApplyNetworkWeightsShaders : NSObject {
    id<MTLComputePipelineState> _filterDenoise;
    id<MTLComputePipelineState> _filterDenoiseLumaOnly;
    id<MTLComputePipelineState> _applyNetworkDeghosting;
    id<MTLComputePipelineState> _addPreviousPyramidLevel;
    id<MTLComputePipelineState> _untileAndConvert444To420;
}

- (id)initWithMetal:(id)a0;
- (void).cxx_destruct;

@end
