@class ARUIRingsEndCapShadowState, ARUIRingsFillState, ARUIRingsAlphaReductionState, ARUIRingsEmptyState;

@interface ARUIOverlappingRingsRenderPipelineFactory : ARUIRingsRenderPipelineFactory {
    ARUIRingsEmptyState *_emptyState;
    ARUIRingsFillState *_fillState;
    ARUIRingsEndCapShadowState *_endCapShadowState;
    ARUIRingsAlphaReductionState *_alphaReductionState;
}

- (id)initWithDevice:(id)a0 library:(id)a1;
- (void).cxx_destruct;
- (id)initWithDeviceSPI:(id)a0 librarySPI:(id)a1;
- (id)pipelineForConfiguration:(id)a0;

@end
