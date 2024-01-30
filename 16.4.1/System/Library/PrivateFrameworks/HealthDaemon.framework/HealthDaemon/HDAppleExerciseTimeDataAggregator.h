@interface HDAppleExerciseTimeDataAggregator : HDPassiveDataAggregator

- (Class)sensorDatumClass;
- (id)objectType;
- (id)dataObjectsFromSensorDatum:(id)a0 error:(id *)a1;

@end
