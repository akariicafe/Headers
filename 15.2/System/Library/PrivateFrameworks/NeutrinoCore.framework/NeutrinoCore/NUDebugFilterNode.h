@interface NUDebugFilterNode : NUFilterNode

- (id)resolvedNodeWithCachedInputs:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (BOOL)requiresVideoComposition;

@end
