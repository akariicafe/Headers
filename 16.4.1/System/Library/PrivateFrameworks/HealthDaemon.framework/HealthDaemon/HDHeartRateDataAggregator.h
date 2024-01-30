@interface HDHeartRateDataAggregator : HDDataAggregator

- (void)workoutManagerStateChanged:(id)a0;
- (id)configurationForCollector:(id)a0;
- (id)objectType;
- (void)dealloc;
- (void)dataCollector:(id)a0 didCollectSensorData:(id)a1 device:(id)a2;
- (id)initWithDataCollectionManager:(id)a0;
- (void)setConfiguration:(id)a0;

@end
