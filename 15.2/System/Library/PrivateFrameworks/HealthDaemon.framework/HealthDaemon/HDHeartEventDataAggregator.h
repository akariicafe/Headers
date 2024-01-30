@interface HDHeartEventDataAggregator : HDPassiveDataAggregator

- (id)_categoryType;
- (id)objectType;
- (id)dataObjectsFromSensorDatum:(id)a0 error:(id *)a1;
- (Class)sensorDatumClass;
- (BOOL)didPersistObjects:(id)a0 lastDatum:(id)a1 collector:(id)a2 error:(id *)a3;

@end
