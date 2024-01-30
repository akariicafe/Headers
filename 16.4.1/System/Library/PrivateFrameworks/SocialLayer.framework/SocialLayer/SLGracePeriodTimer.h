@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SLGracePeriodTimer : NSObject {
    id /* block */ _action;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    double _delay;
    NSObject<OS_dispatch_source> *_timer;
    double _expectedFiringTimeSinceReferenceDate;
}

@property (readonly, getter=isValid) BOOL valid;

+ (id)timerWithQueue:(id)a0 delay:(double)a1 action:(id /* block */)a2;

- (void)_createTimer;
- (void)suppress;
- (void)dealloc;
- (void)arm;
- (id)description;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 delay:(double)a1 action:(id /* block */)a2;

@end
