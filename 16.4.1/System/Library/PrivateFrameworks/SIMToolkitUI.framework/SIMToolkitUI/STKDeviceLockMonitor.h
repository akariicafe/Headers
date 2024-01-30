@class NSHashTable;

@interface STKDeviceLockMonitor : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _observersLock;
    NSHashTable *_observersList;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _stateLock;
    BOOL _deviceLocked;
    int _notify_token;
}

@property (nonatomic) BOOL isDeviceLocked;

+ (id)sharedInstance;

- (void)addObserver:(id)a0;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)init;
- (void)_updateDeviceLockState;
- (void).cxx_destruct;

@end
