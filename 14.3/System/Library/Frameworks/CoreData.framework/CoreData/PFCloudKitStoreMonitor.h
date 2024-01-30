@class NSPersistentStore, NSPersistentStoreCoordinator, NSString, NSObject;
@protocol OS_dispatch_group;

@interface PFCloudKitStoreMonitor : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _aliveLock;
    BOOL _storeIsAlive;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_group> *monitorGroup;
@property (readonly, weak, nonatomic) NSPersistentStoreCoordinator *monitoredCoordinator;
@property (readonly, weak, nonatomic) NSPersistentStore *monitoredStore;
@property (readonly, nonatomic) int retryCount;
@property (readonly, nonatomic) int timeoutSeconds;
@property (readonly, nonatomic) NSString *storeIdentifier;
@property (readonly, nonatomic) BOOL declaredDead;

- (void)performBlock:(id /* block */)a0;
- (id)instantiateNewBackgroundContext;
- (void).cxx_destruct;
- (id)initForStore:(id)a0;
- (void)dealloc;
- (void)declareStoreDead;
- (void)coordinatorWillRemoveStore:(id)a0;
- (id)newBackgroundContextForMonitoredCoordinator;
- (id)retainedMonitoredStore;
- (void)pfcloudstoremonitor_is_holding_your_store_open_waiting_for_cloudkit_activity_to_finish;
- (id)retainedMonitoredCoordinator;

@end
