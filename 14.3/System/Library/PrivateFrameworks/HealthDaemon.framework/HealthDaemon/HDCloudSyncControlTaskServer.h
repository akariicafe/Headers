@class NSString;

@interface HDCloudSyncControlTaskServer : HDStandardTaskServer <HKCloudSyncControlServerInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (BOOL)validateClient:(id)a0 error:(id *)a1;

- (void)connectionInvalidated;
- (id)remoteInterface;
- (id)remote_forceCloudSyncWithOptions:(unsigned long long)a0 reason:(long long)a1 completion:(id /* block */)a2;
- (id)remote_forceCloudResetWithCompletion:(id /* block */)a0;
- (id)remote_forceCloudSyncDataUploadForProfileWithCompletion:(id /* block */)a0;
- (id)remote_fetchCloudDescriptionWithCompletion:(id /* block */)a0;
- (void)remote_fetchCloudSyncStatusWithCompletion:(id /* block */)a0;
- (id)remote_disableCloudSyncAndDeleteAllCloudDataWithCompletion:(id /* block */)a0;
- (void)remote_disableCloudSyncWithCompletion:(id /* block */)a0;
- (void)remote_enableCloudSyncWithCompletion:(id /* block */)a0;
- (void)remote_accountConfigurationDidChangeWithCompletion:(id /* block */)a0;
- (void)remote_oldestSampleStartDateInHealthDatabaseWithCompletion:(id /* block */)a0;
- (id)remote_fetchCloudSyncProgressWithCompletion:(id /* block */)a0;
- (void)remote_requestDataRefreshWithCompletion:(id /* block */)a0;
- (id)exportedInterface;

@end
