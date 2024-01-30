@class VUIMediaItemEntityTypesFetchResponse;
@protocol VUIMediaItemEntityTypesFetchControllerDelegate;

@interface VUIMediaItemEntityTypesFetchController : VUIMediaLibraryFetchController

@property (retain, nonatomic) VUIMediaItemEntityTypesFetchResponse *response;
@property (weak, nonatomic) id<VUIMediaItemEntityTypesFetchControllerDelegate> delegate;

- (void).cxx_destruct;
- (void)cancelFetch;
- (void)_didCompleteFetchOperation:(id)a0;
- (id)_fetchOperationForFetchReason:(long long)a0;
- (void)_handleContentsChangeFetchControllerOperationDidCompleteWithResult:(id)a0 error:(id)a1;
- (void)_handleInitialFetchControllerOperationDidCompleteWithResult:(id)a0 error:(id)a1;
- (void)_notifyDelegateWithBlock:(id /* block */)a0;
- (void)_notifyFetchDidCompleteWithResult:(id)a0;
- (void)_notifyFetchDidFailWithError:(id)a0;
- (BOOL)_updateResponseWithResult:(id)a0 replaceContentsOnNilChanges:(BOOL)a1;
- (id)initWithMediaLibrary:(id)a0;

@end
