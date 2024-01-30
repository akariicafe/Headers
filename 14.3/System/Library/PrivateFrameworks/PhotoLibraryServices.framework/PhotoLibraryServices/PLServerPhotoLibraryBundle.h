@class NSSet, NSString, NSURL, NSOperationQueue, PLBackgroundJobService, PLLazyObject;

@interface PLServerPhotoLibraryBundle : PLPhotoLibraryBundle <NSFilePresenter> {
    Class _libraryServicesDelegateClass;
    PLBackgroundJobService *_backgroundJobService;
    NSOperationQueue *_presentedItemOperationQueue;
    PLLazyObject *_lazyTouchCoalescer;
}

@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)shouldRelinquishToWriterOfSubitemAtURL:(id)a0;
- (void)presentedItemDidMoveToURL:(id)a0;
- (void)close;
- (void).cxx_destruct;
- (void)_touch;
- (void)touch;
- (void)accommodatePresentedSubitemDeletionAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void)unbindAssetsdService:(id)a0;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id /* block */)a0;
- (void)shutdownWithReason:(id)a0;
- (id)newBoundAssetsdServicesTable;
- (id)boundAssetsdServices;
- (id)newLibraryServicesManager;
- (BOOL)bindAssetsdService:(id)a0 error:(id *)a1;
- (void)relinquishPresentedItemToWriter:(id /* block */)a0;
- (void)invalidateClientConnectionsWithReason:(id)a0;
- (id)initWithLibraryURL:(id)a0 bundleController:(id)a1 backgroundJobService:(id)a2 libraryServicesDelegateClass:(Class)a3;
- (id)_newTouchCoalescer;
- (id)newAssetsdClient;
- (id)newChangePublisher;
- (void)savePresentedItemChangesWithCompletionHandler:(id /* block */)a0;
- (void)relinquishPresentedItemToReader:(id /* block */)a0;
- (void)clearShutdownReason;

@end
