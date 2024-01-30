@class HKQuantityType;

@interface HDOdometerDataCollector : HDCoreMotionDataCollector {
    HKQuantityType *_distanceType;
}

- (id)persistentIdentifier;
- (double)queue_differenceFromDatum:(id)a0 toDatum:(id)a1 type:(id)a2;
- (id)queue_newDataSource;
- (id)collectedTypes;
- (void).cxx_destruct;
- (Class)coreMotionDatumClass;
- (unsigned long long)queue_targetCollectionTypeForRequestedCollectionType:(unsigned long long)a0;
- (id)initWithProfile:(id)a0 collectedDistanceType:(id)a1;
- (BOOL)canResumeCollectionFromLastSensorDatum;

@end
