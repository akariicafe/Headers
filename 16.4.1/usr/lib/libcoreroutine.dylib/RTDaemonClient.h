@class RTMapServiceManager, RTLocationManager, RTDaemonClientRegistrarScenarioTrigger, RTMetricManager, RTAccountManager, RTLocationStore, RTDeviceLocationPredictor, RTScenarioTriggerManager, RTEventModelProvider, RTVehicleLocationProvider, NSXPCConnection, RTAuthorizationManager, RTLearnedLocationManager, RTDiagnostics, RTPurgeManager, RTTimerManager, RTDefaultsManager, RTLearnedLocationStore, RTVisitManager, RTContactsManager, RTWiFiManager, RTHealthKitManager, RTMotionActivityManager, RTEventAgentManager, RTAssetManager, NSMutableDictionary, RTDaemonClientRegistrarVehicleEvent, NSString, RTPlaceInferenceManager, NSObject, RTHintManager, RTEntitlementProvider, RTFingerprintManager, RTPDiscoveryProvider;
@protocol OS_dispatch_queue, RTClientListenerProtocol;

@interface RTDaemonClient : NSObject <RTDaemonClientRegistrarVehicleEventProtocol, RTDaemonClientRegistrarScenarioTriggerProtocol, RTDaemonProtocol, NSXPCConnectionDelegate>

@property BOOL enabled;
@property (nonatomic) BOOL supported;
@property (nonatomic) BOOL monitorVisits;
@property (nonatomic) BOOL leechVisits;
@property (nonatomic) BOOL leechLowConfidenceVisits;
@property (retain, nonatomic) NSMutableDictionary *restorationData;
@property (retain, nonatomic) RTEntitlementProvider *entitlementProvider;
@property (retain, nonatomic) NSMutableDictionary *vendedClassesStoreManagerDict;
@property (retain, nonatomic) RTDaemonClientRegistrarVehicleEvent *vehicleEventRegistrar;
@property (retain, nonatomic) RTDaemonClientRegistrarScenarioTrigger *scenarioTriggerRegistrar;
@property (retain, nonatomic) RTAccountManager *accountManager;
@property (retain, nonatomic) RTAssetManager *assetManager;
@property (retain, nonatomic) RTAuthorizationManager *authorizationManager;
@property (retain, nonatomic) RTContactsManager *contactsManager;
@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTDeviceLocationPredictor *deviceLocationPredictor;
@property (retain, nonatomic) RTDiagnostics *diagnostics;
@property (retain, nonatomic) RTEventAgentManager *eventAgentManager;
@property (retain, nonatomic) RTEventModelProvider *eventModelProvider;
@property (retain, nonatomic) RTFingerprintManager *fingerprintManager;
@property (retain, nonatomic) RTHealthKitManager *healthKitManager;
@property (retain, nonatomic) RTHintManager *hintManager;
@property (retain, nonatomic) RTLearnedLocationManager *learnedLocationManager;
@property (retain, nonatomic) RTLearnedLocationStore *learnedLocationStore;
@property (retain, nonatomic) RTLocationManager *locationManager;
@property (retain, nonatomic) RTLocationStore *locationStore;
@property (retain, nonatomic) RTMapServiceManager *mapServiceManager;
@property (retain, nonatomic) RTMetricManager *metricManager;
@property (retain, nonatomic) RTMotionActivityManager *motionActivityManager;
@property (retain, nonatomic) RTPDiscoveryProvider *pDiscoveryProvider;
@property (retain, nonatomic) RTPlaceInferenceManager *placeInferenceManager;
@property (retain, nonatomic) RTPurgeManager *purgeManager;
@property (retain, nonatomic) RTScenarioTriggerManager *scenarioTriggerManager;
@property (retain, nonatomic) RTTimerManager *timerManager;
@property (retain, nonatomic) RTVehicleLocationProvider *vehicleLocationProvider;
@property (retain, nonatomic) RTVisitManager *visitManager;
@property (retain, nonatomic) RTWiFiManager *wifiManager;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) NSString *executablePath;
@property (copy, nonatomic) NSString *executableName;
@property (nonatomic) int processIdentifier;
@property (copy, nonatomic) NSString *signingIdentifier;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (retain, nonatomic) NSXPCConnection *xpcConnection;
@property (copy, nonatomic) NSString *restorationIdentifier;
@property (weak, nonatomic) id<RTClientListenerProtocol> clientManagerDelegate;
@property (nonatomic) BOOL targetUserSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)filterVisits:(id)a0 executable:(id)a1;

