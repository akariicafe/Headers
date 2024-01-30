@class NSString, PKXPCService;

@interface PKCloudStoreService : NSObject <PKCloudStoreCoordinatorDelegate> {
    PKXPCService *_remoteService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)itemOfItemTypeFromAllZones:(unsigned long long)a0 recordName:(id)a1 qualityOfService:(long long)a2 completion:(id /* block */)a3;
- (id)init;
- (void).cxx_destruct;
- (void)uploadTransaction:(id)a0 forTransactionSourceIdentifier:(id)a1 includeServerData:(BOOL)a2 completion:(id /* block */)a3;
- (id)_remoteObjectProxyWithFailureHandler:(id /* block */)a0;
- (void)shareForZoneName:(id)a0 containerName:(id)a1 qualityOfService:(long long)a2 completion:(id /* block */)a3;
- (void)sendShareInvitationForRecipientHandle:(id)a0 zoneName:(id)a1 containerName:(id)a2 qualityOfService:(long long)a3 completion:(id /* block */)a4;
- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)noteCloudSyncPassesSwitchChanged;
- (void)populateEvents:(id)a0 forAccountIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)generateRandomTransactionForTransactionSourceIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)resetContainerWithIdentifier:(id)a0 zoneNames:(id)a1 completion:(id /* block */)a2;
- (void)noteAccountDeleted;
- (void)checkTLKsMissingWithCompletion:(id /* block */)a0;
- (void)recreateZone:(id)a0 completion:(id /* block */)a1;
- (void)updateCloudStoreWithLocalItems:(id)a0 recordSpecificKeys:(id)a1 includeServerData:(BOOL)a2 completion:(id /* block */)a3;
- (void)allItemsOfItemType:(unsigned long long)a0 storeLocally:(BOOL)a1 completion:(id /* block */)a2;
- (void)removeRecordWithRecordName:(id)a0 zoneName:(id)a1 containerName:(id)a2 completion:(id /* block */)a3;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)setupCloudDatabaseForContainerName:(id)a0 completion:(id /* block */)a1;
- (void)itemOfItemType:(unsigned long long)a0 recordName:(id)a1 completion:(id /* block */)a2;
- (void)simulateCloudStorePushForContainerIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)acceptShareInvitation:(id)a0 qualityOfService:(long long)a1 completion:(id /* block */)a2;
- (void)resetApplePayManateeViewWithCompletion:(id /* block */)a0;
- (void)declineInvitationForRecipientHandle:(id)a0 zoneName:(id)a1 containerName:(id)a2 qualityOfService:(long long)a3 completion:(id /* block */)a4;
- (void)itemOfItemType:(unsigned long long)a0 recordName:(id)a1 qualityOfService:(long long)a2 completion:(id /* block */)a3;
- (id)_remoteObjectProxyWithSemaphore:(id)a0;
- (id)_remoteObjectProxy;
- (void)cloudStoreStatusForContainer:(id)a0 completion:(id /* block */)a1;
- (void)deleteZone:(id)a0 containerName:(id)a1 completion:(id /* block */)a2;
- (void)fetchAndStoreRecordsForTransactionSourceIdentifier:(id)a0 completion:(id /* block */)a1;

@end
