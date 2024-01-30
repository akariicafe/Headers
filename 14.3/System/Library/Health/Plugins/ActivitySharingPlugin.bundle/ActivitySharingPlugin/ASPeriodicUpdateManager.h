@class NSString, ASCloudKitManager, ASFriendListManager, NSHashTable, NSObject, ASRelationshipManager;
@protocol OS_dispatch_queue;

@interface ASPeriodicUpdateManager : NSObject <ASActivitySharingManagerReadyObserver> {
    ASCloudKitManager *_cloudKitManager;
    ASFriendListManager *_friendListManager;
    ASRelationshipManager *_relationshipManager;
    NSHashTable *_providers;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_providerQueue;
    BOOL _isWatch;
    BOOL _isPushInProgress;
    BOOL _hasQueuedPush;
}

@property (readonly, nonatomic) BOOL hasRegisteredForUpdates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addProvider:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)removeProvider:(id)a0;
- (void)activitySharingManagerReady:(id)a0;
- (void)requestImmediateUpdateWithCompletion:(id /* block */)a0;
- (id)initWithIsWatch:(BOOL)a0;
- (void)beginPeriodicUpdates;
- (void)endPeriodicUpdates;
- (void)_queue_performUpdateForActivity:(id)a0 withCompletion:(id /* block */)a1;

@end
