@class HDCloudSyncManager, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface HDCloudSyncOwnerIdentifierManager : NSObject {
    HDCloudSyncManager *_cloudSyncManager;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    long long _lock_fetchEpoch;
    NSMutableDictionary *_lock_deviceIDsByContainerIdentifier;
    NSMutableDictionary *_lock_cachedOwnerIdentifiersByContainerIdentifier;
    NSMutableDictionary *_lock_containersByIdentifier;
    NSObject<OS_dispatch_queue> *_writeQueue;
}

- (void)rollOwnerDifferentiatorForReason:(id)a0 completion:(id /* block */)a1;
- (void)fetchOwnerIdentifierForContainer:(id)a0 completion:(id /* block */)a1;
- (void)_scheduleOwnershipRollForLocalDataLoss;
- (id)initWithCloudSyncManager:(id)a0;
- (void)cacheOwnerIdentifiersForContainers:(id)a0 completion:(id /* block */)a1;
- (void)rollOwnerDifferentiatorAfterCloudSyncDisableWithCompletion:(id /* block */)a0;
- (void)discardCachedIdentifiers;
- (id)cachedOwnerIdentifierForContainer:(id)a0;
- (void).cxx_destruct;

@end
