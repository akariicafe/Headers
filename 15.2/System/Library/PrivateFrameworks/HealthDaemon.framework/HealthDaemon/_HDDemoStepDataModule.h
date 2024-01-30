@interface _HDDemoStepDataModule : _HDDemoDataModule {
    double _nextFireInterval;
    unsigned long long _nextStepCount;
    double _nextDistance;
}

- (double)nextFireInterval;
- (void)scheduleNextFire;
- (void)timerDidFireWithInterval:(double)a0;

@end
