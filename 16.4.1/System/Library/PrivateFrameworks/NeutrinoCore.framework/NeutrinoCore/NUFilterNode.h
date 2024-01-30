@class NSString;

@interface NUFilterNode : NURenderNode

@property (readonly) NSString *filterName;

- (id)debugQuickLookObject;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)_evaluateImage:(out id *)a0;
- (id)_evaluateImageGeometry:(out id *)a0;
- (id)descriptionSubClassHook;
- (id)initWithFilterName:(id)a0 settings:(id)a1 inputs:(id)a2;
- (id)initWithSettings:(id)a0 inputs:(id)a1;
- (id)nodeByReplayingAgainstCache:(id)a0 pipelineState:(id)a1 error:(out id *)a2;
- (void)nu_updateDigest:(id)a0;
- (BOOL)requiresVideoComposition;
- (id)resolvedNodeWithCachedInputs:(id)a0 settings:(id)a1 pipelineState:(id)a2 error:(out id *)a3;
- (BOOL)shouldCacheNodeForPipelineState:(id)a0;
- (id)initWithFilter:(id)a0 settings:(id)a1 inputs:(id)a2;
- (BOOL)isEqualToRenderNode:(id)a0;
- (BOOL)isGeometryNode;

@end
