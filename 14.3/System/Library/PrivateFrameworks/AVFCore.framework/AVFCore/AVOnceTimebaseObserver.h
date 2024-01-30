@interface AVOnceTimebaseObserver : AVTimebaseObserver {
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _fireTime;
    id /* block */ _block;
    BOOL _didFire;
}

@property (readonly, nonatomic) BOOL didFire;

- (void)_resetNextFireTime;
- (void)dealloc;
- (id)initWithTimebase:(struct OpaqueCMTimebase { } *)a0 fireTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1 queue:(id)a2 block:(id /* block */)a3;
- (void)_fireBlock;
- (void)_effectiveRateChanged;
- (void)invalidate;
- (void)_handleTimeDiscontinuity;

@end
