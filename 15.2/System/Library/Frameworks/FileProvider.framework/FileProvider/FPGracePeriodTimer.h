@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface FPGracePeriodTimer : NSObject {
    id /* block */ _action;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    double _delay;
    NSObject<OS_dispatch_source> *_timer;
    double _expectedFiringTimeSinceReferenceDate;
}

- (void)suppress;
- (void).cxx_destruct;
- (id)initWithAction:(id /* block */)a0 callbackQueue:(id)a1 delay:(double)a2;
- (void)arm;
- (id)prettyDescription;
- (void)_createTimer;

@end
