@class RTMotionActivityManager, NSObject, RTDefaultsManager, RTMapsSupportManager, RTMetricManager, NSManagedObjectContext, NSMutableArray, RTFMCScoreBoard, RTKeychainManager, RTPersistenceManager, RTManagedConfiguration, RTLearnedLocationManager, NSString, RTLocationManager, RTVehicleEvent, RTVehicleLocationHistoryController;
@protocol OS_dispatch_source;

@interface RTVehicleLocationProvider : RTService <RTManagedConfigurationObserver, RTPurgable>

@property (retain, nonatomic) NSObject<OS_dispatch_source> *finalizeLocationEstimateTimer;
@property (retain, nonatomic) RTLocationManager *locationManager;
@property (retain, nonatomic) RTMotionActivityManager *motionActivityManager;
@property (retain, nonatomic) RTMapsSupportManager *mapsSupportManager;
@property (retain, nonatomic) RTMetricManager *metricManager;
@property (retain, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (retain, nonatomic) RTPersistenceManager *persistenceManager;
@property (retain, nonatomic) RTVehicleLocationHistoryController *vehicleLocationHistoryController;
@property (retain, nonatomic) RTLearnedLocationManager *learnedLocationManager;
@property (retain, nonatomic) RTManagedConfiguration *managedConfiguration;
@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTKeychainManager *keychainManager;
@property (nonatomic) BOOL monitorVehicleLocation;
@property (nonatomic) BOOL monitorVehicleConnection;
@property (nonatomic) BOOL monitorVehicleExit;
@property (nonatomic) BOOL monitorLocation;
@property (retain, nonatomic) RTVehicleEvent *lastVehicleParkedEvent;
@property (retain, nonatomic) RTVehicleEvent *pendingVehicleParkedEvent;
@property (retain, nonatomic) RTVehicleEvent *vehicleEventPendingPersist;
@property (nonatomic) BOOL vehicleEventPendingDeletion;
@property (nonatomic) BOOL locationsOfInterestAvailable;
@property (retain, nonatomic) NSMutableArray *locationsCache;
@property (retain, nonatomic) NSMutableArray *locationsCacheLeeched;
@property (retain, nonatomic) RTFMCScoreBoard *scoreBoard;
@property (retain, nonatomic) RTFMCScoreBoard *scoreBoardForUnusualLocation;
@property (retain, nonatomic) RTFMCScoreBoard *scoreBoardForUsualLocation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)_vehicleEventAtLocation:(id)a0 notes:(id)a1 handler:(id /* block */)a2;
- (void)performPurgeOfType:(long long)a0 referenceDate:(id)a1 completion:(id /* block */)a2;
- (void)vehicleEventAtLocation:(id)a0 notes:(id)a1 handler:(id /* block */)a2;
- (void)onVehicleConnectedNotification:(id)a0;
- (void)_submitFMCAssistanceInstanceWithIdentifier:(id)a0 uiPlacement:(int)a1 assistanceType:(int)a2 assistanceValue:(int)a3;
- (void)_submitFMCVehicleConnectionEventInstanceWithConnectionStatus:(int)a0 value:(double)a1;
- (void)_recordMetricEngagementEvent:(id)a0;
- (void)onLearnedLocationManagerNotification:(id)a0;
- (id)_getLastVehicleEvents;
- (void)_setup;
- (id)_createMetricFromParkingEvent:(id)a0;
- (void)_postVehicleReplacementBulletinNotificationWithVehicleEvent:(id)a0 replacingEvent:(id)a1;
- (void)onLeechedLocation:(id)a0;
- (void)_submitFMCVehicleConnectionEventInstanceWithConnectionStatus:(int)a0;
- (void)updateVehicleEventWithIdentifier:(id)a0 notes:(id)a1;
- (void)_submitFMCReturnToCarInstanceWithIdentifier:(id)a0 horizontalAccuracy:(int)a1 horizontalDistance:(int)a2;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)engageInVehicleEventWithIdentifier:(id)a0;
- (void)onDailyMetricNotification:(id)a0;
- (void)_submitFMCDailyAssessmentsWithSubmissionHandler:(id /* block */)a0;
- (void)fetchLastVehicleEventsWithHandler:(id /* block */)a0;
- (void)_onVehicleExit;
- (id)_createMetricFromScoreBoard:(id)a0;
- (void)_clearBulletinNotifications;
- (BOOL)_persistVehicleEvent:(id)a0;
- (void)_onFinalizeLocationEstimateTimerExpiry;
- (void)requestLocations;
- (void)_updateNearbyLocationOfInterestOfVehicleEvent:(id)a0 handler:(id /* block */)a1;
- (void)_onManagedObjectContextCreated:(id)a0;
- (void)_submitFMCParkingEventMetric:(id)a0;
- (void)onLocationNotification:(id)a0;
- (void)clearAllVehicleEvents;
- (void)_processPendingVehicleEventAfterLocationFinalization;
- (void)_postBulletinNotificationIfAppropriate;
- (void)onVehicleExitNotification:(id)a0;
- (void)fetchAutomaticVehicleEventDetectionSupportedWithHandler:(id /* block */)a0;
- (void)_recordMetricParkingEvent:(id)a0;
- (void)_submitFMCDailyAssessments;
- (void).cxx_destruct;
- (void)updateVehicleEventWithIdentifier:(id)a0 location:(id)a1;
- (void)_onVehicleConnectedNotification:(id)a0;
- (void)_submitFMCViewedInstanceWithIdentifier:(id)a0 uiPlacement:(int)a1;
- (id)init;
- (void)_updateAuxiliaryDataIfAppropriate;
- (void)_clearAllVehicleEvents;
- (void)_finalizeLocationEstimate;
- (void)_restoreLastVehicleEvent;
- (void)_onVehicleParkedWithDeviceId:(id)a0;
- (void)_onVehicleStartedWithDeviceId:(id)a0;
- (void)_recordMetricAssistanceEvent:(id)a0;
- (void)fetchFMCEnabledWithHandler:(id /* block */)a0;
- (void)updateVehicleEventWithIdentifier:(id)a0 photo:(id)a1;
- (void)restoreLastVehicleEvent;
- (void)_finalizeLastVehicleEventIfAppropriate;
- (BOOL)_persistLastVehicleEvent;
- (BOOL)_sameVehicleWithDeviceId:(id)a0 otherDeviceId:(id)a1;
- (id)initWithLocationManager:(id)a0 motionActivityManager:(id)a1 mapsSupportManager:(id)a2 metricManager:(id)a3 managedObjectContext:(id)a4 persistenceManager:(id)a5 vehicleLocationHistoryController:(id)a6 learnedLocationManager:(id)a7 managedConfiguration:(id)a8 defaultsManager:(id)a9 keychainManager:(id)a10;
- (void)updateVehicleEventWithIdentifier:(id)a0 mapItem:(id)a1;
- (BOOL)_deleteLastVehicleEvent;
- (void)didReceiveEffectiveSettingsChangedNotification;
- (void)_notifyClients;
- (void)_updateUsualLocationOfVehicleEvent:(id)a0;
- (void)persistLastVehicleEvent;
- (void)_onVehicleExitNotification:(id)a0;
- (void)_recordMetricSuppressedEvent;
- (void)_submitFMCCarParkedInstanceWithParkedEvents:(id)a0;
- (void)_onDailyMetricNotification:(id)a0;
- (void)_onLocation:(id)a0;
- (void)_registerScoreBoardSubmission;

@end
