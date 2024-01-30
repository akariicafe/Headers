@class NSDictionary, NUSourceContainerNode;

@interface NUSubsampleNode : NUAbstractScaleNode

@property (readonly) NUSourceContainerNode *sourceContainer;
@property (readonly) NSDictionary *pipelineSettings;
@property (readonly) NSDictionary *sourceOptions;
@property long long appliedSubsampleFactor;
@property (readonly) long long subsampleFactor;

+ (long long)subsampleFactorForScale:(struct { long long x0; long long x1; })a0 additionalScale:(struct { long long x0; long long x1; } *)a1;

- (id)debugQuickLookObject;
- (void).cxx_destruct;
- (id)_sourceNode;
- (id)_evaluateImage:(out id *)a0;
- (id)_evaluateImageGeometry:(out id *)a0;
- (id)_evaluateVideoComposition:(out id *)a0;
- (id)_evaluateVideoProperties:(out id *)a0;
- (id)initWithInput:(id)a0 settings:(id)a1;
- (id)nodeByReplayingAgainstCache:(id)a0 pipelineState:(id)a1 error:(out id *)a2;
- (id)_evaluateImageProperties:(out id *)a0;
- (id)initWithPreparedSource:(id)a0 container:(id)a1 pipelineSettings:(id)a2 sourceOptions:(id)a3;
- (id)initWithSubsampleFactor:(long long)a0 source:(id)a1 container:(id)a2 pipelineSettings:(id)a3 sourceOptions:(id)a4;
- (long long)resolveSubsampleFactorForPipelineState:(id)a0 error:(out id *)a1;
- (long long)resolveSubsampleFactorForPipelineState:(id)a0 sourceScale:(struct { long long x0; long long x1; })a1;

@end
