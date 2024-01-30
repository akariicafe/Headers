@class PGSuggestionOptions, NSIndexSet, NSString, NSDictionary, NSArray, NSEnumerator;

@interface PGOutstanderSuggester : PGAbstractSuggester <PGCoordinatableSuggester> {
    PGSuggestionOptions *_options;
    NSDictionary *_assetUUIDsByScore;
    NSArray *_sortedScores;
    long long _currentScoreIndex;
    NSEnumerator *_currentSuggestedAssetEnumerator;
}

@property (class, readonly) NSIndexSet *suggestionTypes;
@property (class, readonly) NSIndexSet *suggestionSubtypes;

@property (nonatomic) double topTierAestheticScore;
@property (nonatomic) BOOL lastSuggestionWasColliding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)reset;
- (id)nextSuggestedAssetWithProgress:(id /* block */)a0;
- (unsigned long long)scoreWithAsset:(id)a0;
- (id)assetInternalPredicate:(id)a0 andEndDate:(id)a1 matchingAssetUUID:(id)a2;
- (BOOL)canGenerateSuggestionWithAsset:(id)a0 onDate:(id)a1;
- (void)computeNiceAssetsBetweenStartDate:(id)a0 andEndDate:(id)a1 withProgress:(id /* block */)a2;
- (id)nextSuggestedAssetEnumeratorWithProgress:(id /* block */)a0;
- (id)nextSuggestionWithProgress:(id /* block */)a0;
- (id)reasonsForSuggestion:(id)a0;
- (void)startSuggestingWithOptions:(id)a0;
- (id)suggestionsWithOptions:(id)a0 progress:(id /* block */)a1;

@end
