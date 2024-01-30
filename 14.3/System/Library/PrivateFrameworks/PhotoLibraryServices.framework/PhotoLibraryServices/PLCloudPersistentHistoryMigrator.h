@class PLCloudBatchUploader, NSManagedObjectContext, PLCloudPhotoLibraryUploadTracker;
@protocol PLCloudPersistentHistoryMigratorContext;

@interface PLCloudPersistentHistoryMigrator : NSObject {
    PLCloudBatchUploader *_uploader;
    PLCloudPhotoLibraryUploadTracker *_uploadTracker;
    NSManagedObjectContext *_managedObjectContext;
    id<PLCloudPersistentHistoryMigratorContext> _migratorContext;
}

+ (void)migrateToPersistentHistoryIfNecessaryWithUploader:(id)a0 uploadTracker:(id)a1 managedObjectContext:(id)a2 migratorContext:(id)a3;

- (void).cxx_destruct;
- (long long)migrate;
- (id)initWithUploader:(id)a0 uploadTracker:(id)a1 managedObjectContext:(id)a2 migratorContext:(id)a3;
- (void)migrateToPersistentHistoryIfNecessary;
- (BOOL)checkForExistingMigrationMarker;
- (BOOL)readLastKnownChangeHubIndex:(unsigned long long *)a0;
- (id)fetchChangeHubEventsSinceLastKnownIndex:(unsigned long long)a0;
- (id)fetchAllPersistentHistoryTransactions;
- (void)uploadEventResults:(id)a0;
- (void)updateSavedTokenFromPersistentHistoryResult:(id)a0;

@end
