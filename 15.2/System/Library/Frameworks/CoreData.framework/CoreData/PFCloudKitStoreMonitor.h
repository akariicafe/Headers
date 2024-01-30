@class NSPersistentStore, NSPersistentStoreCoordinator, NSString, NSObject;
@protocol OS_dispatch_group;

@interface PFCloudKitStoreMonitor : NSObject {
    NSObject<OS_dispatch_group> *_monitorGroup;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _aliveLock;
    BOOL _storeIsAlive;
    BOOL _declaredDead;
    int _retryCount;
    int _timeoutSeconds;
    NSPersistentStoreCoordinator *_monitoredCoordinator;
    NSPersistentStore *_monitoredStore;
    NSString *_storeIdentifier;
}

- (void)coordinatorWillRemoveStore:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initForStore:(id)a0;

@end
