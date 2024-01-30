@class PLDuplicateMergeCrashRecovery, PLPhotoLibrary, NSArray, PLManagedAsset, PLDuplicateAsset;

@interface PLDuplicateMerge : NSObject {
    PLPhotoLibrary *_library;
    NSArray *_sourceAssets;
    PLDuplicateMergeCrashRecovery *_mergeCrashRecovery;
}

@property (readonly) PLManagedAsset *asset;
@property (retain) PLDuplicateAsset *targetAsset;

+ (BOOL)mergeAssets:(id)a0 targetAssetOID:(id)a1 photolibrary:(id)a2 error:(id *)a3;

- (void).cxx_destruct;
- (BOOL)mergeWithError:(id *)a0;
- (BOOL)_isRecentlyModifiedSourceAsset:(id)a0;
- (BOOL)_isValidForDateCreatedOverwriteWithSource:(id)a0;
- (BOOL)_isValidForLocationOverwriteWithSource:(id)a0;
- (BOOL)_isValidForOverwriteWithSourceProperty:(id)a0 targetProperty:(id)a1;
- (BOOL)_isValidForTimezoneOverwriteWithSource:(id)a0;
- (BOOL)_isValidForTitleOverwriteWithSource:(id)a0;
- (BOOL)_mergeAdjustmentsFromSource:(id)a0 error:(id *)a1;
- (void)_mergeAlbumRelationshipsFromSource:(id)a0;
- (void)_mergeCaptionFromSource:(id)a0;
- (void)_mergeDateFromSource:(id)a0;
- (void)_mergeFaceRelationshipsFromSource:(id)a0;
- (void)_mergeFavoriteFromSource:(id)a0;
- (void)_mergeKeywordsFromSource:(id)a0;
- (void)_mergeLocationFromSource:(id)a0 forceUpdate:(BOOL)a1;
- (void)_mergeMemoryRelationshipsFromSource:(id)a0;
- (void)_mergeMetadataFromSource:(id)a0;
- (void)_mergeResourceMetadataFromSource:(id)a0;
- (BOOL)_mergeResourcesFromSource:(id)a0 error:(id *)a1;
- (void)_mergeSharedLibraryMetadataFromSource:(id)a0;
- (void)_mergeTimezoneFromSource:(id)a0;
- (void)_mergeTitleFromSource:(id)a0;
- (void)_resetMediaAnalysisStateWithType:(long long)a0;
- (void)_setDCIMFilenameFromSource:(id)a0;
- (void)_setUBFFilenameFromDuplicateSource:(id)a0;
- (id)initWithSourceAssets:(id)a0 targetAsset:(id)a1 photolibrary:(id)a2;

@end
