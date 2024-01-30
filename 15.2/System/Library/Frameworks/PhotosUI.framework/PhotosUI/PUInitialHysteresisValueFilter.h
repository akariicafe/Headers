@interface PUInitialHysteresisValueFilter : PUValueFilter {
    BOOL _didReachThreshold;
    double _initialHysteresis;
}

@property (nonatomic) double thresholdValue;
@property (readonly, nonatomic) double outputValueDerivative;

- (double)updatedValue:(double)a0 withTargetValue:(double)a1;

@end
