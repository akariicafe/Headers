@class NUSourceContainerNode;

@interface NULivePhotoSourceContainerNode : NUSourceContainerNode {
    NUSourceContainerNode *_image;
    NUSourceContainerNode *_video;
}

- (void).cxx_destruct;
- (id)initWithAssetIdentifier:(id)a0;
- (id)primarySourceNode;
- (id)sourceNodeForPipelineState:(id)a0 error:(out id *)a1;
- (id)resolveSourceNodeForPipelineState:(id)a0 foundScale:(struct { long long x0; long long x1; } *)a1 error:(out id *)a2;
- (id)initWithImageContainerNode:(id)a0 videoContainerNode:(id)a1 assetIdentifier:(id)a2;
- (id)containerNodeForPipelineState:(id)a0;

@end
