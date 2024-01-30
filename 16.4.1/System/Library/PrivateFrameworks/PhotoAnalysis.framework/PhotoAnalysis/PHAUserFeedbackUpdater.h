@class NSObject, PHPhotoLibrary, PGManager, PHUserFeedbackCalculator;
@protocol OS_os_log;

@interface PHAUserFeedbackUpdater : NSObject {
    PGManager *_graphManager;
    PHPhotoLibrary *_photoLibrary;
    PHUserFeedbackCalculator *_userFeedbackCalculator;
    NSObject<OS_os_log> *_loggingConnection;
}

+ (id)_blockableFeaturesForAssetCollection:(id)a0;
+ (id)_memoriesFetchResultWithObjectIDs:(id)a0 existingMemoriesFetchResult:(id)a1;
+ (id)_userFeedbackCalculatorWithPhotoLibrary:(id)a0;

- (id)initWithGraphManager:(id)a0;
- (void).cxx_destruct;
- (BOOL)_deleteWallpaperTopSuggestionsOfPersonsForLocalIdentifiers:(id)a0;
- (BOOL)_demoteFeaturedMemories;
- (void)_demoteNotFeaturedMemories;
- (BOOL)_neverFeatureMemories:(id)a0 error:(id *)a1;
- (id)_notRecommendedMemoriesFromMemories:(id)a0;
- (id)_personUUIDsByAssetUUIDFromAssets:(id)a0;
- (void)_processWallpaperSuggestionsWithNegativeFeedbackPersonUUIDs:(id)a0;
- (void)_reloadWallpaperSuggestionsWithRejectedPersonsForLocalIdentifiers:(id)a0 forceReload:(BOOL)a1;
- (BOOL)_retireAndUnfeatureSuggestions:(id)a0 didUnfeatureSuggestions:(BOOL *)a1;
- (id)_suggestionsToRetire;
- (double)_userFeedbackScoreForAssetCollection:(id)a0 assetsFetchResult:(id)a1 keyAsset:(id)a2 personUUIDsByAssetUUID:(id)a3;
- (BOOL)updateFeatureContentWithError:(id *)a0;

@end
