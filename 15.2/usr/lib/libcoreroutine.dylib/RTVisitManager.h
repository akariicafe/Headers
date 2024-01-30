@class RTDeviceLocationPredictor, RTVisitMonitor, RTHintManager, RTLocationAwarenessManager, RTVisitStore, RTDefaultsManager, NSMutableArray, RTPlatform, RTMetricManager, NSString, RTVisitLabeler, RTLearnedLocationManager, RTLocationManager;

@interface RTVisitManager : RTService <RTVisitMonitorDelegate, RTPurgable, RTStoreManager>

@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTDeviceLocationPredictor *deviceLocationPredictor;
@property (retain, nonatomic) RTHintManager *hintManager;
@property (retain, nonatomic) RTLearnedLocationManager *learnedLocationManager;
@property (retain, nonatomic) RTLocationAwarenessManager *locationAwarenessManager;
@property (retain, nonatomic) RTLocationManager *locationManager;
@property (retain, nonatomic) RTMetricManager *metricManager;
@property (retain, nonatomic) RTPlatform *platform;
@property (retain, nonatomic) RTVisitStore *visitStore;
@property (nonatomic) BOOL spoofMode;
@property (retain, nonatomic) NSMutableArray *spoofVisitIncidentTokens;
@property (retain, nonatomic) RTVisitMonitor *visitMonitor;
@property (readonly, nonatomic) RTVisitLabeler *visitLabeler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)vendedClasses;

- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)performPurgeOfType:(long long)a0 referenceDate:(id)a1 completion:(id /* block */)a2;
- (void)_performPurgeOfType:(long long)a0 referenceDate:(id)a1 completion:(id /* block */)a2;
- (void)onVisitStoreNotification:(id)a0;
- (void)_setup;
- (void)onVisitIncident:(id)a0 error:(id)a1;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)_updateStateForLowConfidenceVisitIncidents;
- (void)fetchEnumerableObjectsWithOptions:(id)a0 offset:(unsigned long long)a1 handler:(id /* block */)a2;
- (void)_onVisitIncident:(id)a0 error:(id)a1;
- (void)simulateVisit:(id)a0 handler:(id /* block */)a1;
- (id)initWithDefaultsManager:(id)a0 deviceLocationPredictor:(id)a1 hintManager:(id)a2 learnedLocationManager:(id)a3 locationAwarenessManager:(id)a4 locationManager:(id)a5 metricManager:(id)a6 platform:(id)a7 visitLabeler:(id)a8 visitStore:(id)a9;
- (void)unregisterForSpoofVisitIncidentWithToken:(int)a0;
- (void)fetchStoredVisitsWithOptions:(id)a0 handler:(id /* block */)a1;
- (void)_updateStateForLeechedVisitIncidents;
- (void)_updateStateForVisitIncidents;
- (id)registerForSpoofVisitIncidentOfCategory:(id)a0;
- (void).cxx_destruct;
- (void)injectRealtimeVisit:(id)a0 handler:(id /* block */)a1;
- (id)init;
- (void)_fetchVisitsFromDate:(id)a0 toDate:(id)a1 handler:(id /* block */)a2;
- (void)fetchVisitsFromDate:(id)a0 toDate:(id)a1 handler:(id /* block */)a2;
- (void)onLowConfidenceVisitIncident:(id)a0 error:(id)a1;
- (void)_injectRealtimeVisit:(id)a0 handler:(id /* block */)a1;
- (void)_setupVisitMonitorWithHandler:(id /* block */)a0;
- (void)_onVisitStoreNotification:(id)a0;
- (void)_onLowConfidenceVisitIncident:(id)a0 error:(id)a1;
- (void)_simulateVisit:(id)a0 handler:(id /* block */)a1;

@end
