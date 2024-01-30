@class NSArray;
@protocol MTLComputePipelineState;

@interface AVTCompositorPipeline : NSObject {
    BOOL _isAffectedBySkin;
    BOOL _shouldCompositeAgainDueToGPUError;
    unsigned long long _affectingComponentsMask;
    NSArray *_bindings;
    id<MTLComputePipelineState> _pipelineState;
}

- (void).cxx_destruct;
- (void)compositeTexture:(id)a0 forMemoji:(id)a1 considerSkin:(BOOL)a2 componentsToConsider:(unsigned long long)a3 computeCommandHandler:(id /* block */)a4 blitCommandHandler:(id /* block */)a5 completionHandler:(id /* block */)a6 helper:(id)a7 helperTokens:(id)a8;
- (id)initWithFunction:(id)a0;

@end
