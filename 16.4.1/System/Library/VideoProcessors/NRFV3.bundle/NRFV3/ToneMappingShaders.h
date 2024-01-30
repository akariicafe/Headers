@protocol MTLComputePipelineState;

@interface ToneMappingShaders : NSObject {
    id<MTLComputePipelineState> _blackSubtractAndAddingContrast;
    id<MTLComputePipelineState> _calculateBlackWhiteStrengthCenter;
    id<MTLComputePipelineState> _ltmApply;
    id<MTLComputePipelineState> _ltmApplyBG;
    id<MTLComputePipelineState> _sffTestFace;
    id<MTLComputePipelineState> _sffFillFace;
    id<MTLComputePipelineState> _mstmCombineAndDownsampleMask;
    id<MTLComputePipelineState> _mstmDownsampleMask;
    id<MTLComputePipelineState> _mstmDownsampleInitial;
    id<MTLComputePipelineState> _mstmDownsampleSubsequent;
    id<MTLComputePipelineState> _mstmPyramidRemixIntermediate;
    id<MTLComputePipelineState> _mstmPyramidRemixFinal;
    id<MTLComputePipelineState> _mstmDiffusionOdd;
    id<MTLComputePipelineState> _mstmDiffusionEven;
    id<MTLComputePipelineState> _mstmsApply;
    id<MTLComputePipelineState> _mstmV2First;
    id<MTLComputePipelineState> _mstmV2Second;
}

- (id)initWithMetal:(id)a0;
- (void).cxx_destruct;

@end
