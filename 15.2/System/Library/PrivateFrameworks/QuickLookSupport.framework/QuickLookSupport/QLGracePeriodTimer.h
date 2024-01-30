@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface QLGracePeriodTimer : NSObject {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    double _delay;
    NSObject<OS_dispatch_source> *_timer;
}

@property (copy) id /* block */ action;

- (void)suppress;
- (void).cxx_destruct;
- (id)initWithAction:(id /* block */)a0 callbackQueue:(id)a1 delay:(double)a2;
- (void)arm;
- (void)_suppress;
- (void)_createTimer;

@end
