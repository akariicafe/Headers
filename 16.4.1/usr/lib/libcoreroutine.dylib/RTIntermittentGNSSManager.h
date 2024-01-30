@class RTIntermittentGNSSManagerMetrics, NSDate, RTMotionActivityManager, RTVehicleLocationProvider, RTDefaultsManager, NSMutableArray, RTPlatform, RTTimerManager, RTWiFiManager, RTLearnedLocationManager, RTLocationManager, RTTimer, RTDistanceCalculator;

@interface RTIntermittentGNSSManager : RTService

@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTLearnedLocationManager *learnedLocationManager;
@property (retain, nonatomic) RTLocationManager *locationManager;
@property (retain, nonatomic) RTIntermittentGNSSManagerMetrics *metrics;
@property (retain, nonatomic) RTMotionActivityManager *motionActivityManager;
@property (retain, nonatomic) RTPlatform *platform;
@property (retain, nonatomic) RTTimerManager *timerManager;
@property (retain, nonatomic) RTVehicleLocationProvider *vehicleLocationProvider;
@property (retain, nonatomic) RTWiFiManager *wifiManager;
@property (retain, nonatomic) RTTimer *conditionCheckTimer;
@property (retain, nonatomic) RTTimer *wifiLocationStarvedTimer;
@property (retain, nonatomic) RTTimer *wifiScanTimer;
@property (retain, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (retain, nonatomic) NSDate *lastRegisteredForIntermittentGNSSVariableFlipDate;
@property (retain, nonatomic) NSDate *lastLOINearbyCheckDate;
@property (retain, nonatomic) NSDate *lastSettledStateChangeDate;
@property (retain, nonatomic) NSDate *lastWifiLocationDate;
@property (nonatomic) BOOL awayFromFrequentlyVisitedLOI;
@property (nonatomic) BOOL motionActivityTypeSatisfied;
@property (nonatomic) BOOL registeredForIntermittentGNSS;
@property (nonatomic) BOOL settledStateLOIVerified;
@property (nonatomic) BOOL signalEnvironmentAtRisk;
@property (nonatomic) BOOL unsettled;
@property (nonatomic) BOOL wifiLocationStarved;
@property (nonatomic) BOOL wifiScanResultsProcessed;
@property (nonatomic) double totalDailyDuration;
@property (nonatomic) int currentSignalEnvironment;
@property (retain, nonatomic) NSMutableArray *accessPoints;
@property (nonatomic) unsigned long long currentDominantMotionType;
@property (nonatomic) unsigned long long intermittentGNSSOverrideState;

+ (id)overrideStateToString:(unsigned long long)a0;
+ (BOOL)validLocation:(id)a0;

- (void)onDailyMetricsNotification:(id)a0;
- (BOOL)platformSupported;
- (void)onMotionActivityManagerNotification:(id)a0;
- (void)onLeechedLocationNotification:(id)a0;
- (void)onNoOpLocationNotification:(id)a0;
- (void)onWifiScanResultsNotification:(id)a0;
- (void)onVehicleEventNotification:(id)a0;
- (id)_initializeWifiLocationStarvedTimer;
- (void)updateIntermittentGNSSRegistrationOverrideState:(unsigned long long)a0 handler:(id /* block */)a1;
- (id)initWithDefaultsManager:(id)a0 learnedLocationManager:(id)a1 locationManager:(id)a2 motionActivityManager:(id)a3 platform:(id)a4 timerManager:(id)a5 vehicleLocationProvider:(id)a6 wifiManager:(id)a7;
- (void)_onLocationStarvedTimerExpiry;
- (BOOL)_motionActivityConditionsSatisifed:(id)a0;
- (void)_updateLocationNearLOI:(id)a0;
- (id)_locationsOfInterestNearLocation:(id)a0 error:(id *)a1;
- (void)fetchIntermittentGNSSRegistrationStateWithHandler:(id /* block */)a0;
- (void)_processWifiScanResults;
- (BOOL)_wifiDenseConditionsMet;
- (void)_setup;
- (BOOL)_frequentlyVisitedLocationOfInterest:(id)a0;
- (void)_unregisterForRhythmicNonWakingLocation;
- (void)_updateSignalEnvironmentRiskStatus:(int)a0;
- (void)_considerRegisteringForIntermittentGNSS;
- (void)_updateWifiLocationStarvedTimer;
- (void)_updateWifiLocationAvailabilityStatus:(id)a0;
- (void)_registerForRhythmicNonWakingLocation;
- (id)initWithDefaultsManager:(id)a0 learnedLocationManager:(id)a1 locationManager:(id)a2 motionActivityManager:(id)a3 platform:(id)a4 vehicleLocationProvider:(id)a5 wifiManager:(id)a6;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)_dutyCyclingConditionMet;
- (void)_checkWifiDenseArea;

@end
