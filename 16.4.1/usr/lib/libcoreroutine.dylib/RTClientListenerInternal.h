@class RTPersistenceManager, RTEventAgentManager, RTDeviceLocationPredictor, RTLocationStore, RTFingerprintManager, RTAssetManager, RTLocationManager, RTAuthorizationManager, RTAccountManager, RTLearnedLocationManager, RTVisitManager, RTWiFiManager, RTHintManager, NSString, RTScenarioTriggerManager, RTPlatform, RTPDiscoveryProvider, RTBuildingPolygonManager, RTWorkoutRouteManager, RTWorkoutScheduler, RTDiagnostics, RTIntermittentGNSSManager, RTMotionActivityManager, RTEventModelProvider, RTVehicleLocationProvider, RTPurgeManager, RTLearnedLocationStore;

@interface RTClientListenerInternal : RTXPCListener <NSXPCListenerDelegate>

@property (retain, nonatomic) RTAccountManager *accountManager;
@property (retain, nonatomic) RTAssetManager *assetManager;
@property (retain, nonatomic) RTAuthorizationManager *authorizationManager;
@property (retain, nonatomic) RTBuildingPolygonManager *buildingPolygonManager;
@property (retain, nonatomic) RTDeviceLocationPredictor *deviceLocationPredictor;
@property (retain, nonatomic) RTDiagnostics *diagnostics;
@property (retain, nonatomic) RTEventAgentManager *eventAgentManager;
@property (retain, nonatomic) RTEventModelProvider *eventModelProvider;
@property (retain, nonatomic) RTFingerprintManager *fingerprintManager;
@property (retain, nonatomic) RTHintManager *hintManager;
@property (retain, nonatomic) RTIntermittentGNSSManager *intermittentGNSSManager;
@property (retain, nonatomic) RTLearnedLocationManager *learnedLocationManager;
@property (retain, nonatomic) RTLearnedLocationStore *learnedLocationStore;
@property (retain, nonatomic) RTLocationManager *locationManager;
@property (retain, nonatomic) RTLocationStore *locationStore;
@property (retain, nonatomic) RTMotionActivityManager *motionActivityManager;
@property (retain, nonatomic) RTPersistenceManager *persistenceManager;
@property (retain, nonatomic) RTPDiscoveryProvider *pDiscoveryProvider;
@property (retain, nonatomic) RTPlatform *platform;
@property (retain, nonatomic) RTPurgeManager *purgeManager;
@property (retain, nonatomic) RTScenarioTriggerManager *scenarioTriggerManager;
@property (retain, nonatomic) RTVehicleLocationProvider *vehicleLocationProvider;
@property (retain, nonatomic) RTVisitManager *visitManager;
@property (retain, nonatomic) RTWiFiManager *wifiManager;
@property (retain, nonatomic) RTWorkoutRouteManager *workoutRouteManager;
@property (retain, nonatomic) RTWorkoutScheduler *workoutScheduler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)handleClientConnection:(id)a0;
- (id)initWithAccountManager:(id)a0 assetManager:(id)a1 authorizationManager:(id)a2 buildingPolygonManager:(id)a3 deviceLocationPredictor:(id)a4 diagnostics:(id)a5 eventAgentManager:(id)a6 eventModelProvider:(id)a7 fingerprintManager:(id)a8 hintManager:(id)a9 intermittentGNSSManager:(id)a10 learnedLocationManager:(id)a11 learnedLocationStore:(id)a12 locationManager:(id)a13 locationStore:(id)a14 motionActivityManager:(id)a15 pDiscoveryProvider:(id)a16 persistenceManager:(id)a17 platform:(id)a18 purgeManager:(id)a19 scenarioTriggerManager:(id)a20 vehicleLocationProvider:(id)a21 visitManager:(id)a22 workoutRouteManager:(id)a23 workoutScheduler:(id)a24;

@end
