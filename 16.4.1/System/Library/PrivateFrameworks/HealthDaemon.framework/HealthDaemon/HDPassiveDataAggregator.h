@interface HDPassiveDataAggregator : HDDataAggregator

- (Class)sensorDatumClass;
- (id)dataObjectsFromSensorDatum:(id)a0 error:(id *)a1;
- (void)dataCollector:(id)a0 didCollectSensorData:(id)a1 device:(id)a2;

@end
