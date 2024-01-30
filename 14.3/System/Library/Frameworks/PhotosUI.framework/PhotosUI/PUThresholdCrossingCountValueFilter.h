@interface PUThresholdCrossingCountValueFilter : PUValueFilter {
    long long _crossingCount;
}

@property (nonatomic) double thresholdValue;
@property (nonatomic) long long maximumCrossingCount;

- (double)updatedValue:(double)a0 withTargetValue:(double)a1;

@end
