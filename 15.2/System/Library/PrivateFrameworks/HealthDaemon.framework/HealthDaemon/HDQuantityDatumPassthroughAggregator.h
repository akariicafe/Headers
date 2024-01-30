@interface HDQuantityDatumPassthroughAggregator : HDPassiveDataAggregator

+ (id)quantityTypeIdentifier;

- (id)objectType;
- (id)dataObjectsFromSensorDatum:(id)a0 error:(id *)a1;
- (Class)sensorDatumClass;

@end
