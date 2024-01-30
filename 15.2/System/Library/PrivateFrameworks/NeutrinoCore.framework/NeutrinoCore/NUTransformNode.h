@interface NUTransformNode : NURenderNode

+ (id)transformNodeWithInput:(id)a0 transform:(id)a1 error:(out id *)a2;

- (BOOL)shouldCacheNodeForPipelineState:(id)a0;
- (BOOL)requiresVideoComposition;
- (id)_transformWithError:(out id *)a0;
- (BOOL)isGeometryNode;
- (id)_evaluateGeometrySpaceMap:(out id *)a0;
- (id)descriptionSubClassHook;
- (BOOL)canPropagateOriginalLivePhotoMetadataTrack;

@end
