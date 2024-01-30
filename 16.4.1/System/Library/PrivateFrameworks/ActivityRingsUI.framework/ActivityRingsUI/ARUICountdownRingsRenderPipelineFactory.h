@class ARUIRingsCountdownState, ARUIRingsAlphaReductionState, ARUIRingsEmptyState;

@interface ARUICountdownRingsRenderPipelineFactory : ARUIRingsRenderPipelineFactory {
    ARUIRingsEmptyState *_emptyState;
    ARUIRingsCountdownState *_countdownState;
    ARUIRingsAlphaReductionState *_alphaReductionState;
}

- (id)initWithDevice:(id)a0 library:(id)a1;
- (void).cxx_destruct;
- (id)initWithDeviceSPI:(id)a0 librarySPI:(id)a1;
- (id)pipelineForConfiguration:(id)a0;

@end
