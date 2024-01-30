@class HKQuantityType;

@interface HDOdometerDataCollector : HDCoreMotionDataCollector {
    HKQuantityType *_distanceType;
}

- (unsigned long long)queue_targetCollectionTypeForRequestedCollectionType:(unsigned long long)a0;
- (id)persistentIdentifier;
- (Class)coreMotionDatumClass;
- (void).cxx_destruct;
- (id)collectedTypes;
- (id)initWithProfile:(id)a0 collectedDistanceType:(id)a1;
- (BOOL)canResumeCollectionFromLastSensorDatum;
- (id)queue_newDataSource;
- (double)queue_differenceFromDatum:(id)a0 toDatum:(id)a1 type:(id)a2;

@end
