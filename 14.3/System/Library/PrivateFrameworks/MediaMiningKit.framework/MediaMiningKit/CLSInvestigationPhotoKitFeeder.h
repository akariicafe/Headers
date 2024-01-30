@class PHFetchResult, PHFetchOptions, NSArray, PHAssetCollection;

@interface CLSInvestigationPhotoKitFeeder : CLSInvestigationFeeder {
    unsigned long long _assetPrefetchOptions;
    PHFetchResult *_fetchResult;
    NSArray *_allItems;
    unsigned long long _numberOfAllPeople;
}

@property (readonly, nonatomic) PHAssetCollection *assetCollection;
@property (readonly, nonatomic) BOOL hasPeople;
@property (readonly, nonatomic) BOOL hasFavoritedAssets;
@property (readonly, nonatomic) BOOL hasBestScoringAssets;
@property (readonly, nonatomic) BOOL hasNonJunkAssets;
@property (readonly, nonatomic) unsigned long long numberOfShinyGemItems;
@property (readonly, nonatomic) unsigned long long numberOfRegularGemItems;
@property (readonly, nonatomic) double behavioralScore;
@property (readonly, nonatomic) unsigned long long numberOfAllPeople;
@property (readonly, copy, nonatomic) PHFetchOptions *assetFetchOptions;

+ (id)feederForAssetCollection:(id)a0 options:(id)a1 feederPrefetchOptions:(id)a2;

- (id)universalEndDate;
- (id)universalStartDate;
- (id)allItems;
- (void)enumerateItemsUsingBlock:(id /* block */)a0;
- (unsigned long long)numberOfItems;
- (void)enumerateItemsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)_shouldPrefetchCurationInformation;
- (id)localStartDateComponents;
- (id)itemAtIndex:(unsigned long long)a0;
- (id)initWithAssetFetchResult:(id)a0;
- (id)localEndDate;
- (id)initWithAssetCollection:(id)a0 assetFetchOptions:(id)a1 feederPrefetchOptions:(id)a2;
- (id)localEndDateComponents;
- (id)approximateLocation;
- (id)localStartDate;

@end
