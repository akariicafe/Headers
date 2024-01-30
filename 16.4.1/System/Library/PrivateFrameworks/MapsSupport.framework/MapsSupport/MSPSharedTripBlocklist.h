@class GCDTimer, _TtC8MapsSync23MapsSyncStoreController, NSMutableSet, _TtC8MapsSync13MapsSyncStore, NSObject;
@protocol OS_dispatch_queue;

@interface MSPSharedTripBlocklist : NSObject <MapsSync.MapsSyncStoreControllerDelegate> {
    NSMutableSet *_blockedIdentifiers;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSObject<OS_dispatch_queue> *_storeQueue;
    _TtC8MapsSync23MapsSyncStoreController *_storeController;
    _TtC8MapsSync13MapsSyncStore *_store;
    BOOL _waitingForStoreToLoad;
    GCDTimer *_storeLoadTimeoutTimer;
}

+ (id)sharedInstance;
+ (void)migrateFromiCloudKVSIfNeeded;

- (void)_reloadBlockedIdentifiersFromSync;
- (void)_purgeExpiredIdentifiersIn:(id)a0;
- (void)storeControllerWithDataChanged:(id)a0;
- (void)storeControllerWithFailedToLoad:(id)a0;
- (void)unblockIdentifiers:(id)a0;
- (id)_fetchSyncedIdentifiers;
- (void)purgeExpiredIdentifiers;
- (void)_cancelTimeoutTimer;
- (id)init;
- (void)blockIdentifier:(id)a0;
- (id)description;
- (BOOL)containsIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)clearBlockedIdentifiers;
- (BOOL)containsAnyIdentifiersInArray:(id)a0;
- (void)_resumeIsolationQueueIfNeeded;
- (void)blockIdentifiers:(id)a0;
- (void)storeControllerWithDidLoad:(id)a0;

@end
