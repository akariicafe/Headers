@protocol PLSyndicationResourcePrefetchManagerDelegate;

@interface PLSyndicationResourcePrefetchManager : NSObject

@property (readonly, weak, nonatomic) id<PLSyndicationResourcePrefetchManagerDelegate> delegate;

- (id)initWithDelegate:(id)a0;
- (id)_resourcesForPrefetchWithManagedObjectContext:(id)a0 predicate:(id)a1;
- (id)_fetchDownloadThrottlingDateAndClearIfNeededWithManagedObjectContext:(id)a0;
- (void)_prepareResourceForPrefetch:(id)a0;
- (void)_handleDownloadFinishedWithSuccess:(BOOL)a0 error:(id)a1 resource:(id)a2 downloadThrottlingDate:(id)a3 networkAccessAllowed:(BOOL)a4 managedObjectContext:(id)a5;
- (void).cxx_destruct;
- (id)lowPriorityResourcesForPrefetchWithManagedObjectContext:(id)a0;
- (void)prefetchResourceWithObjectIDs:(id)a0 bundleID:(id)a1 completion:(id /* block */)a2;
- (void)prefetchResourceWithObjectID:(id)a0 completion:(id /* block */)a1;
- (id)highPriorityResourcesForPrefetchWithManagedObjectContext:(id)a0;

@end
