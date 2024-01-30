@interface PLAssetsdSyncClient : PLAssetsdBaseClient

- (void)finalizeOTARestoreRecreatingAlbums:(BOOL)a0;
- (void)updateRestoredAssetWithUUID:(id)a0 paths:(id)a1 fixAddedDate:(BOOL)a2;

@end
