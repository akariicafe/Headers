@class RTNextPredictedLocationsOfInterestCache, RTMapServiceManager, NSObject, RTDefaultsManager, NSMutableArray, RTPlatform, RTMetricManager, NSSet, NSString, RTLearnedLocationManager, NSArray, RTLocationManager, RTDistanceCalculator;
@protocol OS_dispatch_source;

@interface RTDeviceLocationPredictor : RTService <RTPurgable>

@property (retain, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (retain, nonatomic) RTLearnedLocationManager *learnedLocationManager;
@property (retain, nonatomic) RTLocationManager *locationManager;
@property (retain, nonatomic) RTMapServiceManager *mapServiceManager;
@property (retain, nonatomic) RTMetricManager *metricManager;
@property (retain, nonatomic) RTPlatform *platform;
@property (retain, nonatomic) RTNextPredictedLocationsOfInterestCache *nextPredictedLocationsOfInterestCache;
@property (nonatomic) BOOL encryptedDataAvailabilityNotificationNeeded;
@property (nonatomic) BOOL pendingNextPredictedLocationsOfInterestRequest;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *nextPredictedLocationsOfInterestPollLocationTimer;
@property (retain, nonatomic) NSArray *nextPredictedLocationsOfInterest;
@property (nonatomic) double nextPredictedLocationsOfInterestProcessInterval;
@property (nonatomic) double nextPredictedLocationsOfInterestPollLocationInterval;
@property (retain, nonatomic) NSMutableArray *evalPredictedLocationsOfInterest;
@property (retain, nonatomic) NSMutableArray *evalPredictedExitDates;
@property (retain, nonatomic) NSSet *providers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchPredictedLocationsOfInterestOnDate:(id)a0 withHandler:(id /* block */)a1;
- (void)fetchPredictedLocationsOfInterestBetweenStartDate:(id)a0 endDate:(id)a1 withHandler:(id /* block */)a2;
- (void)_clear;
- (void)performPurgeOfType:(long long)a0 referenceDate:(id)a1 completion:(id /* block */)a2;
- (void)_onLearnedLocationManagerNotification:(id)a0;
- (void)_fetchPredictedLocationsOfInterestBetweenStartDate:(id)a0 endDate:(id)a1 withHandler:(id /* block */)a2;
- (void)purgeWithReferenceDate:(id)a0;
- (void)fetchNextPredictedLocationsOfInterestFromLocation:(id)a0 startDate:(id)a1 timeInterval:(double)a2 handler:(id /* block */)a3;
- (void)_unregisterForNotifications;
- (void)clear;
- (void)onLearnedLocationManagerNotification:(id)a0;
- (id)_mergedLocationOfInterest:(id)a0 otherLocationOfInterest:(id)a1;
- (void)_registerForNotifications;
- (void)_setup;
- (void)fetchPredictedExitDatesFromLocation:(id)a0 onDate:(id)a1 withHandler:(id /* block */)a2;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (void)_purgeWithReferenceDate:(id)a0;
- (id)_sortPredictedLocationsOfInterest:(id)a0;
- (id)_sortAndDedupePredictedLocationsOfInterest:(id)a0;
- (void)_updateEvalMode;
- (id)_dedupePredictedLocationsOfInterest:(id)a0;
- (void).cxx_destruct;
- (void)_setupEvalMode;
- (id)init;
- (void)_fetchNextPredictedLocationsOfInterestFromLocation:(id)a0 startDate:(id)a1 timeInterval:(double)a2 handler:(id /* block */)a3;
- (id)_mergePredictedLocationsOfInterest:(id)a0;
- (id)initWithQueue:(id)a0 defaultsManager:(id)a1 distanceCalculator:(id)a2 learnedLocationManager:(id)a3 locationManager:(id)a4 mapServiceManager:(id)a5 metricManager:(id)a6 platfrom:(id)a7 providers:(id)a8;
- (void)_fetchPredictedExitDatesFromLocation:(id)a0 onDate:(id)a1 withHandler:(id /* block */)a2;

@end
