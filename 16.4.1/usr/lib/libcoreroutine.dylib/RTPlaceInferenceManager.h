@class RTPlaceInferenceDailyMetrics, NSDictionary, RTVisitStore, NSDate, RTDefaultsManager, NSMutableArray, RTMetricManager, RTMapServiceManager, RTLearnedLocationStore, RTLocationManager, RTDistanceCalculator, RTVisitManager, RTInferredMapItemFuser;

@interface RTPlaceInferenceManager : RTService

@property (readonly, nonatomic) RTDefaultsManager *defaultsManager;
@property (retain, nonatomic) RTDistanceCalculator *distanceCalculator;
@property (readonly, nonatomic) RTInferredMapItemFuser *inferredMapItemFuser;
@property (readonly, nonatomic) RTMetricManager *metricManager;
@property (readonly, nonatomic) RTLearnedLocationStore *learnedLocationStore;
@property (readonly, nonatomic) RTLocationManager *locationManager;
@property (readonly, nonatomic) RTMapServiceManager *mapServiceManager;
@property (retain, nonatomic) RTVisitManager *visitManager;
@property (readonly, nonatomic) RTVisitStore *visitStore;
@property (readonly, nonatomic) NSDictionary *mapItemProviders;
@property (nonatomic) unsigned long long placeInferencesLimit;
@property (readonly, nonatomic) NSMutableArray *cachedLocations;
@property (readonly, nonatomic) unsigned long long cachedLocationIndex;
@property (retain, nonatomic) RTPlaceInferenceDailyMetrics *dailyMetrics;
@property (retain, nonatomic) NSDate *visitEntryTime;
@property (nonatomic) unsigned long long clientMappingIndex;

+ (unsigned long long)learnedPlaceTypeSourceFromUserSpecificPlaceTypeSource:(unsigned long long)a0;
+ (void)sanityCheckMapItemProviders:(id)a0;
+ (unsigned long long)userSpecificPlaceTypeFromLearnedPlaceType:(unsigned long long)a0;
+ (unsigned long long)learnedPlaceTypeFromUserSpecificPlaceType:(unsigned long long)a0;
+ (unsigned long long)userSpecificPlaceTypeSourceFromLearnedPlaceTypeSource:(unsigned long long)a0;

- (void)onDailyMetricsNotification:(id)a0;
- (id)_getFallbackMapItemProviderForOptions:(id)a0;
- (void)_onDailyMetricsNotification:(id)a0;
- (id)_selectMapItemProvidersForOptions:(id)a0 targetProvider:(unsigned long long)a1;
- (id)_loiIdentifierForInferredMapItem:(id)a0;
- (void)_onPointOfInterestVisitNotification:(id)a0;
- (id)_closestCachedLocationForLocation:(id)a0;
- (unsigned long long)_getMappingIndexForClientIdentifier:(id)a0;
- (void)_updateCachedLocationsWithLocation:(id)a0;
- (void)_setup;
- (void)_registerForDailyMetricsNotifications;
- (id)_placeInferencesForOptions:(id)a0 error:(id *)a1;
- (void)fetchPlaceInferencesForOptions:(id)a0 handler:(id /* block */)a1;
- (id)_selectMapItemProvidersForOptions:(id)a0;
- (void)onVisitManagerVisitIncidentNotification:(id)a0;
- (void)_onVisitManagerVisitIncidentNotification:(id)a0;
- (id)createAllMapItemProvidersWithDefaultManager:(id)a0 distanceCalculator:(id)a1 eventManager:(id)a2 fingerprintManager:(id)a3 learnedLocationStore:(id)a4 locationManager:(id)a5 mapServiceManager:(id)a6 mapsSupportManager:(id)a7 motionActivityManager:(id)a8 platform:(id)a9 portraitManager:(id)a10 visitStore:(id)a11;
- (void)_unRegisterForDailyMetricsNotifications;
- (id)_selectBestCandidateAndUpdateReferenceLocation:(id)a0;
- (id)initWithQueue:(id)a0 defaultsManager:(id)a1 distanceCalculator:(id)a2 eventManager:(id)a3 fingerprintManager:(id)a4 inferredMapItemFuser:(id)a5 learnedLocationStore:(id)a6 locationManager:(id)a7 mapServiceManager:(id)a8 mapsSupportManager:(id)a9 metricManager:(id)a10 motionActivityManager:(id)a11 platform:(id)a12 portraitManager:(id)a13 visitStore:(id)a14;
- (id)_placeInferenceFromInferredMapItem:(id)a0 referenceLocation:(id)a1 error:(id *)a2;
- (id)init;
- (id)_selectLastLocationFromLocations:(id)a0 maxHorizontalUncertainty:(double)a1;
- (void)onPointOfInterestVisitNotification:(id)a0;
- (void)_addMapItemProviderFromArray:(id)a0 toSet:(id)a1;
- (void)_shutdownWithHandler:(id /* block */)a0;
- (BOOL)_learnedPlaceTypeForInferredMapItem:(id)a0 placeType:(unsigned long long *)a1 placeTypeSource:(unsigned long long *)a2 error:(id *)a3;
- (void).cxx_destruct;
- (BOOL)_inferUserSpecificPlaceTypeForInferredMapItem:(id)a0 userSpecificPlaceType:(unsigned long long *)a1 userSpecificPlaceTypeSource:(unsigned long long *)a2 error:(id *)a3;
- (void)sendPlaceInferenceMetrics:(id)a0 inferredMapItems:(id)a1 fusedMapItems:(id)a2 fallbackInferredMapItems:(id)a3 finalPlaceInferences:(id)a4 referenceLocation:(id)a5;
- (id)_estimatedLocationFromSortedLocations:(id)a0;

@end
