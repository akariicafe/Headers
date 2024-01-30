@interface HDHeartbeatSequenceDataAggregator : HDPassiveDataAggregator

- (id)dataObjectsFromSensorDatum:(id)a0 error:(id *)a1;
- (id)objectType;
- (Class)sensorDatumClass;
- (BOOL)didPersistObjects:(id)a0 lastDatum:(id)a1 collector:(id)a2 error:(id *)a3;
- (id)_metadataForSensorDatum:(id)a0;
- (BOOL)_associateSubsampleFromSensorDatum:(id)a0 sampleUUID:(id)a1 error:(id *)a2;

@end
