@interface _HDDemoStepDataModule : _HDDemoDataModule {
    double _nextFireInterval;
    unsigned long long _nextStepCount;
    double _nextDistance;
    double _nextStrideLength;
    double _nextOscillation;
    double _nextGroundContactTime;
    double _nextPower;
}

- (double)nextFireInterval;
- (void)scheduleNextFire;
- (void)timerDidFireWithInterval:(double)a0;

@end
