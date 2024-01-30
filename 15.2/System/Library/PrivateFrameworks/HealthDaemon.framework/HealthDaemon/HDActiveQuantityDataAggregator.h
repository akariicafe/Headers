@class HKQuantityType;

@interface HDActiveQuantityDataAggregator : HDActiveDataAggregator

@property (readonly, copy, nonatomic) HKQuantityType *quantityType;

- (id)objectType;
- (id)initForQuantityType:(id)a0 dataCollectionManager:(id)a1;
- (id)aggregateForState:(id)a0 collector:(id)a1 device:(id)a2 requestedAggregationDate:(id)a3 mode:(long long)a4 options:(unsigned long long)a5 error:(id *)a6;
- (id)description;
- (void).cxx_destruct;
- (Class)sensorDatumClass;

@end
