@class NSObject;
@protocol OS_dispatch_queue;

@interface CMPocketStateQueueBlockPair : NSObject {
    NSObject<OS_dispatch_queue> *fQueryQueue;
    id /* block */ fQueryBlock;
}

- (void)dealloc;
- (void)dispatchWithState:(long long)a0 andError:(id)a1;
- (id)initWithQueue:(id)a0 andBlock:(id /* block */)a1;

@end
