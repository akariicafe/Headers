@class PGSuggestionOptions, NSIndexSet, NSString, NSArray, NSEnumerator, NSDictionary, NSMutableDictionary;

@interface PGLivePhotoVariationSuggester : PGAbstractSuggester <PGCoordinatableSuggester> {
    PGSuggestionOptions *_options;
    NSArray *_suggestedAssets;
    NSEnumerator *_suggestedAssetEnumerator;
    NSDictionary *_variationResults;
    NSMutableDictionary *_recipeReasonByAssetLocalIdentifier;
    BOOL _doLoop;
    BOOL _doLongExposure;
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
- (id)suggestionsWithOptions:(id)a0 progress:(id /* block */)a1;
- (id)reasonsForSuggestion:(id)a0;
- (void)startSuggestingWithOptions:(id)a0;
- (id)nextSuggestionWithProgress:(id /* block */)a0;
- (id)suggestedAssetsInAssets:(id)a0;
- (id)suggestedAssetsInAssets:(id)a0 options:(id)a1;
- (void)_setDoFlagsWithOptions:(id)a0;
- (id)recipeForVariationWithLivePhoto:(id)a0 inResults:(id)a1 suggestionSubtype:(unsigned short *)a2;
- (id)livePhotosBetweenStartDate:(id)a0 andEndDate:(id)a1 progress:(id /* block */)a2;
- (id)suggestionWithAsset:(id)a0;

@end
