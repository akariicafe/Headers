@class NSPersistentHistoryToken, NSPersistentStoreCoordinator, PLCoreDataChangeMerger, NSObject, PLChangeHandlingNotificationObserver;
@protocol OS_dispatch_queue;

@interface PLPersistentHistoryChangeDistributor : NSObject {
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    PLCoreDataChangeMerger *_changeMerger;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSPersistentHistoryToken *_lastToken;
    PLChangeHandlingNotificationObserver *_notificationObserver;
    unsigned long long _observerCount;
}

- (id)localEventFromTransactions:(id)a0;
- (void)handleRemoteNotificationOfType:(long long)a0 withTransaction:(id)a1;
- (void)stopObservingRemoteNotifications;
- (id)makeManagedObjectContext;
- (void)resumeChangeDistribution;
- (void)distributeNewTransactionsSinceLastToken;
- (void)pauseChangeDistribution;
- (void)_inq_distributeNewTransactionsSinceLastTokenWithReason:(id)a0 xpcTransaction:(id)a1;
- (void)_inq_startObservingRemoteNotifications;
- (void)forceUserInterfaceReload;
- (void).cxx_destruct;
- (void)startObservingRemoteNotifications;
- (id)fetchTransactionsSinceLastToken;
- (void)invalidate;
- (void)dealloc;
- (void)distributeTransactions:(id)a0 withXPCTransaction:(id)a1;
- (id)initWithPersistentStoreCoordinator:(id)a0 changeMerger:(id)a1;

@end
