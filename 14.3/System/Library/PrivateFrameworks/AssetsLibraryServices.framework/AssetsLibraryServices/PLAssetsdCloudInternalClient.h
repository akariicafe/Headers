@interface PLAssetsdCloudInternalClient : PLAssetsdBaseClient

- (void)queryParticipantsWithEmails:(id)a0 phoneNumbers:(id)a1 completionHandler:(id /* block */)a2;
- (void)syncCloudPhotoLibrary;
- (void)createPhotostreamAlbumWithStreamID:(id)a0;
- (id)personInfoDictionaryForPersonID:(id)a0 error:(id *)a1;
- (void)enablePhotostreamsWithStreamID:(id)a0;
- (BOOL)isReadyForCloudPhotoLibrary;
- (void)publishShare:(id)a0 completionHandler:(id /* block */)a1;
- (void)acceptShare:(id)a0 completionHandler:(id /* block */)a1;
- (void)setCloudPhotoLibraryEnabledStateSync:(BOOL)a0;
- (void)fetchShareFromShareURL:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)shouldAutoEnableiCPLOnOSXWithError:(id *)a0;
- (void)synchronouslySetCloudPhotoLibraryPauseState:(BOOL)a0 reason:(short)a1;
- (unsigned long long)getResetSyncStatusWithError:(id *)a0;
- (void)forceSyncMomentShare:(id)a0 completionHandler:(id /* block */)a1;
- (void)setPersonInfoDictionary:(id)a0 forPersonID:(id)a1;
- (void)setCloudPhotoLibraryEnabledState:(BOOL)a0;
- (void)setCloudPhotoLibraryPauseState:(BOOL)a0 reason:(short)a1;
- (void)rampingRequestForResourceType:(unsigned long long)a0 numRequested:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)getCurrentTransferProgress:(id /* block */)a0;
- (void)getNotUploadedCount:(id /* block */)a0;
- (void)getSystemBudgetsWithReply:(id /* block */)a0;
- (void)overrideSystemBudgetsForSyncSession:(BOOL)a0 systemBudgets:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)updateSharedAlbumsCachedServerConfigurationLimits;
- (unsigned long long)cloudSharingSpaceManagementRequestWithType:(unsigned long long)a0 optionalBytesToPurge:(unsigned long long)a1 error:(id *)a2;
- (id)emailAddressForKey:(long long)a0 error:(id *)a1;
- (long long)keyForEmailAddress:(id)a0 error:(id *)a1;

@end
