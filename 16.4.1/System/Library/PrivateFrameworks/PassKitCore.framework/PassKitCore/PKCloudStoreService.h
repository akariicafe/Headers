@class NSString, PKXPCService;

@interface PKCloudStoreService : NSObject <PKCloudStoreCoordinatorDelegate> {
    PKXPCService *_remoteService;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)_remoteObjectProxy;
- (id)_remoteObjectProxyWithFailureHandler:(id /* block */)a0;
- (void)checkTLKsMissingWithCompletion:(id /* block */)a0;
- (id)_remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)init;
- (void)resetApplePayManateeViewWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)allItemsOfItemType:(unsigned long long)a0 storeLocally:(BOOL)a1 completion:(id /* block */)a2;
- (void)applePayContainerItemsFromDate:(id)a0 toDate:(id)a1 completion:(id /* block */)a2;
- (void)cloudStoreRecordArrayWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)cloudStoreStatusForContainer:(id)a0 completion:(id /* block */)a1;
- (void)createInvitationForRecipientHandle:(id)a0 zoneName:(id)a1 containerName:(id)a2 qualityOfService:(long long)a3 completion:(id /* block */)a4;
- (void)createZone:(id)a0 containerName:(id)a1 completion:(id /* block */)a2;
- (void)declineInvitationForRecipientHandle:(id)a0 zoneName:(id)a1 containerName:(id)a2 qualityOfService:(long long)a3 completion:(id /* block */)a4;
- (void)deleteZone:(id)a0 containerName:(id)a1 completion:(id /* block */)a2;
- (void)diagnosticInfoForContainerWithName:(id)a0 completion:(id /* block */)a1;
- (void)diagnosticSnapshotForContainerWithName:(id)a0 completion:(id /* block */)a1;
- (id /* block */)errorHandlerForMethod:(SEL)a0 completion:(id /* block */)a1;
- (void)fetchAndStoreRecordsForTransactionSourceIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)generateRandomTransactionForTransactionSourceIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)itemOfItemType:(unsigned long long)a0 recordName:(id)a1 completion:(id /* block */)a2;
- (void)itemOfItemType:(unsigned long long)a0 recordName:(id)a1 qualityOfService:(long long)a2 completion:(id /* block */)a3;
- (void)itemOfItemTypeFromAllZones:(unsigned long long)a0 recordName:(id)a1 qualityOfService:(long long)a2 completion:(id /* block */)a3;
- (void)performAction:(long long)a0 inContainerWithName:(id)a1 completion:(id /* block */)a2;
- (void)performBackgroundTransactionSyncFromDate:(id)a0 completion:(id /* block */)a1;
- (void)populateEvents:(id)a0 forAccountIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)removeAllItems:(unsigned long long)a0 inZoneName:(id)a1 containerName:(id)a2 storeLocally:(BOOL)a3 completion:(id /* block */)a4;
- (void)removeRecordWithRecordName:(id)a0 zoneName:(id)a1 containerName:(id)a2 completion:(id /* block */)a3;
- (void)resetContainerWithIdentifier:(id)a0 zoneNames:(id)a1 completion:(id /* block */)a2;
- (void)setupCloudDatabaseForContainerName:(id)a0 completion:(id /* block */)a1;
- (void)shareForZoneName:(id)a0 containerName:(id)a1 qualityOfService:(long long)a2 completion:(id /* block */)a3;
- (void)simulateCloudStorePushForContainerIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)updateCloudStoreWithLocalItemsWithConfigurations:(id)a0 completion:(id /* block */)a1;
- (void)uploadTransaction:(id)a0 forTransactionSourceIdentifier:(id)a1 includeServerData:(BOOL)a2 completion:(id /* block */)a3;

@end
