@class NSMutableDictionary, NSArray, NSDictionary, PHPhotoLibrary, NSMutableArray;

@interface PXTimelineDataSource : NSObject

@property (readonly, weak, nonatomic) PHPhotoLibrary *photoLibrary;
@property (nonatomic) struct CGSize { double width; double height; } widgetSize;
@property (retain, nonatomic) NSMutableArray *memoryCandidates;
@property (retain, nonatomic) NSMutableArray *featuredPhotoCandidates;
@property (retain, nonatomic) NSMutableArray *filteredContent;
@property (retain, nonatomic) NSMutableDictionary *keyAssetByFilteredContentLocalIdentifier;
@property (retain, nonatomic) NSMutableArray *cropFilteredContent;
@property (retain, nonatomic) NSMutableDictionary *keyAssetByCropFilteredContentLocalIdentifier;
@property (retain, nonatomic) NSMutableDictionary *suggestedCropByCropFilteredContentLocalIdentifier;
@property (readonly, nonatomic) NSArray *memories;
@property (readonly, nonatomic) NSDictionary *keyAssetByMemoryLocalIdentifier;
@property (readonly, nonatomic) NSArray *featuredPhotos;
@property (readonly, nonatomic) NSDictionary *keyAssetByFeaturedPhotoLocalIdentifier;
@property (readonly, nonatomic) NSDictionary *suggestedCropByFeaturedPhotoLocalIdentifier;

+ (BOOL)_momentIsLocationTypeAtWork:(id)a0;

- (id)initWithPhotoLibrary:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0 forWidgetSize:(struct CGSize { double x0; double x1; })a1;
- (void)_initializeFeaturedCandidatesWithMemoryResult:(id)a0 suggestionResult:(id)a1;
- (id)_defaultSortDescriptors;
- (id)_fetchMemoriesWithFeaturedState:(unsigned long long)a0;
- (id)_fetchSuggestionsWithFeaturedState:(unsigned short)a0;
- (id)_fetchFallbackMemoriesAndSetFeatured;
- (id)_fetchFallbackSuggestionsAndSetFeatured;
- (id)_keyAssetFetchOptions;
- (id)_gatedKeyAssetByMemoryLocalIdentifierWithMemories:(id)a0;
- (id)_gatedKeyAssetBySuggestionLocalIdentifierWithSuggestions:(id)a0;
- (id)_fetchMomentByAssetUUIDForAssets:(id)a0;
- (id)_gatedCropSpecBySuggestionLocalIdentiferFromSuggestions:(id)a0;

@end
