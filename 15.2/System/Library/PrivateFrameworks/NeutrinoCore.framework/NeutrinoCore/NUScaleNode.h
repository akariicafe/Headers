@interface NUScaleNode : NUAbstractScaleNode {
    long long _sampleMode;
}

@property (readonly) struct { long long numerator; long long denominator; } targetScale;
@property (readonly) struct { long long numerator; long long denominator; } effectiveScale;

- (id)resolvedNodeWithCachedInputs:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (id)_evaluateImageGeometry:(out id *)a0;
- (id)_evaluateImage:(out id *)a0;
- (id)initWithInput:(id)a0 settings:(id)a1;
- (id)initWithScale:(struct { long long x0; long long x1; })a0 sampleMode:(long long)a1 input:(id)a2;
- (id)initWithTargetScale:(struct { long long x0; long long x1; })a0 effectiveScale:(struct { long long x0; long long x1; })a1 sampleMode:(long long)a2 input:(id)a3;
- (id)initWithPipelineState:(id)a0 input:(id)a1;
- (id)_settingsWithTargetScale:(struct { long long x0; long long x1; })a0 effectiveScale:(struct { long long x0; long long x1; })a1 sampleMode:(long long)a2;

@end
