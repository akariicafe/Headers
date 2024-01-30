@class PLPhotoLibraryPathManager;

@interface PLDataMigratorSupport : NSObject

@property (readonly, nonatomic) PLPhotoLibraryPathManager *pathManager;

- (id)initWithPathManager:(id)a0;
- (void).cxx_destruct;
- (void)removeLegacyMetadataFiles;
- (void)removeAsidePhotosDatabase;
- (void)recordDataMigrationInfo:(id)a0;
- (void)removeModelInterestDatabase;
- (void)removeInternalMemoriesRelatedSnapshotDirectory;

@end
