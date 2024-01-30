@class RTVisitStore, NSMutableArray, RTVisitLabeler, NSString, RTPlatform, RTVisitMonitor, RTDeviceLocationPredictor, RTDefaultsManager, RTLocationManager, RTMetricManager, RTLocationAwarenessManager, RTHintManager;

@interface RTVisitManager : RTService <RTVisitMonitorDelegate, RTPurgable, RTStoreManager>

@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTDeviceLocationPredictor *deviceLocationPredictor;
@property (retain, nonatomic) RTHintManager *hintManager;
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

- (void)_shutdown;
- (void)performPurgeOfType:(long long)a0 referenceDate:(id)a1 completion:(id /* block */)a2;
- (void)fetchEnumerableObjectsWithOptions:(id)a0 offset:(unsigned long long)a1 handler:(id /* block */)a2;
- (void)_setup;
- (void)fetchVisitsFromDate:(id)a0 toDate:(id)a1 handler:(id /* block */)a2;
- (id)init;
- (void).cxx_destruct;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)fetchStoredVisitsWithOptions:(id)a0 handler:(id /* block */)a1;
- (id)initWithDefaultsManager:(id)a0 deviceLocationPredictor:(id)a1 hintManager:(id)a2 locationAwarenessManager:(id)a3 locationManager:(id)a4 metricManager:(id)a5 platform:(id)a6 visitLabeler:(id)a7 visitStore:(id)a8;
- (void)onVisitIncident:(id)a0 error:(id)a1;
- (void)onLowConfidenceVisitIncident:(id)a0 error:(id)a1;
- (void)simulateVisit:(id)a0 handler:(id /* block */)a1;
- (void)injectRealtimeVisit:(id)a0 handler:(id /* block */)a1;
- (void)onVisitStoreNotification:(id)a0;
- (void)_setupVisitMonitorWithHandler:(id /* block */)a0;
- (void)_onVisitStoreNotification:(id)a0;
- (void)_updateStateForVisitIncidents;
- (void)_updateStateForLeechedVisitIncidents;
- (void)_updateStateForLowConfidenceVisitIncidents;
- (void)_fetchVisitsFromDate:(id)a0 toDate:(id)a1 handler:(id /* block */)a2;
- (void)_onVisitIncident:(id)a0 error:(id)a1;
- (void)_onLowConfidenceVisitIncident:(id)a0 error:(id)a1;
- (void)_performPurgeOfType:(long long)a0 referenceDate:(id)a1 completion:(id /* block */)a2;
- (id)registerForSpoofVisitIncidentOfCategory:(id)a0;
- (void)unregisterForSpoofVisitIncidentWithToken:(int)a0;
- (void)_simulateVisit:(id)a0 handler:(id /* block */)a1;
- (void)_injectRealtimeVisit:(id)a0 handler:(id /* block */)a1;

@end
