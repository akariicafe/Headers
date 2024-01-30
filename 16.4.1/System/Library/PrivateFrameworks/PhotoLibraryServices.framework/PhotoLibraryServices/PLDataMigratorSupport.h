@class PLPhotoLibraryPathManager;

@interface PLDataMigratorSupport : NSObject

@property (readonly, nonatomic) PLPhotoLibraryPathManager *pathManager;

- (id)initWithPathManager:(id)a0;
- (void).cxx_destruct;
- (void)recordDataMigrationInfo:(id)a0;
- (void)removeAsidePhotosDatabase;
- (void)removeInternalMemoriesRelatedSnapshotDirectory;
- (void)removeLegacyMetadataFiles;
- (void)removeModelInterestDatabase;

@end
