@interface NUClampNode : NURenderNode

- (id)initWithInput:(id)a0;
- (id)_evaluateImage:(out id *)a0;
- (id)initWithSettings:(id)a0 inputs:(id)a1;
- (id)resolvedNodeWithCachedInputs:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (BOOL)shouldCacheNodeForPipelineState:(id)a0;

@end
