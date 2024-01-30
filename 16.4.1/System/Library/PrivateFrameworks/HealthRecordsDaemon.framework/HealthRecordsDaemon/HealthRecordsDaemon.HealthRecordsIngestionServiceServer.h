@interface HealthRecordsDaemon.HealthRecordsIngestionServiceServer : NSObject <HDHealthRecordsIngestionServiceInterface, _HKXPCExportable> {
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ client;
}

- (id)remoteInterface;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (void)remote_addCardToWalletForRecord:(id)a0 completion:(id /* block */)a1;
- (void)remote_didUpdateSignedClinicalDataRecord:(id)a0;
- (void)remote_handleSignedClinicalDataFeature:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)remote_parseSignedClinicalData:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)remote_processOriginalSignedClinicalDataRecords:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)remote_reverifySignatureForRecord:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)remote_triggerDownloadIssuerRegistryForCatalogURL:(id)a0 shouldPersist:(BOOL)a1 completion:(id /* block */)a2;
- (void)remote_triggerDownloadPublicKeysForCatalogURL:(id)a0 shouldPersist:(BOOL)a1 completion:(id /* block */)a2;
- (void)remote_willDeleteSignedClinicalDataRecordWithSyncIdentifier:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
