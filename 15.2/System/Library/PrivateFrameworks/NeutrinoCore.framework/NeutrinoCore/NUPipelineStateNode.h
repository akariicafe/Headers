@interface NUPipelineStateNode : NURenderNode

- (id)debugQuickLookObject;
- (id)resolvedNodeWithCachedInputs:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (id)nodeByReplayingAgainstCache:(id)a0 pipelineState:(id)a1 error:(out id *)a2;
- (BOOL)shouldCacheNodeForPipelineState:(id)a0;
- (id)_evaluateImage:(out id *)a0;

@end
