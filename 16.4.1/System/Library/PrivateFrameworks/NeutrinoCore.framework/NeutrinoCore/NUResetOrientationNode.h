@interface NUResetOrientationNode : NUOrientationNode

- (id)_evaluateVideo:(out id *)a0;
- (id)resolvedNodeWithCachedInputs:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (long long)outputImageOrientation:(long long)a0;

@end
