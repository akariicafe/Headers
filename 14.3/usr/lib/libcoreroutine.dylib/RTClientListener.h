@class RTPlaceInferenceManager, RTEventAgentManager, RTDeviceLocationPredictor, RTLocationStore, RTMapServiceManager, RTFingerprintManager, RTAssetManager, RTLocationManager, RTWiFiManager, RTLearnedLocationManager, RTAuthorizationManager, RTVisitManager, RTHintManager, NSMutableDictionary, RTScenarioTriggerManager, RTAccountManager, RTContactsManager, NSString, NSXPCInterface, RTMetricManager, RTDiagnostics, RTEventModelProvider, RTVehicleLocationProvider, RTPurgeManager;

@interface RTClientListener : RTXPCListener <RTClientListenerProtocol, NSXPCListenerDelegate> {
    NSXPCInterface *_frameworkInterface;
    NSXPCInterface *_daemonInterface;
}

@property (retain, nonatomic) NSMutableDictionary *persistedClients;
@property (retain, nonatomic) RTScenarioTriggerManager *scenarioTriggerManager;
@property (retain, nonatomic) RTVehicleLocationProvider *vehicleLocationProvider;
@property (retain, nonatomic) RTAuthorizationManager *authorizationManager;
@property (retain, nonatomic) RTDeviceLocationPredictor *deviceLocationPredictor;
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
@property (retain, nonatomic) RTPlaceInferenceManager *placeInferenceManager;
@property (retain, nonatomic) RTAccountManager *accountManager;
@property (retain, nonatomic) RTMetricManager *metricManager;
@property (retain, nonatomic) RTFingerprintManager *fingerprintManager;
@property (retain, nonatomic) RTWiFiManager *wifiManager;
@property (retain, nonatomic) RTMapServiceManager *mapServiceManager;
@property (retain, nonatomic) RTContactsManager *contactsManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)persistedClientsPath;

- (void)_setup;
- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)handleClientConnection:(id)a0;
- (void)saveDaemonClient:(id)a0;
- (id)handleRestorationForDaemonClient:(id)a0;
- (id)initWithAccountManager:(id)a0 assetManager:(id)a1 authorizationManager:(id)a2 contactsManager:(id)a3 deviceLocationPredictor:(id)a4 diagnostics:(id)a5 eventAgentManager:(id)a6 eventModelProvider:(id)a7 fingerprintManager:(id)a8 hintManager:(id)a9 learnedLocationManager:(id)a10 locationManager:(id)a11 locationStore:(id)a12 mapServiceManager:(id)a13 metricManager:(id)a14 placeInferenceManager:(id)a15 purgeManager:(id)a16 scenarioTriggerManager:(id)a17 vehicleLocationProvider:(id)a18 visitManager:(id)a19 wifiManager:(id)a20;
- (void)_setupConnection:(id)a0 forClient:(id)a1;
- (void)handleDisconnectionForDaemonClient:(id)a0;

@end
