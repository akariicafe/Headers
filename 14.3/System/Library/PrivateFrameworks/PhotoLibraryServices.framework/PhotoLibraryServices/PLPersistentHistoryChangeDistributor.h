@class NSPersistentHistoryToken, NSPersistentStoreCoordinator, PLCoreDataChangeMerger, NSObject, PLChangeHandlingNotificationObserver;
@protocol OS_dispatch_queue;

@interface PLPersistentHistoryChangeDistributor : NSObject {
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    PLCoreDataChangeMerger *_changeMerger;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSPersistentHistoryToken *_lastToken;
    PLChangeHandlingNotificationObserver *_notificationObserver;
}

- (void)stopObservingRemoteNotifications;
- (void)distributeTransactions:(id)a0 withXPCTransaction:(id)a1;
- (void)forceUserInterfaceReload;
- (void).cxx_destruct;
- (id)initWithPersistentStoreCoordinator:(id)a0 changeMerger:(id)a1;
- (id)fetchTransactionsSinceLastToken;
- (void)dealloc;
- (void)handleRemoteNotificationOfType:(long long)a0 withTransaction:(id)a1;
- (void)_inq_distributeNewTransactionsSinceLastTokenWithReason:(id)a0 xpcTransaction:(id)a1;
- (void)_inq_startObservingRemoteNotifications;
- (id)makeManagedObjectContext;
- (void)startObservingRemoteNotifications;
- (void)distributeNewTransactionsSinceLastToken;
- (void)invalidate;
- (id)localEventFromTransactions:(id)a0;

@end
