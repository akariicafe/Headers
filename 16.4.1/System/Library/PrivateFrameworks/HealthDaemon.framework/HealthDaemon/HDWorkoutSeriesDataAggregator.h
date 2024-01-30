@interface HDWorkoutSeriesDataAggregator : HDSeriesQuantityDataAggregator

- (BOOL)shouldAggregateToSeriesForState:(id)a0 collector:(id)a1 device:(id)a2 requestedAggregationDate:(id)a3 mode:(long long)a4 options:(unsigned long long)a5;
- (void)setConfiguration:(id)a0;

@end
