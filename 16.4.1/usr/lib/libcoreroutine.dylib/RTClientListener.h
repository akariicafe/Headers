@class RTDefaultsManager, RTPlaceInferenceManager, RTLocationStore, RTDeviceLocationPredictor, RTEventAgentManager, RTAssetManager, RTLocationManager, RTAuthorizationManager, RTAccountManager, RTVisitManager, RTLearnedLocationManager, RTFingerprintManager, RTWiFiManager, RTHintManager, NSMutableDictionary, RTScenarioTriggerManager, RTMapServiceManager, RTPDiscoveryProvider, RTContactsManager, RTTimerManager, NSString, NSXPCInterface, RTMetricManager, RTHealthKitManager, RTDiagnostics, RTMotionActivityManager, RTEventModelProvider, RTVehicleLocationProvider, RTPurgeManager, RTLearnedLocationStore;

@interface RTClientListener : RTXPCListener <RTClientListenerProtocol, NSXPCListenerDelegate> {
    NSXPCInterface *_frameworkInterface;
    NSXPCInterface *_daemonInterface;
}

@property (retain, nonatomic) NSMutableDictionary *persistedClients;
@property (retain, nonatomic) RTScenarioTriggerManager *scenarioTriggerManager;
@property (retain, nonatomic) RTVehicleLocationProvider *vehicleLocationProvider;
@property (retain, nonatomic) RTAuthorizationManager *authorizationManager;
@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTDeviceLocationPredictor *deviceLocationPredictor;
@property (retain, nonatomic) RTHealthKitManager *healthKitManager;
@property (retain, nonatomic) RTPurgeManager *purgeManager;
@property (retain, nonatomic) RTEventModelProvider *eventModelProvider;
@property (retain, nonatomic) RTVisitManager *visitManager;
@property (retain, nonatomic) RTAssetManager *assetManager;
@property (retain, nonatomic) RTHintManager *hintManager;
@property (retain, nonatomic) RTLocationStore *locationStore;
@property (retain, nonatomic) RTLocationManager *locationManager;
@property (retain, nonatomic) RTEventAgentManager *eventAgentManager;
@property (retain, nonatomic) RTDiagnostics *diagnostics;
@property (retain, nonatomic) RTLearnedLocationManager *learnedLocationManager;
@property (retain, nonatomic) RTLearnedLocationStore *learnedLocationStore;
@property (retain, nonatomic) RTPlaceInferenceManager *placeInferenceManager;
@property (retain, nonatomic) RTPDiscoveryProvider *pDiscoveryProvider;
@property (retain, nonatomic) RTAccountManager *accountManager;
@property (retain, nonatomic) RTMetricManager *metricManager;
@property (retain, nonatomic) RTMotionActivityManager *motionActivityManager;
@property (retain, nonatomic) RTFingerprintManager *fingerprintManager;
@property (retain, nonatomic) RTWiFiManager *wifiManager;
@property (retain, nonatomic) RTMapServiceManager *mapServiceManager;
@property (retain, nonatomic) RTContactsManager *contactsManager;
@property (retain, nonatomic) RTTimerManager *timerManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)persistedClientsPath;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)_setup;
- (id)init;
- (void).cxx_destruct;
- (void)_setupConnection:(id)a0 forClient:(id)a1;
- (id)handleClientConnection:(id)a0;
- (void)handleDisconnectionForDaemonClient:(id)a0;
- (id)handleRestorationForDaemonClient:(id)a0;
- (id)initWithAccountManager:(id)a0 assetManager:(id)a1 authorizationManager:(id)a2 contactsManager:(id)a3 defaultsManager:(id)a4 deviceLocationPredictor:(id)a5 diagnostics:(id)a6 eventAgentManager:(id)a7 eventModelProvider:(id)a8 fingerprintManager:(id)a9 healthKitManager:(id)a10 hintManager:(id)a11 learnedLocationManager:(id)a12 learnedLocationStore:(id)a13 locationManager:(id)a14 locationStore:(id)a15 mapServiceManager:(id)a16 metricManager:(id)a17 motionActivityManager:(id)a18 pDiscoveryProvider:(id)a19 placeInferenceManager:(id)a20 purgeManager:(id)a21 scenarioTriggerManager:(id)a22 timerManager:(id)a23 vehicleLocationProvider:(id)a24 visitManager:(id)a25 wifiManager:(id)a26;
- (void)saveDaemonClient:(id)a0;

@end
