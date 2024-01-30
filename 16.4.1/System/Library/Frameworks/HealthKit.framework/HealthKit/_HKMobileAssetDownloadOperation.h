@class MAAsset, NSObject, MADownloadOptions;
@protocol OS_dispatch_queue;

@interface _HKMobileAssetDownloadOperation : NSObject {
    MAAsset *_asset;
    MADownloadOptions *_downloadOptions;
    long long _state;
    id /* block */ _completion;
    long long _retryCount;
    long long _maxNumberOfRetriesAllowed;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void)run;
- (id)description;
- (void).cxx_destruct;
- (void)_queue_callCompletionWithSuccess:(BOOL)a0 error:(id)a1;
- (void)_queue_downloadAsset;
- (void)_queue_run;
- (void)_queue_transitionToCompleted;
- (void)_queue_transitionToDownloadingAsset;
- (void)_queue_transitionToFailureWithDownloadResult:(long long)a0;
- (void)_queue_transitionToInitialized;
- (void)_queue_transitionToState:(long long)a0;
- (id)initWithAsset:(id)a0 queue:(id)a1 downloadOptions:(id)a2 maxNumberOfRetriesAllowed:(long long)a3 completion:(id /* block */)a4;

@end
