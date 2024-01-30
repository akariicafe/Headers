@class NUSourceNode;

@interface NUSourceContainerNode : NURenderNode

@property (readonly) NUSourceNode *primarySourceNode;

+ (id)sourceContainerNodeFromSource:(id)a0 error:(out id *)a1;

- (unsigned long long)_hash;
- (id)initWithAssetIdentifier:(id)a0;
- (id)initWithSettings:(id)a0 inputs:(id)a1;
- (id)preparedSourceNodeForPipelineState:(id)a0 pipelineSettings:(id)a1 sourceSettings:(id)a2 error:(out id *)a3;
- (id)sourceNodeForPipelineState:(id)a0 error:(out id *)a1;
- (id)resolveSourceNodeForPipelineState:(id)a0 foundScale:(struct { long long x0; long long x1; } *)a1 error:(out id *)a2;
- (BOOL)isEqualToRenderNode:(id)a0;

@end
