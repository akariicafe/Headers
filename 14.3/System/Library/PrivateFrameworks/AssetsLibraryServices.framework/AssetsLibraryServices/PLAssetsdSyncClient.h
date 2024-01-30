@interface PLAssetsdSyncClient : PLAssetsdBaseClient

- (void)updateRestoredAssetWithUUID:(id)a0 paths:(id)a1 fixAddedDate:(BOOL)a2;
- (void)finalizeOTARestoreRecreatingAlbums:(BOOL)a0;

@end
