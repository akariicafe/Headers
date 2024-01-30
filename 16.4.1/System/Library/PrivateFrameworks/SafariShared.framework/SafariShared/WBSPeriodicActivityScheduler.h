@class NSTimer, NSObject;
@protocol OS_dispatch_queue;

@interface WBSPeriodicActivityScheduler : NSObject {
    id /* block */ _block;
    BOOL _invalidated;
    double _interval;
    NSObject<OS_dispatch_queue> *_queue;
    NSTimer *_timer;
}

- (void)_performActivity;
- (void)_scheduleActivityWithInterval:(double)a0;
- (id)initWithInterval:(double)a0 minimumDelay:(double)a1 lastFireDate:(id)a2 block:(id /* block */)a3;
- (void)_timerDidFire:(id)a0;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;

@end
