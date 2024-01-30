@class NSString, PLSyndicationResourcePrefetchManager, PLPhotoLibrary;

@interface PLBackgroundJobSyndicationResourceSanitizationWorker : PLBackgroundJobWorker <PLSyndicationResourcePrefetchManagerDelegate> {
    PLSyndicationResourcePrefetchManager *_prefetchManager;
    PLPhotoLibrary *_currentLibrary;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL isNetworkAccessAllowed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsWellKnownPhotoLibraryIdentifier:(long long)a0;
+ (id)syndicationWorkerCriteria;

- (void)prefetchManager:(id)a0 receivedNewDownloadThrottlingDate:(id)a1 managedObjectContext:(id)a2;
- (unsigned long long)batchSize;
- (void)batchRequestResourcesForPrefetchManager:(id)a0 itemIdentifiersWithBundleIDs:(id)a1 destURLs:(id)a2 options:(id)a3 resultHandler:(id /* block */)a4 completionHandler:(id /* block */)a5;
- (void)performWorkOnItem:(id)a0 inLibrary:(id)a1 completion:(id /* block */)a2;
- (id)downloadThrottlingDateForPrefetchManager:(id)a0;
- (id)resourceIDsForPrefetchWithLibrary:(id)a0;
- (id)workItemsNeedingProcessingInLibrary:(id)a0;
- (id)requestLocalAvailabilityChangeForPrefetchManager:(id)a0 resource:(id)a1 options:(id)a2 completion:(id /* block */)a3;
- (id)initWithLibraryBundle:(id)a0;
- (void).cxx_destruct;
- (void)performTransactionForPrefetchManager:(id)a0 synchronous:(BOOL)a1 block:(id /* block */)a2;

@end
