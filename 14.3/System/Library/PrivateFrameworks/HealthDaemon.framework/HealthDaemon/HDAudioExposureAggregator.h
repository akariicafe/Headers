@interface HDAudioExposureAggregator : HDSeriesQuantityDataAggregator

- (void)addDatum:(id)a0 toAccumulatedData:(id)a1;
- (BOOL)shouldFreezeCurrentSeries:(id)a0 lastDatum:(id)a1 seriesLength:(long long)a2 configuration:(id)a3 aggregationInterval:(double)a4;

@end
