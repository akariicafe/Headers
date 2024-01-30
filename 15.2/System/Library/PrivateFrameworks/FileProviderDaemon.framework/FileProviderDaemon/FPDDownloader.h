@class FPDDomain, NSMutableDictionary, NSProgress, NSObservation, NSObject;
@protocol OS_dispatch_queue;

@interface FPDDownloader : NSObject <FPCancellable> {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSMutableDictionary *_parentToChildMap;
    NSMutableDictionary *_childProxies;
    NSObservation *_observation;
}

@property (readonly, weak, nonatomic) FPDDomain *domain;
@property (readonly, nonatomic) NSProgress *cancellationProgress;
@property (readonly, nonatomic) NSProgress *progress;
@property (nonatomic, getter=isDryRun) BOOL dryRun;

- (void)_cleanup;
- (void).cxx_destruct;
- (void)dealloc;
- (void)cancel;
- (void)_stopTrackingFileURLs;
- (void)_createChildItem:(id)a0;
- (void)downloadItem:(id)a0 recursively:(unsigned long long)a1 request:(id)a2 withCompletion:(id /* block */)a3;
- (void)_downloadItem:(id)a0 recursively:(unsigned long long)a1 retryCount:(int)a2 request:(id)a3 withCompletion:(id /* block */)a4;
- (void)_didDownloadItem:(id)a0 withError:(id)a1;
- (void)_recursiveDownloadOfItem:(id)a0 request:(id)a1 recursively:(unsigned long long)a2 perItemCompletion:(id /* block */)a3 withCompletion:(id /* block */)a4;
- (void)_nonRecursiveDownloadOfItem:(id)a0 request:(id)a1 perItemCompletion:(id /* block */)a2 withCompletion:(id /* block */)a3;
- (void)_logRootProgress;
- (void)_progressComputationPreflightForRecursiveRoot:(id)a0 completion:(id /* block */)a1;
- (id)initWithDomain:(id)a0 callbackQueue:(id)a1;
- (void)downloadURL:(id)a0 recursively:(unsigned long long)a1 request:(id)a2 withCompletion:(id /* block */)a3;

@end
