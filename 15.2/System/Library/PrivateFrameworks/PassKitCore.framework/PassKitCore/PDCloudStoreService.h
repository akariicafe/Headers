@class NSString, PDCloudStoreNotificationCoordinator, PKEntitlementWhitelist;

@interface PDCloudStoreService : PDXPCService <PDCloudStoreServiceExportedInterface> {
    PKEntitlementWhitelist *_whitelist;
}

@property (retain, nonatomic) PDCloudStoreNotificationCoordinator *cloudStoreNotificationCoordinator;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)declineInvitationForRecipientHandle:(id)a0 zoneName:(id)a1 containerName:(id)a2 qualityOfService:(long long)a3 completion:(id /* block */)a4;
- (void)updateCloudStoreWithLocalItemsWithConfigurations:(id)a0 completion:(id /* block */)a1;
- (void)serviceSuspended;
- (void)cloudStoreRecordArrayWithConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)itemOfItemType:(unsigned long long)a0 recordName:(id)a1 qualityOfService:(long long)a2 completion:(id /* block */)a3;
- (id)initWithConnection:(id)a0;
- (void)deleteZone:(id)a0 containerName:(id)a1 completion:(id /* block */)a2;
- (void)generateRandomTransactionForTransactionSourceIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)resetApplePayManateeViewWithCompletion:(id /* block */)a0;
- (void)serviceResumed;
- (void)shareForZoneName:(id)a0 containerName:(id)a1 qualityOfService:(long long)a2 completion:(id /* block */)a3;
- (void)uploadTransaction:(id)a0 forTransactionSourceIdentifier:(id)a1 includeServerData:(BOOL)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)simulateCloudStorePushForContainerIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)removeRecordWithRecordName:(id)a0 zoneName:(id)a1 containerName:(id)a2 completion:(id /* block */)a3;
- (void)recreateZone:(id)a0 completion:(id /* block */)a1;
- (void)resetContainerWithIdentifier:(id)a0 zoneNames:(id)a1 completion:(id /* block */)a2;
- (void)allItemsOfItemType:(unsigned long long)a0 storeLocally:(BOOL)a1 completion:(id /* block */)a2;
- (void)removeAllItems:(unsigned long long)a0 inZoneName:(id)a1 containerName:(id)a2 storeLocally:(BOOL)a3 completion:(id /* block */)a4;
- (void)setupCloudDatabaseForContainerName:(id)a0 completion:(id /* block */)a1;
- (void)checkTLKsMissingWithCompletion:(id /* block */)a0;
- (void)cloudStoreStatusForContainer:(id)a0 completion:(id /* block */)a1;
- (void)populateEvents:(id)a0 forAccountIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)itemOfItemTypeFromAllZones:(unsigned long long)a0 recordName:(id)a1 qualityOfService:(long long)a2 completion:(id /* block */)a3;
- (void)fetchAndStoreRecordsForTransactionSourceIdentifier:(id)a0 completion:(id /* block */)a1;

@end
