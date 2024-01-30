@class PHFetchResult, PHFetchOptions, NSArray, CLSCurationContext, PHAssetCollection;

@interface CLSInvestigationPhotoKitFeeder : CLSInvestigationFeeder {
    unsigned long long _assetPrefetchOptions;
    PHFetchResult *_fetchResult;
    NSArray *_allItems;
    unsigned long long _numberOfAllPeople;
    CLSCurationContext *_curationContext;
}

@property (readonly, nonatomic) PHAssetCollection *assetCollection;
@property (readonly, nonatomic) PHFetchResult *assetFetchResult;
@property (readonly, nonatomic) BOOL hasPeople;
@property (readonly, nonatomic) BOOL hasFavoritedAssets;
@property (readonly, nonatomic) BOOL hasBestScoringAssets;
@property (readonly, nonatomic) BOOL hasNonJunkAssets;
@property (readonly, nonatomic) unsigned long long numberOfShinyGemItems;
@property (readonly, nonatomic) unsigned long long numberOfRegularGemItems;
@property (readonly, nonatomic) double behavioralScore;
@property (readonly, nonatomic) unsigned long long numberOfAllPeople;
@property (readonly, copy, nonatomic) PHFetchOptions *assetFetchOptions;

+ (id)feederForAssetCollection:(id)a0 options:(id)a1 feederPrefetchOptions:(id)a2 curationContext:(id)a3;
+ (id)feederForAssetCollection:(id)a0 options:(id)a1 feederPrefetchOptions:(id)a2;

- (id)localStartDate;
- (id)allItems;
- (void)enumerateItemsUsingBlock:(id /* block */)a0;
- (unsigned long long)numberOfItems;
- (id)localEndDate;
- (id)itemAtIndex:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)approximateLocation;
- (id)universalStartDate;
- (id)universalEndDate;
- (id)initWithAssetFetchResult:(id)a0;
- (id)localStartDateComponents;
- (id)localEndDateComponents;
- (void)enumerateItemsWithOptions:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (id)initWithAssetCollection:(id)a0 assetFetchOptions:(id)a1 feederPrefetchOptions:(id)a2 curationContext:(id)a3;
- (BOOL)_shouldPrefetchCurationInformation;

@end
