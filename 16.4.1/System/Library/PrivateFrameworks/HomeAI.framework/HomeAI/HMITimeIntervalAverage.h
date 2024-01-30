@class MovingAverage;

@interface HMITimeIntervalAverage : HMFObject {
    MovingAverage *_average;
}

- (void)addValue:(double)a0;
- (double)value;
- (id)initWithMaxCapacity:(long long)a0;
- (void).cxx_destruct;
- (double)valueForInterval:(double)a0 defaultValue:(double)a1;

@end
