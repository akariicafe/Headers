@interface PLAssetsdCloudInternalClient : PLAssetsdBaseClient

- (void)updateSharedAlbumsCachedServerConfigurationLimits;
- (BOOL)shouldAutoEnableiCPLOnOSXWithError:(id *)a0;
- (void)getNotUploadedCount:(id /* block */)a0;
- (void)rampingRequestForResourceType:(unsigned long long)a0 numRequested:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)forceSyncMomentShare:(id)a0 completionHandler:(id /* block */)a1;
- (void)getSystemBudgetsWithReply:(id /* block */)a0;
- (void)markResourcesPurgeableWithUrgency:(long long)a0 assetUuids:(id)a1 completionHandler:(id /* block */)a2;
- (unsigned long long)getResetSyncStatusWithError:(id *)a0;
- (void)getCurrentTransferProgress:(id /* block */)a0;
- (void)enablePhotostreamsWithStreamID:(id)a0;
- (void)setCloudPhotoLibraryPauseState:(BOOL)a0 reason:(short)a1;
- (void)acceptShare:(id)a0 completionHandler:(id /* block */)a1;
- (unsigned long long)cloudSharingSpaceManagementRequestWithType:(unsigned long long)a0 optionalBytesToPurge:(unsigned long long)a1 error:(id *)a2;
- (long long)keyForEmailAddress:(id)a0 error:(id *)a1;
- (void)createPhotostreamAlbumWithStreamID:(id)a0;
- (void)publishShare:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)isReadyForAnalysis;
- (void)queryParticipantsWithEmails:(id)a0 phoneNumbers:(id)a1 completionHandler:(id /* block */)a2;
- (void)setCloudPhotoLibraryEnabledState:(BOOL)a0;
- (void)synchronouslySetCloudPhotoLibraryPauseState:(BOOL)a0 reason:(short)a1;
- (BOOL)isReadyForCloudPhotoLibrary;
- (void)setPersonInfoDictionary:(id)a0 forPersonID:(id)a1;
- (id)personInfoDictionaryForPersonID:(id)a0 error:(id *)a1;
- (void)syncCloudPhotoLibrary;
- (void)overrideSystemBudgetsForSyncSession:(BOOL)a0 systemBudgets:(unsigned long long)a1 reply:(id /* block */)a2;
- (id)emailAddressForKey:(long long)a0 error:(id *)a1;
- (void)setCloudPhotoLibraryEnabledStateSync:(BOOL)a0;
- (void)fetchShareFromShareURL:(id)a0 completionHandler:(id /* block */)a1;

@end
