@class NSMutableSet;

@interface HDSeriesQuantityDataAggregator : HDActiveQuantityDataAggregator {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSMutableSet *_lock_failedSeriesUUIDs;
}

- (void)addDatum:(id)a0 toAccumulatedData:(id)a1;
- (id)aggregateForState:(id)a0 collector:(id)a1 device:(id)a2 requestedAggregationDate:(id)a3 mode:(long long)a4 options:(unsigned long long)a5 error:(id *)a6;
- (BOOL)requiresNewSeriesForDatum:(id)a0 lastDatum:(id)a1 seriesLength:(long long)a2 currentSeries:(id)a3 configuration:(id)a4 aggregationInterval:(double)a5;
- (BOOL)shouldFreezeCurrentSeries:(id)a0 lastDatum:(id)a1 seriesLength:(long long)a2 configuration:(id)a3 aggregationInterval:(double)a4;
- (id)initialAggregationState;
- (BOOL)shouldAggregateToSeriesForState:(id)a0 collector:(id)a1 device:(id)a2 requestedAggregationDate:(id)a3 mode:(long long)a4 options:(unsigned long long)a5;
- (id)initForQuantityType:(id)a0 dataCollectionManager:(id)a1;
- (void).cxx_destruct;

@end
