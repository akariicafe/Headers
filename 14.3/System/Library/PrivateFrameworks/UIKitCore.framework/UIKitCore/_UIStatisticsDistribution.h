@interface _UIStatisticsDistribution : _UIStatistics

- (void)recordDistributionValue:(double)a0;
- (void)startTimingForObject:(id)a0;
- (void)resetDistributionToValue:(double)a0;
- (void)cancelTimingForObject:(id)a0;
- (BOOL)isTimingForObject:(id)a0;
- (void)resetDistribution;
- (void)recordTimingForObject:(id)a0;

@end
