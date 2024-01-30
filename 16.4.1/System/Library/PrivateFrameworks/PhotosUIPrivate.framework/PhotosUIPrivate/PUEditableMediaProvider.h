@interface PUEditableMediaProvider : PUMediaProvider

- (int)requestAVAssetForVideo:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;
- (int)requestAsynchronousVideoURLForAsset:(id)a0 options:(id)a1 resultHandler:(id /* block */)a2;

@end
