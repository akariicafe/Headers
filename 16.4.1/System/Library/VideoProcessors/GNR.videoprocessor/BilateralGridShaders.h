@protocol MTLComputePipelineState, MTLRenderPipelineState;

@interface BilateralGridShaders : NSObject {
    id<MTLComputePipelineState> _bgSplat[2];
    id<MTLComputePipelineState> _bgBlur[3];
    id<MTLComputePipelineState> _bgNormalize;
    id<MTLRenderPipelineState> _bgUpsample8;
    id<MTLRenderPipelineState> _bgUpsample16;
    id<MTLRenderPipelineState> _bgUpsample16ToneMapped;
    id<MTLComputePipelineState> _bgBistochastizeInit;
    id<MTLComputePipelineState> _bgBistochastizeIter;
    id<MTLComputePipelineState> _bgBistochastizeFinal;
    id<MTLComputePipelineState> _bgSolverInit1;
    id<MTLComputePipelineState> _bgSolverInit2;
    id<MTLComputePipelineState> _bgSolverPcgIter0;
    id<MTLComputePipelineState> _bgSolverPcgIter1;
    id<MTLComputePipelineState> _bgSolverPcgIter2;
    id<MTLComputePipelineState> _bgSolverPcgIter3;
}

- (void).cxx_destruct;
- (id)createBasicComputeShader:(const char *)a0 metal:(id)a1;
- (id)initWithMetal:(id)a0 normalizeGridConfidence:(BOOL)a1;

@end
