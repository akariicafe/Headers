@class NSObject;
@protocol OS_dispatch_source;

@interface ACTimedExpirer : NSObject {
    unsigned long long _invalidationInterval;
    NSObject<OS_dispatch_source> *_invalidationTimer;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _invalidationTimerLock;
}

+ (id)expirerWithTimeout:(unsigned long long)a0;

- (void)_cancelTimer;
- (void)_unsafeCancelTimer;
- (void)scheduleExpiration:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
