@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_workloop;

@interface PLQueueDispatcher : NSObject {
    NSObject<OS_dispatch_queue> *_uiQueue;
    NSObject<OS_dispatch_queue> *_utilityQueue;
    NSObject<OS_dispatch_queue> *_backgroundQueue;
    NSObject<OS_dispatch_queue> *_sharedUtilityQueue;
    NSObject<OS_dispatch_queue> *_sharedBackgroundQueue;
    NSObject<OS_dispatch_workloop> *_sharedWorkloop;
}

+ (id)sharedQueueDispatcher;

- (void)sync:(id /* block */)a0;
- (void)async:(id /* block */)a0;
- (id)queueForCurrentQoS;
- (id)init;
- (void).cxx_destruct;
- (id)sharedUtilityQueue;
- (id)sharedBackgroundQueue;
- (void)_handleUnexpectedQoSClass:(unsigned int)a0;

@end
