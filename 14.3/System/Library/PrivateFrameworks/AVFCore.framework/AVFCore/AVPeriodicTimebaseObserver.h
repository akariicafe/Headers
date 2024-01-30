@interface AVPeriodicTimebaseObserver : AVTimebaseObserver {
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _intervalRequested;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastIntervalUsed;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastPeriodicFireTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastNonperiodicFireTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _lastStopTime;
    unsigned int _sequenceNum;
    id /* block */ _block;
}

- (void)_resetNextFireTime;
- (void)dealloc;
- (void)_fireBlockForTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)_effectiveRateChanged;
- (id)initWithTimebase:(struct OpaqueCMTimebase { } *)a0 interval:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 queue:(id)a2 block:(id /* block */)a3;
- (void)_handleTimeDiscontinuity;

@end
