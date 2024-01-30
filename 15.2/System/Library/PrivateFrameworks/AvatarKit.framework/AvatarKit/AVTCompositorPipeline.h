@class NSArray;
@protocol MTLComputePipelineState;

@interface AVTCompositorPipeline : NSObject {
    BOOL _isAffectedBySkin;
    unsigned long long _affectingComponentsMask;
    NSArray *_bindings;
    id<MTLComputePipelineState> _pipelineState;
}

- (void).cxx_destruct;
- (id)initWithFunction:(id)a0;
- (void)compositeTexture:(id)a0 forMemoji:(id)a1 considerSkin:(BOOL)a2 componentsToConsider:(unsigned long long)a3 computeCommandHandler:(id /* block */)a4 blitCommandHandler:(id /* block */)a5 helper:(id)a6 helperTokens:(id)a7;

@end
