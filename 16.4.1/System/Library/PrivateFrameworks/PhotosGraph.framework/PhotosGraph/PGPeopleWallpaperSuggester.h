@class PGPeopleWallpaperSuggesterFilteringContext, PGSinglePersonWallpaperAssetSuggesterDistancingContext, NSDictionary, PGWallpaperSuggestionAssetGater, PGSinglePersonWallpaperAssetSuggesterScoringContext;

@interface PGPeopleWallpaperSuggester : PGAbstractSuggester {
    NSDictionary *_suggesterByPersonLocalIdentifier;
    PGPeopleWallpaperSuggesterFilteringContext *_filteringContext;
    PGSinglePersonWallpaperAssetSuggesterScoringContext *_scoringContext;
    PGSinglePersonWallpaperAssetSuggesterDistancingContext *_distancingContext;
    PGWallpaperSuggestionAssetGater *_assetGater;
}

+ (id)suggestionTypes;
+ (BOOL)filtersForTopPeople;
+ (BOOL)passesFilteringWithAsset:(id)a0 curationContext:(id)a1 reason:(id *)a2;
+ (unsigned short)peopleWallpaperSuggestionSubtype;
+ (id)suggestionSubtypes;

- (id)initWithSession:(id)a0;
- (void).cxx_destruct;
- (void)_buildSuggestersWithProgress:(id /* block */)a0;
- (id)personLocalIdentifiersByOriginalPersonLocalIdentifierWithProgress:(id /* block */)a0;
- (id)suggestionsWithOptions:(id)a0 progress:(id /* block */)a1;

@end
