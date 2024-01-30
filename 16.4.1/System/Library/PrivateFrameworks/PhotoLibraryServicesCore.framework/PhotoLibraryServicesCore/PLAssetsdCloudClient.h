@interface PLAssetsdCloudClient : PLAssetsdBaseClient

- (void)cancelCPLDownloadWithContext:(id)a0 completionHandler:(id /* block */)a1;
- (void)computeFingerPrintsOfAsset:(id)a0 synchronously:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)cancelCPLDownloadImageDataWithVirtualTaskIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (void)requestCPLDownloadImageDataForAssets:(id)a0 format:(unsigned long long)a1 doneTokens:(id)a2 completionHandler:(id /* block */)a3;
- (void)downloadCloudPhotoLibraryAsset:(id)a0 resourceType:(unsigned long long)a1 highPriority:(BOOL)a2 trackCPLDownload:(BOOL)a3 downloadIsTransient:(BOOL)a4 proposedTaskIdentifier:(id)a5 completionHandler:(id /* block */)a6;
- (void)requestVideoPlaybackURLForCloudSharedAsset:(id)a0 mediaAssetType:(unsigned long long)a1 completionHandler:(id /* block */)a2;

@end
