@interface PLAssetsdResourceInternalClient : PLAssetsdBaseClient

- (void)requestMasterThumbnailForAssetUUID:(id)a0 completionHandler:(id /* block */)a1;
- (void)batchSaveAssetsWithJobDictionaries:(id)a0 completionHandler:(id /* block */)a1;
- (void)prepareRevertToOriginalForAsset:(id)a0 completionHandler:(id /* block */)a1;
- (void)purgeExpiredOutboundSharingAssetsWithCompletionHandler:(id /* block */)a0;

@end