- (void)updateVehicleEventWithIdentifier:(id)a0 notes:(id)a1 reply:(id /* block */)a2;
- (void)fetchFormattedPostalAddressesFromMeCard:(id /* block */)a0;
- (void)fetchStoredVisitsWithOptions:(id)a0 reply:(id /* block */)a1;
- (void)fetchPlaceInferencesWithOptions:(id)a0 reply:(id /* block */)a1;
- (void)fetchEstimatedLocationAtDate:(id)a0 options:(id)a1 reply:(id /* block */)a2;
- (void)updateLocationOfInterestWithIdentifier:(id)a0 mapItemStorage:(id)a1 reply:(id /* block */)a2;
- (void)connection:(id)a0 handleInvocation:(id)a1 isReply:(BOOL)a2;
- (void)startMonitoringVisitsWithReply:(id /* block */)a0;
- (void)addLocationOfInterestOfType:(long long)a0 mapItemStorage:(id)a1 customLabel:(id)a2 reply:(id /* block */)a3;
- (void)fetchCloudSyncAuthorizationStateWithReply:(id /* block */)a0;
- (void)startLeechingLowConfidenceVisitsWithReply:(id /* block */)a0;
- (void)setHintForRegionState:(long long)a0 significantRegion:(id)a1 reply:(id /* block */)a2;
- (void)fetchRoutineEnabledWithReply:(id /* block */)a0;
- (void)updateLocationOfInterestWithIdentifier:(id)a0 type:(long long)a1 mapItemStorage:(id)a2 customLabel:(id)a3 reply:(id /* block */)a4;
- (void)fetchLocationsOfInterestVisitedBetweenStartDate:(id)a0 endDate:(id)a1 reply:(id /* block */)a2;
- (void)updateCloudSyncProvisionedForAccount:(BOOL)a0 reply:(id /* block */)a1;
- (void)updateVehicleEventWithIdentifier:(id)a0 photo:(id)a1 reply:(id /* block */)a2;
- (void)removeVisitWithIdentifier:(id)a0 reply:(id /* block */)a1;
- (void)_fetchRealtimeVisitsWithDateInterval:(id)a0 options:(id)a1 handler:(id /* block */)a2;
- (void)launchClient;
- (void)fetchPCountEventsHistory:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)hasReasonToOutliveClientConnection;
- (void)stopLeechingVisitsWithReply:(id /* block */)a0;
- (void)startMonitoringScenarioTriggerOfType:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)shutdown;
- (void)_fetchHindsightVisitsWithDateInterval:(id)a0 ascending:(BOOL)a1 handler:(id /* block */)a2;
- (void)setRoutineEnabled:(BOOL)a0 reply:(id /* block */)a1;
- (void)fetchEnumerableObjectsWithOptions:(id)a0 offset:(id)a1 reply:(id /* block */)a2;
- (void)performBluePOIQueryLookingBack:(double)a0 lookingAhead:(double)a1 reply:(id /* block */)a2;
- (void)fetchLocationsOfInterestAssociatedToIdentifier:(id)a0 reply:(id /* block */)a1;
- (void)fetchLocationsOfInterestWithinDistance:(double)a0 ofLocation:(id)a1 reply:(id /* block */)a2;
- (void)updateLocationOfInterestWithIdentifier:(id)a0 type:(long long)a1 reply:(id /* block */)a2;
- (void)userInteractionWithPredictedLocationOfInterest:(id)a0 interaction:(unsigned long long)a1 feedback:(id)a2 geoMapItem:(id)a3 reply:(id /* block */)a4;
- (void)vehicleEventAtLocation:(id)a0 notes:(id)a1 reply:(id /* block */)a2;
- (void)fetchLastVehicleEventsWithReply:(id /* block */)a0;
- (void)startMonitoringVehicleEventsWithReply:(id /* block */)a0;
- (id)_clientIdentifier;
- (void)fetchFamiliarityIndexResultsWithOptions:(id)a0 reply:(id /* block */)a1;
- (void)fetchPredictedExitDatesFromLocation:(id)a0 onDate:(id)a1 reply:(id /* block */)a2;
- (void)fetchPredictedLocationsOfInterestAssociatedToTitle:(id)a0 location:(id)a1 calendarIdentifier:(id)a2 reply:(id /* block */)a3;
- (void)fetchProximityHistoryFromEventIDs:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithQueue:(id)a0 restorationData:(id)a1 accountManager:(id)a2 assetManager:(id)a3 authorizationManager:(id)a4 contactsManager:(id)a5 defaultsManager:(id)a6 deviceLocationPredictor:(id)a7 diagnostics:(id)a8 eventAgentManager:(id)a9 eventModelProvider:(id)a10 fingerprintManager:(id)a11 healthKitManager:(id)a12 hintManager:(id)a13 learnedLocationManager:(id)a14 learnedLocationStore:(id)a15 locationManager:(id)a16 locationStore:(id)a17 mapServiceManager:(id)a18 metricManager:(id)a19 motionActivityManager:(id)a20 pDiscoveryProvider:(id)a21 placeInferenceManager:(id)a22 purgeManager:(id)a23 scenarioTriggerManager:(id)a24 timerManager:(id)a25 vehicleLocationProvider:(id)a26 visitManager:(id)a27 wifiManager:(id)a28;
- (void)updateVehicleEventWithIdentifier:(id)a0 location:(id)a1 reply:(id /* block */)a2;
- (void)stopMonitoringVehicleEventsWithReply:(id /* block */)a0;
- (void)updateLocationOfInterestWithIdentifier:(id)a0 type:(long long)a1 customLabel:(id)a2 reply:(id /* block */)a3;
- (void)engageInVehicleEventWithIdentifier:(id)a0 reply:(id /* block */)a1;
- (void)fetchLocationOfInterestAtLocation:(id)a0 reply:(id /* block */)a1;
- (void)_onVisitManagerNotification:(id)a0;
- (void)fetchLocationsOfInterestOfType:(long long)a0 reply:(id /* block */)a1;
- (void)fetchLocationOfInterestWithIdentifier:(id)a0 reply:(id /* block */)a1;
- (void)fetchLookbackWindowStarDateWithLocation:(id)a0 reply:(id /* block */)a1;
- (void)fetchTransitionsBetweenStartDate:(id)a0 endDate:(id)a1 reply:(id /* block */)a2;
- (void)fetchAutomaticVehicleEventDetectionSupportedWithReply:(id /* block */)a0;
- (void)stopLeechingLowConfidenceVisitsWithReply:(id /* block */)a0;
- (void)updateLocationOfInterestWithIdentifier:(id)a0 customLabel:(id)a1 reply:(id /* block */)a2;
- (void)clearRoutineWithReply:(id /* block */)a0;
- (void)fetchCurrentPredictedLocationsOfInterestLookingBack:(double)a0 lookingAhead:(double)a1 reply:(id /* block */)a2;
- (void)clearAllVehicleEventsWithReply:(id /* block */)a0;
- (void)startLeechingVisitsWithReply:(id /* block */)a0;
- (void)fetchRoutineModeFromLocation:(id)a0 reply:(id /* block */)a1;
- (id)init;
- (void)onVisitManagerNotification:(id)a0;
- (void)extendLifetimeOfVisitsWithIdentifiers:(id)a0 reply:(id /* block */)a1;
- (void)fetchPredictedLocationsOfInterestOnDate:(id)a0 reply:(id /* block */)a1;
- (void)fetchPredictedLocationsOfInterestBetweenStartDate:(id)a0 endDate:(id)a1 reply:(id /* block */)a2;
- (void)vehicleEventRegistrar:(id)a0 didReceiveVehicleEvents:(id)a1 error:(id)a2;
- (void)fetchLocationOfInterestForRegion:(id)a0 reply:(id /* block */)a1;
- (void)stopMonitoringScenarioTriggerOfType:(unsigned long long)a0 reply:(id /* block */)a1;
- (void)fetchProximityHistoryFromStartDate:(id)a0 endDate:(id)a1 completionHandler:(id /* block */)a2;
- (void)onAuthorizationNotification:(id)a0;
- (void)fetchStoredLocationsWithContext:(id)a0 reply:(id /* block */)a1;
- (void)stopMonitoringVisitsWithReply:(id /* block */)a0;
- (void)fetchMonitoredScenarioTriggerTypesWithReply:(id /* block */)a0;
- (void)fetchAllLocationsOfInterestForSettingsWithReply:(id /* block */)a0;
- (void).cxx_destruct;
- (void)fetchNextPredictedLocationsOfInterestFromLocation:(id)a0 startDate:(id)a1 timeInterval:(double)a2 reply:(id /* block */)a3;
- (void)restore;
- (void)updateVehicleEventWithIdentifier:(id)a0 geoMapItem:(id)a1 reply:(id /* block */)a2;
- (void)removeLocationOfInterestWithIdentifier:(id)a0 reply:(id /* block */)a1;
- (void)fetchPathToDiagnosticFilesWithOptions:(id)a0 reply:(id /* block */)a1;
- (void)_startMonitoringVehicleEvents;
- (void)scenarioTriggerRegistrar:(id)a0 didReceiveScenarioTriggers:(id)a1 error:(id)a2;

@end
