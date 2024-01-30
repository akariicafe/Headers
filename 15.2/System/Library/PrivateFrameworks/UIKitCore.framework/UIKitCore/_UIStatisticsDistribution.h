@interface _UIStatisticsDistribution : _UIStatistics

- (BOOL)isTimingForObject:(id)a0;
- (void)cancelTimingForObject:(id)a0;
- (void)recordTimingForObject:(id)a0;
- (void)resetDistribution;
- (void)recordDistributionValue:(double)a0;
- (void)startTimingForObject:(id)a0;
- (void)resetDistributionToValue:(double)a0;

@end
