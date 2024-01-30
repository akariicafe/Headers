@class PFStoryAutoEditConfiguration, NSArray, NSObject, PFStoryClusteringProperties, NSError, PXStoryAutoEditConcreteMomentsStatistics;
@protocol PXStoryAutoEditMomentsStatistics, OS_os_log, PXDisplayAssetCollection, PXDisplayAssetFetchResult;

@interface PXStoryAutoEditMomentsProvider : NSObject {
    NSArray *_moments;
    PXStoryAutoEditConcreteMomentsStatistics *_statistics;
    NSObject<OS_os_log> *_log;
}

@property (retain, nonatomic) PFStoryAutoEditConfiguration *configuration;
@property (retain, nonatomic) id<PXDisplayAssetCollection> assetCollection;
@property (retain, nonatomic) id<PXDisplayAssetFetchResult> displayAssets;
@property (readonly, nonatomic) NSArray *moments;
@property (retain, nonatomic) PFStoryClusteringProperties *clusteringProperties;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) id<PXStoryAutoEditMomentsStatistics> statistics;
@property (readonly, nonatomic) NSError *error;

- (void).cxx_destruct;
- (void)_computeClustering;
- (id)_diagnosticSwiftCodeForMomentsUnitTest;
- (id)_faceprintDatasByAssetUUIDWithAssets:(id)a0;
- (id)_faceprintsByAssetUUIDWithAssets:(id)a0;
- (id)_faceprintsByAssetUUIDWithAssets:(id)a0 faceprintDatas:(id)a1;
- (id)_locationsByAssetUUIDWithAssets:(id)a0;
- (void)enumerateMomentsUsingBlock:(id /* block */)a0;
- (id)initWithConfiguration:(id)a0 assetCollection:(id)a1 displayAssets:(id)a2;
- (id)momentForDisplayAssetIndex:(unsigned long long)a0;

@end
