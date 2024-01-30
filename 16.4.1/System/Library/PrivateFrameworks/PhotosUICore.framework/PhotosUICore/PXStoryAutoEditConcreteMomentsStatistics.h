@class NSString, PFStoryClusteringProperties;
@protocol PXStoryMemoryMomentClusteringDistanceCalculator;

@interface PXStoryAutoEditConcreteMomentsStatistics : NSObject <PXStoryAutoEditMomentsStatistics>

@property (nonatomic) unsigned long long minimumAssetCount;
@property (nonatomic) unsigned long long maximumAssetCount;
@property (nonatomic) double averageAssetCount;
@property (copy, nonatomic) NSString *memoryCategoryName;
@property (nonatomic) double clusteringDuration;
@property (retain, nonatomic) PFStoryClusteringProperties *clusteringProperties;
@property (retain, nonatomic) id<PXStoryMemoryMomentClusteringDistanceCalculator> clusteringDistanceCalculator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
