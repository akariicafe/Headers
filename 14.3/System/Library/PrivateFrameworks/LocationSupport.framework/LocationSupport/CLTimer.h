@class CLSilo;
@protocol CLTimerScheduler;

@interface CLTimer : NSObject {
    double _delaySetAtTime;
    CLSilo *_silo;
    id<CLTimerScheduler> _scheduler;
}

@property (nonatomic) double nextFireTime;
@property (copy, nonatomic) id /* block */ handler;
@property (nonatomic) double nextFireDelay;
@property (nonatomic) double fireInterval;

- (void).cxx_destruct;
- (void)setNextFireTime:(double)a0 interval:(double)a1;
- (void)setNextFireTime:(double)a0;
- (double)nextFireDelayRaw;
- (void)updateScheduler;
- (void)shouldFire;
- (void)setNextFireDelay:(double)a0 interval:(double)a1;
- (double)nextFireTime;
- (id)initInSilo:(id)a0 withScheduler:(id)a1;
- (void)dbgAssertInside;
- (void)invalidate;

@end
