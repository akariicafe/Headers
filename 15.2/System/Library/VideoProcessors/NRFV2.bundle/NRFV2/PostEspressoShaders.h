@protocol MTLComputePipelineState;

@interface PostEspressoShaders : NSObject {
    id<MTLComputePipelineState> _kernelCollapseWeightsOnTileStage1;
    id<MTLComputePipelineState> _kernelApplyEspressoOutput[4];
    id<MTLComputePipelineState> _kernelApplyEspressoOutputLumaOnly;
    id<MTLComputePipelineState> _kernelAddPreviousLevel;
    id<MTLComputePipelineState> _kernelDeghostAndDenoise[4];
    id<MTLComputePipelineState> _kernelConvert444to420;
    id<MTLComputePipelineState> _kernelApplyDesaturationToChroma;
    id<MTLComputePipelineState> _kernelComputeTextureness;
    id<MTLComputePipelineState> _kernelComputeDenoiseBoostMap;
}

- (void).cxx_destruct;
- (id)initWithMetal:(id)a0 networkVersion:(int)a1;

@end
