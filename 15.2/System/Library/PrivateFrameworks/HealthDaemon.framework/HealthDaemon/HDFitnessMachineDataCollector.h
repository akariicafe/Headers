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

- (void)tearDown;
- (void)beginCollectionForDataAggregator:(id)a0 lastPersistedSensorDatum:(id)a1;
- (id)identifierForDataAggregator:(id)a0;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (void)dataAggregator:(id)a0 wantsCollectionWithConfiguration:(id)a1;
- (id)sourceForDataAggregator:(id)a0;
- (void)handleDataCharacteristic:(id)a0;
- (void)setMachineStartDate:(id)a0;
- (void)setMachineBrand:(id)a0;
- (id)initWithFitnessMachineType:(unsigned long long)a0 profile:(id)a1;
- (double)preferredAggregationIntervalForAggregator:(id)a0;
- (void)unitTest_processDatumsByMetric:(id)a0;

@end
