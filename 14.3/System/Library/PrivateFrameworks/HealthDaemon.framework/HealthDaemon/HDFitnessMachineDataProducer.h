@class HKQuantity, NSString, HDProfile, _HDFTMProducerMetricTracker, HDEurotasData, NSObject, HDHealthServiceManager;
@protocol OS_dispatch_queue;

@interface HDFitnessMachineDataProducer : NSObject <HDWorkoutDataAccumulatorObserver> {
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _sessionIdentifier;
    HKQuantity *_totalActiveEnergy;
    HKQuantity *_totalBasalEnergy;
    HKQuantity *_latestHeartRate;
    HKQuantity *_averageHeartRate;
    _HDFTMProducerMetricTracker *_heartRateTracker;
    BOOL _heartRateEnabled;
    HDEurotasData *_previousEurotasData;
}

@property (weak, nonatomic) HDProfile *profile;
@property (readonly, nonatomic) HDHealthServiceManager *healthServiceManager;
@property (readonly, nonatomic) BOOL attached;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (id)_queue_generateEurotasData;
- (void)_queue_detachHealthServiceSession;
- (void).cxx_destruct;
- (void)deliverFinalValuesAndDetachWithCompletion:(id /* block */)a0;
- (void)_queue_updateFitnessMachineWithCompletion:(id /* block */)a0 forcing:(BOOL)a1;
- (void)_queue_sendEurotasData:(id)a0 completion:(id /* block */)a1;
- (void)workoutDataAccumulator:(id)a0 didUpdateStatistics:(id)a1;
- (void)dealloc;
- (void)pauseCurrentSession;
- (void)detachHealthServiceSession;
- (void)_readHeartRateEnabledPreference;
- (void)resumeCurrentSession;
- (void)_queue_updateFitnessMachine;
- (void)attachHealthServiceSession:(unsigned long long)a0;
- (void)sendInitialValues;
- (void)_queue_workoutDataAccumulator:(id)a0 didUpdateStatistics:(id)a1;

@end
