@class NSString, NSArray;

@interface PGGraphAssetRevGeocodeEnrichmentProcessor : NSObject <PGGraphDataModelEnrichmentProcessor>

@property (class, readonly, nonatomic) BOOL supportsBackgroundJob;
@property (class, readonly, nonatomic) double backgroundJobTimeout;
@property (class, readonly, nonatomic) NSString *backgroundJobName;

@property (retain, nonatomic) NSArray *homeLocations;
@property (readonly, nonatomic) double sumNumberOfAssetClustersPerMoment;
@property (readonly, nonatomic) double sumSquareNumberOfAssetClustersPerMoment;
@property (readonly, nonatomic) double sumNumberOfAssetsPerCluster;
@property (readonly, nonatomic) double sumSquareNumberOfAssetsPerCluster;
@property (readonly, nonatomic) double numberOfAssetClustersWithin10mOfCenter;
@property (readonly, nonatomic) double numberOfAssetClustersWithin20mOfCenter;
@property (readonly, nonatomic) double numberOfAssetClustersWithin50mOfCenter;
@property (readonly, nonatomic) double numberOfAssetClustersWithin100mOfCenter;
@property (readonly, nonatomic) double numberOfAssetClusters100mPlusFromCenter;
@property (readonly, nonatomic) unsigned long long numberOfMomentsRevGeocoded;
@property (readonly, nonatomic) unsigned long long numberOfAssetClustersRevGeocoded;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_homeLocationsWithManager:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (BOOL)_allowReverseGeocodingWithUpdateType:(long long)a0;
- (id)_clusterAssets:(id)a0 assetsWithInvalidLocationInMoment:(id *)a1;
- (id)_clusterAssetsInMoment:(id)a0 assetsWithInvalidLocationInMoment:(id *)a1 withPhotoLibrary:(id)a2;
- (id)_momentsRequiringRevGeocodingWithIdentifiers:(id)a0 inPhotoLibrary:(id)a1 defaultToAllAssets:(BOOL)a2 manager:(id)a3;
- (BOOL)_populateCacheWithRegions:(id)a0 manager:(id)a1 withProgressBlock:(id /* block */)a2;
- (void)_processMetricsOfAssetClustersInMoment:(id)a0;
- (BOOL)_regionIsHome:(id)a0;
- (id)_revGeoLocationDataForRegion:(id)a0 manager:(id)a1;
- (BOOL)_revGeocodeAssetClusters:(id)a0 manager:(id)a1 progressBlock:(id /* block */)a2;
- (BOOL)_setRevGeoLocationData:(id)a0 onAssets:(id)a1 withPhotoLibrary:(id)a2;
- (void)_updateGeoInfoForAssetClusters:(id)a0 manager:(id)a1 progressBlock:(id /* block */)a2;
- (void)enrichDataModelWithManager:(id)a0 curationContext:(id)a1 graphUpdateInventory:(id)a2 progressBlock:(id /* block */)a3;
- (void)invalidateReverseLocationDataForRevGeoProviderChangeUsingManager:(id)a0 progressBlock:(id /* block */)a1;
- (BOOL)revGeoProviderDidChangeForGraphApplicationDataURL:(id)a0;
- (BOOL)revGeocodeAssets:(id)a0 manager:(id)a1 progressBlock:(id /* block */)a2;
- (void)sendMetricsForGeocodeProcesssor:(id)a0 toAnalytics:(id)a1 progressBlock:(id /* block */)a2;
- (void)setCurrentGeoProviderInGraphApplicationDataURL:(id)a0;

@end
