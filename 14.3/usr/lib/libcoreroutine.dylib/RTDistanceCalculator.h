@class RTLocationShifter;

@interface RTDistanceCalculator : RTService

@property (retain, nonatomic) RTLocationShifter *locationShifter;

- (void).cxx_destruct;
- (double)distanceFromLocation:(id)a0 toLocation:(id)a1 error:(id *)a2;

@end
