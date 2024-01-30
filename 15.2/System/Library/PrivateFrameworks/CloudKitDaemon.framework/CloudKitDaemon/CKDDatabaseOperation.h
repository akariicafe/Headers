@interface CKDDatabaseOperation : CKDOperation

@property (nonatomic) long long databaseScope;

- (id)activityCreate;
- (BOOL)supportsClearAssetEncryption;
- (id)analyticsPayload;
- (id)flowControlKey;
- (id)initWithOperationInfo:(id)a0 container:(id)a1;
- (void)spawnAndRunOperationOfClass:(Class)a0 operationInfo:(id)a1 spawnQueue:(id)a2 container:(id)a3 operationConfigurationBlock:(id /* block */)a4;
- (id)CKStatusReportProperties;
- (void)setPCSData:(id)a0 forFetchedZoneID:(id)a1;
- (void)setPCSData:(id)a0 forFetchedShareID:(id)a1;
- (void)setPCSData:(id)a0 forFetchedRecordID:(id)a1;

@end
