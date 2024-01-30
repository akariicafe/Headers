@class HKQuantityType;

@interface HDPassiveQuantityDataAggregator : HDPassiveDataAggregator

@property (readonly, copy, nonatomic) HKQuantityType *quantityType;

- (id)objectType;
- (id)initForQuantityType:(id)a0 dataCollectionManager:(id)a1;
- (id)dataObjectsFromSensorDatum:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (Class)sensorDatumClass;

@end
