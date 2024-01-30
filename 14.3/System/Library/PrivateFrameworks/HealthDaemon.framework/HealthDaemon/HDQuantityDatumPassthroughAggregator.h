@interface HDQuantityDatumPassthroughAggregator : HDPassiveDataAggregator

+ (id)quantityTypeIdentifier;

- (id)dataObjectsFromSensorDatum:(id)a0 error:(id *)a1;
- (id)objectType;
- (Class)sensorDatumClass;

@end
