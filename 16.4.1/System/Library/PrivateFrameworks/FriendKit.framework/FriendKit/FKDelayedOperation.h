@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface FKDelayedOperation : NSObject {
    id /* block */ _block;
    NSObject<OS_dispatch_queue> *_queue;
    int _blockEnqueued;
    double _lastExecution;
    NSObject<OS_dispatch_source> *_timerSource;
    double _delay;
}

- (void)execute;
- (id)initWithQueue:(id)a0 delay:(double)a1 block:(id /* block */)a2;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_queue_executeBlock;
- (void)_queue_updateLastExecution;

@end
