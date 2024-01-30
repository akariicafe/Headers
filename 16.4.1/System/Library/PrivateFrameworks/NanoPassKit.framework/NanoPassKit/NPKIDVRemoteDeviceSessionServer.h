@class NSString, NPKIDVRemoteDeviceServiceEventsCoordinator, NPKBiometricPassPreflightManager, NSSet, NPKIDVRemoteDeviceConnectionCoordinator;

@interface NPKIDVRemoteDeviceSessionServer : PDXPCService <NPKIDVRemoteDeviceServiceSessionServerProtocol> {
    NPKIDVRemoteDeviceServiceEventsCoordinator *_eventsCoordinator;
    NPKIDVRemoteDeviceConnectionCoordinator *_connectionCoordinator;
    NPKBiometricPassPreflightManager *_preflightManager;
    NSSet *_partitions;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configureWithPartition:(id)a0 ackHandler:(id /* block */)a1;
- (void)registerForEvents:(unsigned long long)a0 withRemoteProcessServiceName:(id)a1 completion:(id /* block */)a2;
- (void)confirmRemoteDeviceID:(id)a0 withCompletion:(id /* block */)a1;
- (void)deleteCredential:(id)a0 completion:(id /* block */)a1;
- (void)generatePresentmentKeysForCredential:(id)a0 numKeys:(long long)a1 completion:(id /* block */)a2;
- (void)provisionCredentialWithType:(unsigned long long)a0 metadata:(id)a1 policyIdentifier:(id)a2 credentialIdentifier:(id)a3 attestations:(id)a4 completion:(id /* block */)a5;
- (void)establishPrearmTrustV2:(id)a0 completion:(id /* block */)a1;
- (void)unregisterFromEvents:(unsigned long long)a0 withRemoteProcessServiceName:(id)a1 completion:(id /* block */)a2;
- (void)propertiesOfCredential:(id)a0 completion:(id /* block */)a1;
- (id)_checkCredentialProvisioningEntitlement;
- (id)initWithConnection:(id)a0 eventsCoordinator:(id)a1 connectionCoordinator:(id)a2 preflightManager:(id)a3;
- (void)establishPrearmTrust:(id)a0 completion:(id /* block */)a1;
- (id)_checkCredentialStoreEntitlementWithPartition:(id)a0;
- (void)credentialIdentifiersInPartitions:(id)a0 completion:(id /* block */)a1;
- (void)credentialPreflightStatusForType:(unsigned long long)a0 minOSVersion:(id)a1 completion:(id /* block */)a2;
- (void)pairedWatchSEIDWithCompletion:(id /* block */)a0;
- (void)nonceForAuthorizationTokenWithCompletion:(id /* block */)a0;
- (void)createCredentialInPartition:(id)a0 options:(id)a1 completion:(id /* block */)a2;
- (void)prearmCredentialWithAuthorizationToken:(id)a0 completion:(id /* block */)a1;
- (void)addNotificationWithType:(unsigned long long)a0 documentType:(unsigned long long)a1 issuerName:(id)a2 completion:(id /* block */)a3;
- (id)_checkCredentialStoreBiometricsEntitlement;
- (void)deleteGlobalAuthACLWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)getCASDCertificateWithCompletion:(id /* block */)a0;
- (void)generateKeyWithType:(unsigned long long)a0 credentialIdentifier:(id)a1 completion:(id /* block */)a2;

@end
