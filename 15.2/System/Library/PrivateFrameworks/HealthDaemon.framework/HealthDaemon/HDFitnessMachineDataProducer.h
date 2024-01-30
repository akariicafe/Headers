@class HKQuantity, NSString, _HDFTMProducerMetricTracker, HDEurotasData, HDProfile, NSObject;
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
    HDProfile *_profile;
}

@property (readonly, nonatomic) BOOL attached;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)resumeCurrentSession;
- (void)pauseCurrentSession;
- (void)sendInitialValues;
- (void)attachHealthServiceSession:(unsigned long long)a0;
- (void)detachHealthServiceSession;
- (void)deliverFinalValuesAndDetachWithCompletion:(id /* block */)a0;
- (void)workoutDataAccumulator:(id)a0 didUpdateStatistics:(id)a1;

@end
