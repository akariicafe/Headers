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

- (void)setNextFireTime:(double)a0 interval:(double)a1;
- (void)setNextFireTime:(double)a0;
- (void)setNextFireDelay:(double)a0 interval:(double)a1;
- (void)dbgAssertInside;
- (void)shouldFire;
- (double)nextFireTime;
- (void).cxx_destruct;
- (void)updateScheduler;
- (double)nextFireDelayRaw;
- (void)invalidate;
- (id)initInSilo:(id)a0 withScheduler:(id)a1;

@end
