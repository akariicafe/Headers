@class DDSScheduledTimer, NSString, DDSRemoteSyncState, NSMutableSet, NSObject;
@protocol DDSManagingDelegate, DDSAssetObserving, DDSAssetProviding, DDSAssetTracking, OS_dispatch_queue;

@interface DDSManager : NSObject <DDSAssetProvidingDelegate, DDSAssetTrackingDelegate, DDSRemoteSyncStateDelegate, DDSAssetObservingDelegate, DDSManaging>

@property (readonly, nonatomic) id<DDSAssetTracking> tracker;
@property (readonly, nonatomic) id<DDSAssetProviding> provider;
@property (readonly, nonatomic) id<DDSAssetObserving> assetObserver;
@property (readonly, nonatomic) DDSScheduledTimer *timer;
@property (readonly, nonatomic) DDSRemoteSyncState *remoteSyncState;
@property (retain, nonatomic) NSMutableSet *pendingAssertionsToUpdate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *pendingAssertionsQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) id<DDSManagingDelegate> delegate;

- (void)serverDidUpdateAssetsWithType:(id)a0;
- (void)triggerUpdate;
- (id)init;
- (void)deleteV1AssetsIfNecessary;
- (void).cxx_destruct;
- (void)remoteSyncStateRequestsRetry;
- (void)didChangeDownloadState:(unsigned long long)a0 forAsset:(id)a1;
- (void)beginUpdateCycleForced:(BOOL)a0 discretionaryDownload:(BOOL)a1;
- (void)addAssertionForQuery:(id)a0 policy:(id)a1 assertionID:(id)a2 clientID:(id)a3;
- (void)handleNewAssertions:(id)a0;
- (void)didEndUpdateCycleWithError:(id)a0;
- (void)removeAssertionWithID:(id)a0;
- (void)didUpdateCatalogWithError:(id)a0;
- (void)willRetryUpdateCycle;
- (void)didBeginUpdateCatalog;
- (void)didCompleteDownloadForAssertion:(id)a0 error:(id)a1;
- (id)initWithProvider:(id)a0 tracker:(id)a1;
- (void)remoteSyncStateRequestsUpdate;
- (void)triggerDump;
- (void)handleRemovedAssertions:(id)a0;
- (void)didCompleteDownloadForAssertions:(id)a0 error:(id)a1;
- (void)assertionIDsForClientID:(id)a0 reply:(id /* block */)a1;
- (void)didStartUpdateCycle;

@end
