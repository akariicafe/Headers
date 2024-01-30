@class NSObject;
@protocol OS_dispatch_queue;

@interface FPDDownloadManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_preflightQueue;
}

+ (id)sharedInstance;
+ (void)initialize;
+ (id)acquireDownloadSlotForItem:(id)a0;
+ (void)releaseDownloadSlot:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_downloadItem:(id)a0 downloader:(id)a1 request:(id)a2 withCompletion:(id /* block */)a3;
- (void)_downloadItemAtLocator:(id)a0 downloader:(id)a1 request:(id)a2 completion:(id /* block */)a3;
- (void)_recursivelyDownloadItem:(id)a0 forceDiskIteration:(BOOL)a1 skipAlreadyDownloadedItems:(BOOL)a2 downloader:(id)a3 request:(id)a4 perItemCompletion:(id /* block */)a5 completion:(id /* block */)a6;
- (void)downloadItem:(id)a0 recursively:(unsigned long long)a1 downloader:(id)a2 request:(id)a3 perItemCompletion:(id /* block */)a4 withCompletion:(id /* block */)a5;
- (void)downloadItems:(id)a0 recursively:(unsigned long long)a1 downloader:(id)a2 request:(id)a3 perItemCompletion:(id /* block */)a4 withCompletion:(id /* block */)a5;
- (void)progressComputationPreflightForRecursiveRoot:(id)a0 downloader:(id)a1 itemProgressNeedsSetup:(id /* block */)a2 itemProgressSetup:(id /* block */)a3 completion:(id /* block */)a4;
- (void)retrieveFPItemForURL:(id)a0 domain:(id)a1 request:(id)a2 completion:(id /* block */)a3;
- (void)verifyIfSubtreeIsFullyMaterializedBelowItem:(id)a0 recursively:(unsigned long long)a1 downloader:(id)a2 completion:(id /* block */)a3;

@end
