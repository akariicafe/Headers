@interface PGRevGeoMetricEvent : PGAbstractMetricEvent

@property (readonly, nonatomic) double numberOfAssetClustersPerMomentMean;
@property (readonly, nonatomic) double numberOfAssetClustersPerMomentStdDev;
@property (readonly, nonatomic) double numberOfAssetsPerClusterMean;
@property (readonly, nonatomic) double numberOfAssetsPerClusterStdDev;
@property (readonly, nonatomic) double ratioAssetClustersWithin10mOfCenter;
@property (readonly, nonatomic) double ratioAssetClustersWithin20mOfCenter;
@property (readonly, nonatomic) double ratioAssetClustersWithin50mOfCenter;
@property (readonly, nonatomic) double ratioAssetClustersWithin100mOfCenter;
@property (readonly, nonatomic) double ratioAssetClusters100mPlusFromCenter;

- (id)payload;
- (id)identifier;
- (id)initWithNumberOfAssetClustersPerMomentMean:(double)a0 numberOfAssetClustersPerMomentStdDev:(double)a1 numberOfAssetsPerClusterMean:(double)a2 numberOfAssetsPerClusterStdDev:(double)a3 ratioAssetClustersWithin10mOfCenter:(double)a4 ratioAssetClustersWithin20mOfCenter:(double)a5 ratioAssetClustersWithin50mOfCenter:(double)a6 ratioAssetClustersWithin100mOfCenter:(double)a7 ratioAssetClusters100mPlusFromCenter:(double)a8;

@end
