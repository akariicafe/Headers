@class PLCloudBatchUploader, PLManagedObjectContext, PLCloudPhotoLibraryUploadTracker;
@protocol PLCloudPersistentHistoryMigratorContext;

@interface PLCloudPersistentHistoryMigrator : NSObject {
    PLCloudBatchUploader *_uploader;
    PLCloudPhotoLibraryUploadTracker *_uploadTracker;
    PLManagedObjectContext *_managedObjectContext;
    id<PLCloudPersistentHistoryMigratorContext> _migratorContext;
}

+ (void)migrateToPersistentHistoryIfNecessaryWithUploader:(id)a0 uploadTracker:(id)a1 managedObjectContext:(id)a2 migratorContext:(id)a3;

- (long long)migrate;
- (void).cxx_destruct;
- (id)initWithUploader:(id)a0 uploadTracker:(id)a1 managedObjectContext:(id)a2 migratorContext:(id)a3;
- (id)fetchAllPersistentHistoryTransactions;
- (BOOL)checkForExistingMigrationMarker;
- (void)updateSavedTokenFromPersistentHistoryResult:(id)a0;
- (void)uploadEventResults:(id)a0;
- (BOOL)readLastKnownChangeHubIndex:(unsigned long long *)a0;
- (void)migrateToPersistentHistoryIfNecessary;
- (id)fetchChangeHubEventsSinceLastKnownIndex:(unsigned long long)a0;

@end
