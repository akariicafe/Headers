@class NSString, RTFingerprintManager, RTPlatform, RTMapItemProviderBluePOIParameters, RTMotionActivityManager, RTLocationManager, RTInferredMapItemDeduper, RTMapServiceManager;

@interface RTMapItemProviderBluePOI : RTMapItemProviderBase <RTMapItemProvider>

@property (readonly, nonatomic) RTInferredMapItemDeduper *inferredMapItemDeduper;
@property (retain, nonatomic) RTFingerprintManager *fingerprintManager;
@property (retain, nonatomic) RTLocationManager *locationManager;
@property (retain, nonatomic) RTMotionActivityManager *motionActivityManager;
@property (retain, nonatomic) RTMapServiceManager *mapServiceManager;
@property (readonly, nonatomic) RTPlatform *platform;
@property (readonly, copy, nonatomic) RTMapItemProviderBluePOIParameters *parameters;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)harvestTypeToPoiTriggerType:(unsigned long long)a0;
+ (id)harvestTypeToString:(unsigned long long)a0;

- (id)_mapItemsWithinDistance:(double)a0 location:(id)a1 startDate:(id)a2 endDate:(id)a3 error:(id *)a4;
- (id)mapItemsWithOptions:(id)a0 error:(id *)a1;
- (id)initWithDefaultsManager:(id)a0 distanceCalculator:(id)a1 fingerprintManager:(id)a2 locationManager:(id)a3 mapServiceManager:(id)a4 motionActivityManager:(id)a5 parameters:(id)a6 platform:(id)a7;
- (id)inferredMapItemsFromPlist:(id)a0 error:(id *)a1;
- (id)fingerprintsBetweenStartDate:(id)a0 endDate:(id)a1 isTimeWindowFallback:(BOOL *)a2 error:(id *)a3;
- (BOOL)skipForOptions:(id)a0 error:(id *)a1;
- (BOOL)chooseBestAoiInferredMapItem:(id *)a0 PoiInferredMapItem:(id *)a1 fromSortedAveragedResults:(id)a2 error:(id *)a3;
- (id)sortedAveragedQueryResults:(id)a0 baseDuration:(double)a1 error:(id *)a2;
- (id)collapseDedupedInferredMapItems:(id)a0 inferredMapItemDeduperState:(id)a1 error:(id *)a2;
- (id)motionActivitesFrom:(id)a0 to:(id)a1 error:(id *)a2;
- (BOOL)sortedQueryResult:(id)a0 correspondsToAoi:(id)a1 poi:(id)a2;
- (BOOL)submitHarvest:(id)a0 error:(id *)a1;
- (id)bestQueryFromAggregatedQueries:(id)a0 error:(id *)a1;
- (id)filterByDistance:(id)a0 location:(id)a1 thresholdForUnknownLabel:(double)a2 error:(id *)a3;
- (id)locationsInDateInterval:(id)a0 error:(id *)a1;
- (id)poiHarvestForFingerprint:(id)a0 mapItem:(id)a1 referenceLocation:(id)a2 endDate:(id)a3 error:(id *)a4;
- (id)sortQueryResults:(id)a0 error:(id *)a1;
- (id)bestQueryFromSortedQueryResults:(id)a0 bestAoiInferredMapItem:(id)a1 bestPoiInferredMapItem:(id)a2 error:(id *)a3;
- (id)dedupeQueryResults:(id)a0 error:(id *)a1;
- (id)initWithDefaultsManager:(id)a0 distanceCalculator:(id)a1 fingerprintManager:(id)a2 locationManager:(id)a3 mapServiceManager:(id)a4 motionActivityManager:(id)a5 platform:(id)a6;
- (id)_mapItemsWithFidelityPolicy:(unsigned long long)a0 locations:(id)a1 accessPoints:(id)a2 referenceLocation:(id)a3 options:(id)a4 error:(id *)a5;
- (id)bestQueryFromSortedQueryResults:(id)a0 bestInferredMapItem:(id)a1 error:(id *)a2;
- (id)mapItemFromPlistDictionary:(id)a0;
- (id)_filterByConfidence:(id)a0 aoiConfidencePassThroughThreshold:(double)a1 aoiConfidenceConsiderThreshold:(double)a2 poiConfidencePassThroughThreshold:(double)a3 poiConfidenceConsiderThreshold:(double)a4 error:(id *)a5;
- (id)accessPointsForFingerprint:(id)a0 endDate:(id)a1 error:(id *)a2;
- (id)init;
- (id)_determineFingerprintFallbackDateIntervalFromStartDate:(id)a0 endDate:(id)a1;
- (id)locationsForAccessPoints:(id)a0 error:(id *)a1;
- (BOOL)harvestVisits:(id)a0 mapItem:(id)a1 harvestType:(unsigned long long)a2 error:(id *)a3;
- (void).cxx_destruct;
- (id)mapItemsFromLocations:(id)a0 accessPoints:(id)a1 startDate:(id)a2 endDate:(id)a3 options:(id)a4 error:(id *)a5;

@end
