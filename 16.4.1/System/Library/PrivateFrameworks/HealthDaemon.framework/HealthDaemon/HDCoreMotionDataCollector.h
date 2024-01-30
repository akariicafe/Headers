@class HDDataCollectorMultiplexer, NSString, HDProfile, NSSet, NSMutableDictionary, NSObject, HDDataCollectorState;
@protocol OS_dispatch_queue, HDCoreMotionDataSource;

@interface HDCoreMotionDataCollector : NSObject <HDDiagnosticObject, HDDataCollector> {
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

- (void)dataAggregator:(id)a0 wantsCollectionWithConfiguration:(id)a1;
- (id)initWithProfile:(id)a0;
- (id)diagnosticDescription;
- (id)persistentIdentifier;
- (void)beginCollectionForDataAggregator:(id)a0 lastPersistedSensorDatum:(id)a1;
- (id)identifierForDataAggregator:(id)a0;
- (id)sourceForDataAggregator:(id)a0;
- (void)dealloc;
- (id)collectedTypes;
- (Class)sensorDatumClassForAggregator:(id)a0;
- (double)queue_differenceFromDatum:(id)a0 toDatum:(id)a1 type:(id)a2;
- (Class)coreMotionDatumClass;
- (id)queue_newDataSource;
- (unsigned long long)queue_targetCollectionTypeForRequestedCollectionType:(unsigned long long)a0;
- (void).cxx_destruct;
- (void)_accessToFitnessDataDidChange:(id)a0;
- (void)queue_recomputeCurrentState;
- (void)registerWithAggregators;

@end
