@interface PLAssetsdMigrationClient : PLAssetsdBaseClient

- (void)cleanupModelForDataMigrationForRestoreType:(long long)a0;
- (void)moveiPhotoLibraryMediaWithReply:(id /* block */)a0;
- (void)dataMigrationWillFinish;

@end
