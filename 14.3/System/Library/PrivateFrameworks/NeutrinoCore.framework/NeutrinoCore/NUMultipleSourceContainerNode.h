@class NSArray;

@interface NUMultipleSourceContainerNode : NUSourceContainerNode

@property (retain) NSArray *sources;

- (void).cxx_destruct;
- (id)description;
- (id)initWithAssetIdentifier:(id)a0;
- (id)sourceNodeForPipelineState:(id)a0 error:(out id *)a1;
- (id)resolveSourceNodeForPipelineState:(id)a0 foundScale:(struct { long long x0; long long x1; } *)a1 error:(out id *)a2;
- (id)primarySourceNode;
- (id)initWithSourceNodes:(id)a0 assetIdentifier:(id)a1;

@end
