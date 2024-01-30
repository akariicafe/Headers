@class RTPersistenceManager, RTEventAgentManager, RTDeviceLocationPredictor, RTLocationStore, RTFingerprintManager, RTAssetManager, RTLocationManager, RTAuthorizationManager, RTWiFiManager, RTLearnedLocationManager, RTAccountManager, RTVisitManager, RTHintManager, NSString, RTScenarioTriggerManager, RTPlatform, RTDiagnostics, RTMotionActivityManager, RTEventModelProvider, RTVehicleLocationProvider, RTPurgeManager, RTLearnedLocationStore;

@interface RTClientListenerInternal : RTXPCListener <NSXPCListenerDelegate>

@property (retain, nonatomic) RTAccountManager *accountManager;
@property (retain, nonatomic) RTAssetManager *assetManager;
@property (retain, nonatomic) RTAuthorizationManager *authorizationManager;
@property (retain, nonatomic) RTDeviceLocationPredictor *deviceLocationPredictor;
@property (retain, nonatomic) RTDiagnostics *diagnostics;
@property (retain, nonatomic) RTEventAgentManager *eventAgentManager;
@property (retain, nonatomic) RTEventModelProvider *eventModelProvider;
@property (retain, nonatomic) RTFingerprintManager *fingerprintManager;
@property (retain, nonatomic) RTHintManager *hintManager;
@property (retain, nonatomic) RTLearnedLocationManager *learnedLocationManager;
@property (retain, nonatomic) RTLearnedLocationStore *learnedLocationStore;
@property (retain, nonatomic) RTLocationManager *locationManager;
@property (retain, nonatomic) RTLocationStore *locationStore;
@property (retain, nonatomic) RTMotionActivityManager *motionActivityManager;
@property (retain, nonatomic) RTPersistenceManager *persistenceManager;
@property (retain, nonatomic) RTPlatform *platform;
@property (retain, nonatomic) RTPurgeManager *purgeManager;
@property (retain, nonatomic) RTScenarioTriggerManager *scenarioTriggerManager;
@property (retain, nonatomic) RTVehicleLocationProvider *vehicleLocationProvider;
@property (retain, nonatomic) RTVisitManager *visitManager;
@property (retain, nonatomic) RTWiFiManager *wifiManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)handleClientConnection:(id)a0;
- (id)initWithAccountManager:(id)a0 assetManager:(id)a1 authorizationManager:(id)a2 deviceLocationPredictor:(id)a3 diagnostics:(id)a4 eventAgentManager:(id)a5 eventModelProvider:(id)a6 fingerprintManager:(id)a7 hintManager:(id)a8 learnedLocationManager:(id)a9 learnedLocationStore:(id)a10 locationManager:(id)a11 locationStore:(id)a12 motionActivityManager:(id)a13 persistenceManager:(id)a14 platform:(id)a15 purgeManager:(id)a16 scenarioTriggerManager:(id)a17 vehicleLocationProvider:(id)a18 visitManager:(id)a19;
- (void).cxx_destruct;
- (id)init;

@end
