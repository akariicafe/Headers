@class NSString, HKProxyProvider;

@interface HDHRSHealthRecordsIngestionServiceClient : NSObject <_HKXPCExportable> {
    HKProxyProvider *_proxyProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)connectionInvalidated;
- (void)_fetchProxyWithHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)triggerDownloadIssuerRegistryForCatalog:(id)a0 shouldPersist:(BOOL)a1 completion:(id /* block */)a2;
- (void)didUpdateSignedClinicalDataRecord:(id)a0;
- (id)remoteInterface;
- (id)initWithConnection:(id)a0;
- (id)handleSignedClinicalDataFeature:(id)a0 context:(id)a1 error:(id *)a2;
- (void)parseSignedClinicalData:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)willDeleteSignedClinicalDataRecordWithSyncIdentifier:(id)a0;
- (void)reverifySignatureForRecord:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (id)exportedInterface;
- (void)dealloc;
- (void)_synchronousPerformWithProxyHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (void)processOriginalSignedClinicalDataRecords:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;

@end
