@class NSArray;

@interface AVOccasionalTimebaseObserver : AVTimebaseObserver {
    NSArray *_times;
    id /* block */ _block;
}

- (id)initWithTimebase:(struct OpaqueCMTimebase { } *)a0 times:(id)a1 queue:(id)a2 block:(id /* block */)a3;
- (void)_fireBlock;
- (void)dealloc;
- (void)_effectiveRateChanged;
- (void)_resetNextFireTime;
- (void)_handleTimeDiscontinuity;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_nextFiringTimeAfterTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })_previousFiringTimeBeforeTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;

@end
