@class NSArray;

@interface WLTimeEstimateAccuracyTracker : NSObject {
    unsigned long long _thresholdBelowLastSample;
}

@property (retain, nonatomic) NSArray *thresholds;
@property (retain, nonatomic) NSArray *samples;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)_indexOfThresholdGreaterThanOrEqualToEstimate:(unsigned long long)a0;
- (unsigned long long)_thresholdAtIndex:(unsigned long long)a0;
- (void)didCalculateTimeEstimate:(unsigned long long)a0 atDate:(id)a1 associatedObject:(id)a2;
- (void)estimatesDidResolveAtDate:(id)a0 block:(id /* block */)a1;

@end
