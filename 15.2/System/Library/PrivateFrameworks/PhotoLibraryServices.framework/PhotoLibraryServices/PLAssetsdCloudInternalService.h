@class NSString;

@interface PLAssetsdCloudInternalService : PLAbstractLibraryServicesManagerService <PLAssetsdCloudInternalServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)publishShareWithUUID:(id)a0 reply:(id /* block */)a1;
- (void)updateSharedAlbumsCachedServerConfigurationLimits;
- (void)isReadyForCloudPhotoLibraryWithReply:(id /* block */)a0;
- (void)getNotUploadedCount:(id /* block */)a0;
- (void)fetchShareWithURL:(id)a0 reply:(id /* block */)a1;
- (void)emailAddressForKey:(long long)a0 reply:(id /* block */)a1;
- (void)personInfoDictionaryForPersonID:(id)a0 reply:(id /* block */)a1;
- (void)keyForEmailAddress:(id)a0 reply:(id /* block */)a1;
- (void)rampingRequestForResourceType:(unsigned long long)a0 numRequested:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)forceSyncMomentShareWithUUID:(id)a0 reply:(id /* block */)a1;
- (void)getSystemBudgetsWithReply:(id /* block */)a0;
- (void)shouldAutoEnableiCPLOnOSXWithReply:(id /* block */)a0;
- (void)getCurrentTransferProgress:(id /* block */)a0;
- (void)enablePhotostreamsWithStreamID:(id)a0;
- (void)setCloudPhotoLibraryPauseState:(BOOL)a0 reason:(short)a1;
- (void)createPhotostreamAlbumWithStreamID:(id)a0;
- (void)isReadyForAnalysisWithReply:(id /* block */)a0;
- (void)acceptShareWithUUID:(id)a0 reply:(id /* block */)a1;
- (void)setCloudPhotoLibraryEnabledState:(BOOL)a0;
- (void)setPersonInfoDictionary:(id)a0 forPersonID:(id)a1;
- (void)queryUserIdentitiesWithEmails:(id)a0 phoneNumbers:(id)a1 reply:(id /* block */)a2;
- (void)syncCloudPhotoLibrary;
- (void)cloudSharingSpaceManagementRequestWithType:(unsigned long long)a0 optionalBytesToPurge:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)getResetSyncStatusWithReply:(id /* block */)a0;
- (void)overrideSystemBudgetsForSyncSession:(BOOL)a0 systemBudgets:(unsigned long long)a1 reply:(id /* block */)a2;
- (void)markResourcesPurgeableWithUrgency:(long long)a0 assetUuids:(id)a1 reply:(id /* block */)a2;

@end
