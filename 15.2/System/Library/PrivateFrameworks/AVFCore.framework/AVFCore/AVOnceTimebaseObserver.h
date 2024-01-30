@interface AVOnceTimebaseObserver : AVTimebaseObserver {
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _fireTime;
    id /* block */ _block;
    BOOL _didFire;
}

@property (readonly, nonatomic) BOOL didFire;

- (void)_fireBlock;
- (void)invalidate;
- (void)dealloc;
- (void)_effectiveRateChanged;
- (void)_resetNextFireTime;
- (void)_handleTimeDiscontinuity;
- (id)initWithTimebase:(struct OpaqueCMTimebase { } *)a0 fireTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 queue:(id)a2 block:(id /* block */)a3;

@end
