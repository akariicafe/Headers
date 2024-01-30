@class HDDataAggregatorConfiguration, NSString, NSMapTable, HDDataCollectionManager, NSLock, HKObjectType;

@interface HDDataAggregator : NSObject <HDHealthDaemonReadyObserver> {
    NSLock *_lock;
    NSMapTable *_lock_collectorRegistry;
    HDDataAggregatorConfiguration *_lock_configuration;
    _Atomic BOOL _hasStartedCollectors;
    BOOL _lock_canStartCollectors;
}

@property (readonly, weak, nonatomic) HDDataCollectionManager *dataCollectionManager;
@property (copy) HDDataAggregatorConfiguration *configuration;
@property (readonly, copy, nonatomic) HKObjectType *objectType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataCollectionManager:(id)a0;
- (void).cxx_destruct;
- (void)daemonReady:(id)a0;
- (id)diagnosticDescription;
- (void)resume;
- (id)configurationForCollector:(id)a0;
- (void)dataCollector:(id)a0 didCollectSensorData:(id)a1 device:(id)a2;
- (id)_keyValueDomain;
- (BOOL)didPersistObjects:(id)a0 lastDatum:(id)a1 collector:(id)a2 error:(id *)a3;
- (void)unregisterDataCollector:(id)a0;
- (void)registerDataCollector:(id)a0 state:(id)a1;
- (void)dataCollector:(id)a0 didCollectSensorDatum:(id)a1 device:(id)a2;
- (BOOL)persistForCollector:(id)a0 usedDatums:(id)a1 source:(id)a2 device:(id)a3 error:(id *)a4 persistenceHandler:(id /* block */)a5;
- (id)allCollectors;
- (void)requestAggregationThroughDate:(id)a0 mode:(long long)a1 options:(unsigned long long)a2 completion:(id /* block */)a3;
- (void)recomputeCollectorConfiguration;
- (void)dataCollector:(id)a0 didChangeState:(id)a1;
- (BOOL)persistObjects:(id)a0 usedDatums:(id)a1 collector:(id)a2 source:(id)a3 device:(id)a4 resolveAssociations:(BOOL)a5 error:(id *)a6;
- (void)_considerStartingCollectors;
- (void)_startCollector:(id)a0;

@end
