@interface HDAppleExerciseTimeDataAggregator : HDPassiveDataAggregator

- (id)objectType;
- (id)dataObjectsFromSensorDatum:(id)a0 error:(id *)a1;
- (Class)sensorDatumClass;

@end
