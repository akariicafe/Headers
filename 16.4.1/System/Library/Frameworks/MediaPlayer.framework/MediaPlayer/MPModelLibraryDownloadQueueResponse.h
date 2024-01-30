@class NSString;

@interface MPModelLibraryDownloadQueueResponse : MPModelResponse <MPMediaDownloadObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRequest:(id)a0;
- (void)downloadManager:(id)a0 didEnqueueAssetDownloads:(id)a1 didRemoveAssetDownloads:(id)a2;
- (void)dealloc;
- (void)downloadManager:(id)a0 didFinishAsset:(id)a1 withError:(id)a2;
- (void)getChangeDetailsFromPreviousResponse:(id)a0 completion:(id /* block */)a1;

@end
