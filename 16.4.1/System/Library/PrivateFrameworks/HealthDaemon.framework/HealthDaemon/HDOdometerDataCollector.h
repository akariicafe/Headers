@class HKQuantityType;

@interface HDOdometerDataCollector : HDCoreMotionDataCollector {
    HKQuantityType *_distanceType;
}

- (id)persistentIdentifier;
- (BOOL)canResumeCollectionFromLastSensorDatum;
- (id)collectedTypes;
- (double)queue_differenceFromDatum:(id)a0 toDatum:(id)a1 type:(id)a2;
- (Class)coreMotionDatumClass;
- (id)queue_newDataSource;
- (id)initWithProfile:(id)a0 collectedDistanceType:(id)a1;
- (unsigned long long)queue_targetCollectionTypeForRequestedCollectionType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
