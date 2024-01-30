@class NSString, PLLazyObject;

@interface PLAssetsdCloudService : PLAbstractLibraryServicesManagerService <PLAssetsdCloudServiceProtocol> {
    PLLazyObject *_lazyResourceDownloader;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)requestVideoPlaybackURLForCloudSharedAsset:(id)a0 mediaAssetType:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)cancelCPLDownloadTaskWithIdentifier:(id)a0 reply:(id /* block */)a1;
- (void)asynchronousStartPreheatingCPLDownloadForAssets:(id)a0 doneTokens:(id)a1 format:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)downloadCloudPhotoLibraryAssetWithObjectURI:(id)a0 taskIdentifier:(id)a1 resourceType:(unsigned long long)a2 HighPriority:(BOOL)a3 trackCPLDownload:(BOOL)a4 downloadIsTransient:(BOOL)a5 reply:(id /* block */)a6;
- (void)computeFingerPrintsOfAssetWithObjectURI:(id)a0 reply:(id /* block */)a1;
- (void)asynchronousStopPreheatingCPLDownloadForAssetsWithTaskIdentifiers:(id)a0 reply:(id /* block */)a1;
- (id)initWithLibraryServicesManager:(id)a0 lazyResourceDownloader:(id)a1;
- (id)resourceDownloader;

@end
