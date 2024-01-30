@class NSObject;
@protocol OS_dispatch_queue;

@interface NTKFirstUnlockQueue : NSObject {
    const char *_name;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isSuspended;
    BOOL _isBeforeFirstUnlock;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _suspendLock;
    int _notifyToken;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)_firstUnlock;
- (id)initWithName:(const char *)a0;
- (void)dispatch:(id /* block */)a0;
- (void)_suspendThreadBeforeFirstUnlock;

@end
