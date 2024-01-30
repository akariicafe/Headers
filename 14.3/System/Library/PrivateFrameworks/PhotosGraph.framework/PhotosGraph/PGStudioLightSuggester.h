@class PGSuggestionOptions, NSString, NSArray, NSEnumerator, PLPhotoEditPersistenceManager, NSMutableDictionary, PLPhotoEffect, NSIndexSet;

@interface PGStudioLightSuggester : PGAbstractSuggester <PGCoordinatableSuggester> {
    PGSuggestionOptions *_options;
    NSArray *_suggestedAssets;
    NSEnumerator *_suggestedAssetEnumerator;
    PLPhotoEditPersistenceManager *_photoEditPersistenceManager;
    NSMutableDictionary *_compositionControllerByAssetUUID;
    NSMutableDictionary *_assetMasterSizeByAssetUUID;
    PLPhotoEffect *_studioLightPhotoEffect;
    NSMutableDictionary *_recipeReasonByAssetUUID;
}

@property (class, readonly) NSIndexSet *suggestionTypes;
@property (class, readonly) NSIndexSet *suggestionSubtypes;

@property (nonatomic) BOOL lastSuggestionWasColliding;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)suggestionsWithOptions:(id)a0 progress:(id /* block */)a1;
- (id)reasonsForSuggestion:(id)a0;
- (void)startSuggestingWithOptions:(id)a0;
- (id)nextSuggestionWithProgress:(id /* block */)a0;
- (id)suggestionWithAsset:(id)a0;
- (id)portraitsBetweenStartDate:(id)a0 andEndDate:(id)a1 progress:(id /* block */)a2;
- (id)compositionControllerForAsset:(id)a0 baseVersion:(out long long *)a1;
- (id)suggestedAssetsInAssets:(id)a0 progress:(id /* block */)a1;
- (id)suggestedAssetsInAssets:(id)a0 options:(id)a1 progress:(id /* block */)a2;
- (id)studioLightRecipeWithAsset:(id)a0;

@end
