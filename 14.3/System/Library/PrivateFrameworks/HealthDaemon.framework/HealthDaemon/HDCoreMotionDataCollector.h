@class HDDataCollectorMultiplexer, NSString, HDProfile, NSSet, NSMutableDictionary, NSObject, HDDataCollectorState;
@protocol OS_dispatch_queue, HDCoreMotionDataSource;

@interface HDCoreMotionDataCollector : NSObject <HDDataCollector> {
    NSSet *_quantityTypes;
    HDDataCollectorMultiplexer *_multiplexer;
    NSMutableDictionary *_lastCMDatumByType;
    id<HDCoreMotionDataSource> _dataSource;
    HDDataCollectorState *_state;
    long long _errorCount;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, weak, nonatomic) HDProfile *profile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (id)identifierForDataAggregator:(id)a0;
- (unsigned long long)queue_targetCollectionTypeForRequestedCollectionType:(unsigned long long)a0;
- (id)persistentIdentifier;
- (Class)coreMotionDatumClass;
- (void).cxx_destruct;
- (void)dealloc;
- (id)collectedTypes;
- (Class)sensorDatumClassForAggregator:(id)a0;
- (void)dataAggregator:(id)a0 wantsCollectionWithConfiguration:(id)a1;
- (void)beginCollectionForDataAggregator:(id)a0 lastPersistedSensorDatum:(id)a1;
- (id)queue_newDataSource;
- (double)queue_differenceFromDatum:(id)a0 toDatum:(id)a1 type:(id)a2;
- (id)sourceForDataAggregator:(id)a0;
- (void)registerWithAggregators;
- (void)_accessToFitnessDataDidChange:(id)a0;
- (id)_queue_diagnosticDescription;
- (void)_queue_beginUpdatesWithTargetCollectionType:(unsigned long long)a0;
- (void)_queue_updateCollectionType:(unsigned long long)a0;
- (id)coreMotionDatumFromSensorDatum:(id)a0;
- (void)_queue_forwardCoreMotionData:(id)a0 forType:(id)a1;
- (void)_queue_forwardCoreMotionData:(id)a0;
- (void)queue_recomputeCurrentState;
- (id)_migrateDataCollectionContextForType:(id)a0 error:(id *)a1;
- (id)_queue_lastPersistedSensorDatumForType:(id)a0;
- (void)_queue_populateLastDatumDictionary;
- (void)didReceiveCoreMotionData:(id)a0 startingDatum:(id)a1 error:(id)a2;

@end
