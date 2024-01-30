@interface HMFExponentialBackoffTimer : HMFTimer

@property (readonly, nonatomic, getter=isIncreasing) BOOL increasing;
@property (readonly, nonatomic) double minimumTimeInterval;
@property (readonly, nonatomic) double maximumTimeInterval;
@property (readonly, nonatomic) long long exponentialFactor;

- (double)timeInterval;
- (void)__fire;
- (id)initWithMinimumTimeInterval:(double)a0 maximumTimeInterval:(double)a1 exponentialFactor:(long long)a2 options:(unsigned long long)a3;
- (id)initWithTimeInterval:(double)a0 options:(unsigned long long)a1;
- (void)reset;

@end
