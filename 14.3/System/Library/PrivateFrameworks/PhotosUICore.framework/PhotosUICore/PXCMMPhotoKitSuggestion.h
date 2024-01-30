@class NSString, PHFetchResult, PHAssetCollection, PXAssetCollectionActionManager;
@protocol PXUIImageProvider, PXPeopleFetchResult, PXDisplayAsset;

@interface PXCMMPhotoKitSuggestion : NSObject <PXMediaTypeAggregating, PXCMMSuggestion, NSCopying>

@property (readonly, nonatomic) long long aggregateMediaType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) PHAssetCollection *assetCollection;
@property (readonly, nonatomic) PHFetchResult *previewAssetsFetchResult;
@property (readonly, nonatomic) PHFetchResult *peopleSuggestionsFetchResult;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) long long count;
@property (readonly, nonatomic) id<PXDisplayAsset> posterAsset;
@property (readonly, nonatomic) id<PXUIImageProvider> posterMediaProvider;
@property (readonly, nonatomic) id<PXPeopleFetchResult> peopleFetchResult;
@property (readonly, nonatomic) PXAssetCollectionActionManager *assetCollectionActionManager;
@property (readonly, nonatomic) BOOL containsUnverifiedPersons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) long long aggregateMediaType;

+ (id)fastSuggestionWithAssetCollection:(id)a0;
+ (id)sharedCachingImageManager;
+ (id)suggestionWithAssetCollection:(id)a0;
+ (id)_fetchPreviewAssetsForAssetCollection:(id)a0;
+ (id)_fetchPeopleSuggestionsForAssetCollection:(id)a0;

- (void).cxx_destruct;
- (id)initWithAssetCollection:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)decline;
- (id)contextForActivityType:(unsigned long long)a0 sourceType:(unsigned long long)a1;
- (void)markAsActiveIfNeeded;
- (id)diagnosticsItem;
- (id)suggestionWithUpdatedPreviewAssetsFetchResult:(id)a0;
- (id)suggestionWithUpdatedPeopleSuggestionsFetchResult:(id)a0;

@end
