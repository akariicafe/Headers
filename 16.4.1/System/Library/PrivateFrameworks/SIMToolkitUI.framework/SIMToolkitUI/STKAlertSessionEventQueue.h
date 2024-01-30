@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface STKAlertSessionEventQueue : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_queue_haltingAssertions;
    NSMutableArray *_queue_eventQueue;
}

- (void)enqueue:(id /* block */)a0;
- (id)acquireEventQueueHaltingAssertionForReason:(id)a0;
- (void)_queue_dequeueEventsIfPossible;
- (void)_queue_enqueueEvent:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;

@end
