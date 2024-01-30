@interface _UIStatisticsDistribution : _UIStatistics

- (void)resetDistributionToValue:(double)a0;
- (void)startTimingForObject:(id)a0;
- (void)cancelTimingForObject:(id)a0;
- (void)recordDistributionValue:(double)a0;
- (BOOL)isTimingForObject:(id)a0;
- (void)recordTimingForObject:(id)a0;
- (void)resetDistribution;

@end
