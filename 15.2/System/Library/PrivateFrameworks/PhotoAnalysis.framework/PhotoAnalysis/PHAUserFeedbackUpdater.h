@interface PHAUserFeedbackUpdater : NSObject

+ (BOOL)updateFeatureContentWithPhotoLibrary:(id)a0 error:(id *)a1;
+ (id)_suggestionsToRetireWithUserFeedbackCalculator:(id)a0 photoLibrary:(id)a1 loggingConnection:(id)a2;
+ (BOOL)_retireAndUnfeatureSuggestions:(id)a0 photoLibrary:(id)a1 loggingConnection:(id)a2;
+ (BOOL)_hasFeaturedSuggestions:(id)a0;
+ (BOOL)_demoteFeaturedMemoriesWithUserFeedbackCalculator:(id)a0 photoLibrary:(id)a1 loggingConnection:(id)a2;
+ (void)_demoteNotFeaturedMemoriesWithUserFeedbackCalculator:(id)a0 photoLibrary:(id)a1 loggingConnection:(id)a2;
+ (id)_notRecommendedMemoriesFromMemories:(id)a0 userFeedbackCalculator:(id)a1 photoLibrary:(id)a2;
+ (BOOL)_neverFeatureMemories:(id)a0 photoLibrary:(id)a1 error:(id *)a2;
+ (id)_personUUIDsByAssetUUIDInAssets:(id)a0 options:(id)a1;
+ (double)_userFeedbackScoreForAssetCollection:(id)a0 assetsFetchResult:(id)a1 keyAsset:(id)a2 personUUIDsByAssetUUID:(id)a3 userFeedbackCalculator:(id)a4;
+ (id)_userFeedbackCalculatorWithPhotoLibrary:(id)a0;
+ (id)_blockableFeaturesForAssetCollection:(id)a0;
+ (id)_memoriesFetchResultWithObjectIDs:(id)a0 existingMemoriesFetchResult:(id)a1;

@end
