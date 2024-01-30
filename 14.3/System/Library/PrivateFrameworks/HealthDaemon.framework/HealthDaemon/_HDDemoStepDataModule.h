@interface _HDDemoStepDataModule : _HDDemoDataModule {
    double _nextFireInterval;
    unsigned long long _nextStepCount;
    double _nextDistance;
}

- (double)nextFireInterval;
- (void)scheduleNextFire;
- (void)timerDidFireWithInterval:(double)a0;
- (void)_getDelayBeforeNextStepData:(double *)a0 stepCount:(unsigned long long *)a1 distance:(double *)a2;

@end
