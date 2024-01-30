@protocol MTLComputePipelineState;

@interface ToneMappingShaders : NSObject {
    id<MTLComputePipelineState> _blackSubtractAndAddingContrast;
    id<MTLComputePipelineState> _calculateBlackWhiteStrengthCenter;
    id<MTLComputePipelineState> _ltmApply;
    id<MTLComputePipelineState> _ltmApplyBG;
    id<MTLComputePipelineState> _srlGlobalHistogram;
    id<MTLComputePipelineState> _srlFaceHistogram;
    id<MTLComputePipelineState> _srlCalcCoefficients;
    id<MTLComputePipelineState> _srlApply;
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
}

- (void).cxx_destruct;
- (id)initWithMetal:(id)a0;

@end
