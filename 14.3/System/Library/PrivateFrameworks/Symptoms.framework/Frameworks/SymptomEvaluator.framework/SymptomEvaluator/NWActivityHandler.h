@class NSUUID, NSString, NWUUIDMapper, NWAccumulator, NSMutableDictionary, NSDictionary, AnalyticsWorkspace, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_nw_activity;

@interface NWActivityHandler : NSObject <SymptomsAWDObserverDelegate, ConfigurableObjectProtocol, SymptomAdditionalProtocol, ManagedEventInfoProtocol> {
    NSObject<OS_dispatch_queue> *_metricsQueue;
    NSObject<OS_dispatch_source> *_metricCollectionTimer;
    double _lastCellularTriggerTime;
    unsigned int _outstandingWiFiFragments;
    unsigned short _L2MetricCount;
    AnalyticsWorkspace *_workspace;
    BOOL _cellFragmentRequestOutstanding;
    BOOL _awdObserverConfigured;
    NSObject<OS_nw_activity> *_batteryActivity;
}

@property (readonly, nonatomic) NSMutableDictionary *mappedMetrics;
@property (readonly, nonatomic) NWUUIDMapper *nullUUIDMapper;
@property (readonly, nonatomic) NSUUID *nullUUID;
@property (readonly, nonatomic) NSMutableArray *currentActivities;
@property (readonly, nonatomic) NSMutableArray *completeActivities;
@property (retain, nonatomic) NSUUID *lastWiFiActivity;
@property (retain, nonatomic) NSDictionary *lastCellularFragment;
@property (retain, nonatomic) NWAccumulator *batteryAccumulator;
@property (retain, nonatomic) NWAccumulator *batteryAccumulatorSnapshot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)configureClass:(id)a0;

- (BOOL)noteSymptom:(id)a0;
- (id)createValidJSONObject:(id)a0 atPath:(id)a1;
- (void)generateInfoForId:(unsigned long long)a0 context:(const char *)a1 uuid:(id)a2 completionBlock:(id /* block */)a3;
- (void)_handleL2Start:(id)a0;
- (id)init;
- (id)analyticsWorkspace;
- (id)mapperForUUID:(id)a0 reason:(int)a1;
- (void).cxx_destruct;
- (int)configureInstance:(id)a0;
- (void)_handleNWConnectionStatistics:(id)a0 effectivePid:(int)a1;
- (void)dealloc;
- (void)_pruneActivityLists;
- (id)_createDeviceReportForActivityType:(int)a0 andDomain:(unsigned int)a1;
- (void)_deliverCellularFragment:(id)a0;
- (BOOL)_saveMetricWithUUIDS:(id)a0 withData:(id)a1 ofType:(int)a2;
- (void)handleEvent:(id)a0;
- (BOOL)configuredForMetricStreaming;
- (void)_sendMetric:(id)a0 ofType:(int)a1 forActivities:(id)a2 additionalItems:(id)a3;
- (void)_handleCellularItem:(id)a0;
- (id)serialNumberForInternalBuilds;
- (id)_createNWL2Report;
- (void)_reportThermalPressureEvent:(unsigned int)a0 forActivityEpilogue:(id)a1;
- (void)_pruneOldMappings;
- (void)_handleWiFiItem:(id)a0;
- (void)_handleEpilogue:(id)a0;
- (void)_dumpState:(int)a0;
- (void)_updateL2MetricLoggingRequests;
- (void)_stopL2Streaming;
- (void)setUpBatteryAccumulator;
- (void)_handleStartActivity:(id)a0;
- (void)_handleCFNetworkItem:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)powerStateChanged:(BOOL)a0;
- (void)_collectCellularFragment;
- (void)traverseObject:(id)a0 atPath:(id)a1;
- (void)streamAWDMetric:(id)a0 withIdentifier:(unsigned int)a1 additionalDictionaryItems:(id)a2;
- (void)_triggerCellMetric;
- (void)_startL2Streaming;
- (void)_handleL2Stop:(id)a0;
- (void)_convertPLMNToDecimal:(id)a0 mcc:(int *)a1 mnc:(int *)a2;
- (void)_triggerWiFiMetric;
- (id)_getBundleNameFromPid:(int)a0;

@end
