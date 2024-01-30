@class NSArray, PHFetchResult, NSDictionary;

@interface PXPhotosDataSourceSectionCache : NSObject

@property (readonly, nonatomic) PHFetchResult *collectionListFetchResult;
@property (readonly, nonatomic) NSArray *assetCollections;
@property (readonly, nonatomic) NSDictionary *assetCollectionToSection;
@property (readonly, nonatomic) long long estimatedPhotosCount;
@property (readonly, nonatomic) long long estimatedVideosCount;
@property (readonly, nonatomic) long long estimatedOtherCount;
@property (readonly, nonatomic) long long numberOfEnrichmentStateNotEnrichedAssetCollections;
@property (readonly, nonatomic) long long numberOfEnrichmentStateAssetMetadataOnlyAssetCollections;
@property (readonly, nonatomic) long long numberOfEnrichmentStateAssetMetadataAndScoreAssetCollections;
@property (readonly, nonatomic) long long numberOfEnrichmentStateAssetMetadataAndScenesProcessedAssetCollections;
@property (readonly, nonatomic) long long numberOfEnrichmentStateCompleteAssetCollections;
@property (readonly, nonatomic) long long estimatedAssetCountWithEnrichmentStateNotEnriched;
@property (readonly, nonatomic) long long estimatedAssetCountWithEnrichmentStateAssetMetadataOnly;
@property (readonly, nonatomic) long long estimatedAssetCountWithEnrichmentStateAssetMetadataAndScore;
@property (readonly, nonatomic) long long estimatedAssetCountWithEnrichmentStateAssetMetadataAndScenesProcessed;
@property (readonly, nonatomic) long long estimatedAssetCountWithEnrichmentStateComplete;

- (void).cxx_destruct;
- (id)initWithCollectionListFetchResult:(id)a0;

@end
