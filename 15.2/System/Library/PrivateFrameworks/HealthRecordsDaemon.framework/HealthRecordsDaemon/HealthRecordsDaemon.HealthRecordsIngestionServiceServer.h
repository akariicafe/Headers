@interface HealthRecordsDaemon.HealthRecordsIngestionServiceServer : NSObject <HDHRSHealthRecordsIngestionServiceInterface, _HKXPCExportable> {
    void /* unknown type, empty encoding */ cancellables;
    void /* unknown type, empty encoding */ client;
}

- (void)connectionInvalidated;
- (id)remoteInterface;
- (id)exportedInterface;
- (void)remote_parseSignedClinicalData:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)remote_handleSignedClinicalDataFeature:(id)a0 context:(id)a1 completion:(id /* block */)a2;
- (void)remote_processOriginalSignedClinicalDataRecords:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)remote_reverifySignatureForRecord:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)remote_didUpdateSignedClinicalDataRecord:(id)a0;
- (void)remote_willDeleteSignedClinicalDataRecordWithSyncIdentifier:(id)a0;
- (void)remote_triggerDownloadIssuerRegistryForCatalog:(id)a0 shouldPersist:(BOOL)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
