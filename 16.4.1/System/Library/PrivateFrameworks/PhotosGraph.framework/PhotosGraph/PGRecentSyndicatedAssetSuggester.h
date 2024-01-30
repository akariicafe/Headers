@class PGSuggestionOptions, NSIndexSet, NSString, NSArray, NSEnumerator;

@interface PGRecentSyndicatedAssetSuggester : PGAbstractSuggester <PGCoordinatableSuggester> {
    PGSuggestionOptions *_options;
    NSArray *_suggestedAssets;
    NSEnumerator *_suggestedAssetEnumerator;
}

@property (class, readonly) NSIndexSet *suggestionTypes;
@property (class, readonly) NSIndexSet *suggestionSubtypes;

@property (nonatomic) BOOL lastSuggestionWasColliding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)reset;
- (BOOL)canGenerateSuggestionWithAsset:(id)a0 onDate:(id)a1;
- (id)createSuggestionWithAsset:(id)a0;
- (id)eligibleAssetsBetweenStartDate:(id)a0 andEndDate:(id)a1 matchingAssetUUID:(id)a2 progress:(id /* block */)a3;
- (id)nextSuggestionWithProgress:(id /* block */)a0;
- (id)reasonsForSuggestion:(id)a0;
- (void)startSuggestingWithOptions:(id)a0;
- (id)suggestionsWithOptions:(id)a0 progress:(id /* block */)a1;

@end
