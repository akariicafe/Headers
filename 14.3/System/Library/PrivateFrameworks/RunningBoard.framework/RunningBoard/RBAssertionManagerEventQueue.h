@class RBProcessMap, RBEventQueue, NSObject;
@protocol RBAssertionManagerQueueDelegate, OS_dispatch_queue;

@interface RBAssertionManagerEventQueue : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_queue;
    RBEventQueue *_eventQueue;
    RBProcessMap *_expirationWarningEvents;
}

@property (weak, nonatomic) id<RBAssertionManagerQueueDelegate> delegate;
@property (readonly) unsigned long long count;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)updateEventsForAssertions:(id)a0;

@end
