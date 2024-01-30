@class PLChangeNode, NSDictionary, NSURL, PLCoreDataChangeMerger, PLPersistentHistoryChangeDistributor;
@protocol PLChangePublisher;

@interface PLChangeHandlingContainer : NSObject {
    PLChangeNode *_changeNode;
    PLCoreDataChangeMerger *_changeMerger;
    id<PLChangePublisher> _changePublisher;
    PLPersistentHistoryChangeDistributor *_persistentHistoryChangeDistributor;
}

@property (readonly, copy) NSURL *libraryURL;
@property (readonly, nonatomic) BOOL isMergingCoalescedSaveNotification;
@property (readonly, copy, nonatomic) NSDictionary *allDidSaveObjectIDsUserInfo;

- (void)handleUnknownMergeEvent;
- (void).cxx_destruct;
- (void)unpauseLaunchEventNotifications;
- (void)dealloc;
- (void)stop;
- (id)initWithLibraryURL:(id)a0 changePublisher:(id)a1 libraryServicesManager:(id)a2 persistentStoreCoordinator:(id)a3;
- (void)registerToReceiveCoreDataChanges:(id)a0;
- (void)publishRemoteChangeEvent:(id)a0 delayedSaveActionsDetail:(id)a1 reply:(id /* block */)a2;
- (void)disconnectManagedObjectContext:(id)a0;
- (void)start;
- (void)pauseLaunchEventNotifications;
- (void)connectManagedObjectContext:(id)a0;
- (void)distributeChangesSinceLastCheckpoint;

@end
