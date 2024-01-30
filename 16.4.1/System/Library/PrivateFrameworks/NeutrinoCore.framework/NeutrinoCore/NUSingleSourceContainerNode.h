@class NUSourceNode;

@interface NUSingleSourceContainerNode : NUSourceContainerNode {
    NUSourceNode *_source;
}

- (void).cxx_destruct;
- (id)initWithAssetIdentifier:(id)a0;
- (id)initWithSourceNode:(id)a0 assetIdentifier:(id)a1;
- (id)primarySourceNode;
- (id)resolveSourceNodeForPipelineState:(id)a0 foundScale:(struct { long long x0; long long x1; } *)a1 error:(out id *)a2;
- (id)sourceNodeForPipelineState:(id)a0 error:(out id *)a1;

@end
