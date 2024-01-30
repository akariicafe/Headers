@interface HDHeartRateDataAggregator : HDDataAggregator

- (BOOL)_shouldRequestActiveCollectionForConfiguration:(id)a0;
- (id)initWithDataCollectionManager:(id)a0;
- (void)dealloc;
- (void)workoutManagerStateChanged:(id)a0;
- (id)_metadataForSensorDatum:(id)a0 collector:(id)a1;
- (id)objectType;
- (void)_notifyForSensorDatum:(id)a0 collector:(id)a1 device:(id)a2 source:(id)a3;
- (id)configurationForCollector:(id)a0;
- (void)dataCollector:(id)a0 didCollectSensorData:(id)a1 device:(id)a2;

@end
