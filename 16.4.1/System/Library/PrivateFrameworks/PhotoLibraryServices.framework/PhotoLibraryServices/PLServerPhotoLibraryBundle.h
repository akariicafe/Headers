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

- (id)initWithLibraryURL:(id)a0 bundleController:(id)a1 backgroundJobService:(id)a2 libraryServicesDelegateClass:(Class)a3;
- (id)newAssetsdClient;
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(id /* block */)a0;
- (void)invalidateClientConnectionsWithReason:(id)a0;
- (void)relinquishPresentedItemToReader:(id /* block */)a0;
- (id)transferPersons:(id)a0 toBundle:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (id)newLibraryServicesManager;
- (BOOL)bindAssetsdService:(id)a0 error:(id *)a1;
- (void)_touch;
- (void)unbindAssetsdService:(id)a0;
- (void)clearShutdownReason;
- (void)touch;
- (void)savePresentedItemChangesWithCompletionHandler:(id /* block */)a0;
- (void)presentedItemDidMoveToURL:(id)a0;
- (BOOL)calculateTotalSizeWithResult:(id /* block */)a0;
- (id)_newTouchCoalescer;
- (BOOL)shouldRelinquishToWriterOfSubitemAtURL:(id)a0;
- (void)relinquishPresentedItemToWriter:(id /* block */)a0;
- (id)boundAssetsdServices;
- (void)close;
- (id)newChangePublisher;
- (void)shutdownWithReason:(id)a0;
- (id)transferAssets:(id)a0 toBundle:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (id)newBoundAssetsdServicesTable;
- (void)accommodatePresentedSubitemDeletionAtURL:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;

@end
