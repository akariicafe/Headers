@class NSString, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface BSDispatchTimer : NSObject {
    NSString *_identifier;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_lock_queue;
    NSObject<OS_dispatch_source> *_lock_source;
    id _lock_context;
    id /* block */ _lock_handler;
    unsigned long long _lock_fireTime;
    long long _lock_repeatNanoseconds;
    long long _lock_leewayNanoseconds;
    unsigned long long _lock_fireCount;
    unsigned int _lock_scheduleToken;
    BOOL _lock_invalidated;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
