@interface PLAssetsdResourceInternalClient : PLAssetsdBaseClient

- (void)batchSaveAssetsWithJobDictionaries:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestMasterThumbnailForAssetUUID:(id)a0 completionHandler:(id /* block */)a1;

@end
