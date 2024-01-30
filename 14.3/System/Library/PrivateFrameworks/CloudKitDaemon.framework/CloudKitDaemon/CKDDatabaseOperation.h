@interface CKDDatabaseOperation : CKDOperation

@property (nonatomic) long long databaseScope;

- (id)activityCreate;
- (id)initWithOperationInfo:(id)a0 clientContext:(id)a1;
- (id)flowControlKey;
- (id)analyticsPayload;
- (void)spawnAndRunOperationOfClass:(Class)a0 operationInfo:(id)a1 spawnQueue:(id)a2 clientContext:(id)a3 operationConfigurationBlock:(id /* block */)a4;
- (id)CKStatusReportProperties;
- (BOOL)supportsClearAssetEncryption;
- (void)setPCSData:(id)a0 forFetchedZoneID:(id)a1;
- (void)setPCSData:(id)a0 forFetchedShareID:(id)a1;
- (void)setPCSData:(id)a0 forFetchedRecordID:(id)a1;

@end
