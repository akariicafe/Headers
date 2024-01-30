@class HKQuantityType;

@interface HDPassiveQuantityDataAggregator : HDPassiveDataAggregator

@property (readonly, copy, nonatomic) HKQuantityType *quantityType;

- (void).cxx_destruct;
- (id)initForQuantityType:(id)a0 dataCollectionManager:(id)a1;
- (id)dataObjectsFromSensorDatum:(id)a0 error:(id *)a1;
- (id)objectType;
- (Class)sensorDatumClass;

@end
