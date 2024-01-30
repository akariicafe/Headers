@class PLLibraryServicesManager, NSObject;
@protocol OS_dispatch_queue;

@interface PLDelayedSaveActionsProcessor : NSObject {
    PLLibraryServicesManager *_libraryServicesManager;
    NSObject<OS_dispatch_queue> *_coreDuetCallback;
}

- (void)_processDelayedAlbumCountsAndDateRangeUpdates:(id)a0 library:(id)a1 transaction:(id)a2;
- (void)_processDelayedFeaturedContentUpdateAndWidgetTimelineReload:(BOOL)a0 shouldReloadWidgetTimeline:(BOOL)a1 library:(id)a2 transaction:(id)a3;
- (void)_deleteUUIDs:(id)a0 fromCoreDuetStreams:(id)a1 transaction:(id)a2;
- (void)_processDelayedImportSessionCountsAndDateRangeUpdates:(id)a0 library:(id)a1 transaction:(id)a2;
- (void)_processDelayedMomentChangesWithTransaction:(id)a0;
- (void)processDelayedDeletionsFromChangeHubEvent:(id)a0 library:(id)a1 transaction:(id)a2;
- (void)processDelayedMomentGeneratorSaveActionsFromDetail:(id)a0;
- (void)_processDelayedMemoriesForDuetDelete:(id)a0 transaction:(id)a1;
- (void)processDelayedSaveActionsDetail:(id)a0 withPhotoLibrary:(id)a1 transaction:(id)a2;
- (void)_processDelayedSearchIndexUpdates:(id)a0 transaction:(id)a1;
- (void).cxx_destruct;
- (void)_processDelayedCloudFeedAlbumUpdates:(id)a0 assetInserts:(id)a1 assetUpdates:(id)a2 commentInserts:(id)a3 invitationRecordUpdates:(id)a4 deletionEntries:(id)a5 transaction:(id)a6;
- (void)_processDelayedMemoriesAssetUpdate:(id)a0 library:(id)a1 transaction:(id)a2;
- (void)_processDelayedAssetsForFileSystemPersistency:(id)a0 library:(id)a1 transaction:(id)a2;
- (void)_processDelayedDupeAnalysisNormalInserts:(id)a0 cloudInserts:(id)a1 transaction:(id)a2;
- (void)_processDelayedWidgetTimelineReload:(BOOL)a0 library:(id)a1 transaction:(id)a2;
- (id)initWithLibraryServicesManager:(id)a0;
- (void)_processDelayedAssetsForDuetDelete:(id)a0 transaction:(id)a1;

@end
