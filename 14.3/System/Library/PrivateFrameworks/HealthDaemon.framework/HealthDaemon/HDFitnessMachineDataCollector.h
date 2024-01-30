@class NSMutableDictionary, NSMapTable, HDDataCollectorConfiguration, NSDate, NSObject, HKSource, HDProfile, NSMutableArray, NSString, NSSet, CMFitnessMachine, HKDevice, HKObserverSet;
@protocol OS_dispatch_queue;

@interface HDFitnessMachineDataCollector : NSObject <HDDataCollector, HDMetricsCollector> {
    unsigned long long _fitnessMachineType;
    NSMapTable *_aggregators;
    NSObject<OS_dispatch_queue> *_queue;
    HDDataCollectorConfiguration *_configuration;
    NSMutableDictionary *_previousDatums;
    NSMutableDictionary *_previousWorkoutMetrics;
    NSDate *_approximatedStartDate;
    NSMutableArray *_bufferedCharacteristics;
    NSSet *_localDevicePreferredObjectTypes;
    NSMutableDictionary *_bufferedMetrics;
    NSString *_machineBrand;
    HKDevice *_device;
    HKSource *_source;
    CMFitnessMachine *_cmFitnessMachine;
    HDProfile *_profile;
    HKObserverSet *_metricsCollectorObservers;
}

@property (retain, nonatomic) NSDate *machinePreferredUntilDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)identifierForDataAggregator:(id)a0;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)addObserver:(id)a0;
- (void)dataAggregator:(id)a0 wantsCollectionWithConfiguration:(id)a1;
- (void)beginCollectionForDataAggregator:(id)a0 lastPersistedSensorDatum:(id)a1;
- (void)tearDown;
- (id)sourceForDataAggregator:(id)a0;
- (void)handleDataCharacteristic:(id)a0;
- (void)setMachineStartDate:(id)a0;
- (void)setMachineBrand:(id)a0;
- (id)initWithFitnessMachineType:(unsigned long long)a0 profile:(id)a1;
- (void)configureCollectorsAndAggregators;
- (void)_queue_processBufferedCharacteristics;
- (void)_queue_handleDataCharacteristic:(id)a0;
- (void)_queue_processDataCharacteristic:(id)a0;
- (void)_queue_processDatumsByMetric:(id)a0 timestamp:(id)a1;
- (BOOL)_queue_shouldApplyDatum:(id)a0 toAggregator:(id)a1;
- (id)_queue_calculateDatumForAggregatorType:(id)a0 currentDatum:(id)a1 previousDatum:(id)a2;
- (id)workoutMetricsFromDatums:(id)a0;
- (id)_cmFitnessMachineDataFromDatums:(id)a0 timestamp:(id)a1;
- (void)_queue_fitnessMachineSumForType:(id)a0 dateInterval:(id)a1 completion:(id /* block */)a2;
- (id)_filterForFitnessMachineSamplesWithStartDate:(id)a0 endDate:(id)a1 quantityType:(id)a2;
- (void)_queue_handleConfigurationChanged:(id)a0;
- (void)_deliverBufferedMetrics;
- (double)_getDoubleFromDatum:(id)a0 unitString:(id)a1 defaultValue:(double)a2;
- (long long)_getLongFromDatum:(id)a0 unitString:(id)a1 defaultValue:(long long)a2;
- (double)preferredAggregationIntervalForAggregator:(id)a0;
- (void)unitTest_processDatumsByMetric:(id)a0;

@end
