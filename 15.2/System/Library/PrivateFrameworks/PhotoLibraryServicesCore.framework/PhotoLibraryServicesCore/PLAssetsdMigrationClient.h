@interface PLAssetsdMigrationClient : PLAssetsdBaseClient

- (void)moveiPhotoLibraryMediaWithReply:(id /* block */)a0;
- (void)cleanupModelForDataMigrationForRestoreType:(long long)a0;
- (void)dataMigrationWillFinish;

@end
