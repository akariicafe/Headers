@interface PLSearchIndexStatusManager : NSObject

+ (unsigned long long)currentSearchIndexVersion;
+ (BOOL)saveCurrentSearchIndexInfoForPhotoLibrary:(id)a0 sceneTaxonomyDigests:(id)a1;
+ (BOOL)_saveSearchIndexingRebuildInfo:(id)a0 library:(id)a1;
+ (id)_searchIndexingStatusPlistForLibrary:(id)a0;
+ (id)_searchIndexingStatusPlistPathForLibrary:(id)a0;
+ (BOOL)_writeSearchIndexingStatusPlistToDisk:(id)a0 library:(id)a1;
+ (id)currentSearchIndexingSyncTokenForLibrary:(id)a0;
+ (BOOL)isSearchIndexingStateInSyncWithSpotlightClientState:(id)a0;
+ (id)lastSearchIndexingSyncTokenForLibrary:(id)a0;
+ (BOOL)saveSearchIndexIsRebuilding:(BOOL)a0 library:(id)a1;
+ (BOOL)saveSearchIndexingSyncToken:(id)a0 library:(id)a1;
+ (BOOL)saveSpotlightRequestedRebuildForPhotoLibrary:(id)a0;
+ (BOOL)searchIndexIsRebuildingForLibrary:(id)a0;
+ (id)searchIndexingRebuildInfoForLibrary:(id)a0;

@end
