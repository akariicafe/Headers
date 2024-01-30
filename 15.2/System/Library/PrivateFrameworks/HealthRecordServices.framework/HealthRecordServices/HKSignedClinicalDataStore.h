@class NSString, HKTaskServerProxyProvider;

@interface HKSignedClinicalDataStore : NSObject <HKSignedClinicalDataStoreClientInterface, _HKXPCExportable> {
    HKTaskServerProxyProvider *_proxyProvider;
}

@property (class, readonly, copy, nonatomic) NSString *taskIdentifier;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)logPrefix;
- (id)initWithHealthStore:(id)a0;
- (void)connectionInvalidated;
- (void)triggerDownloadIssuerRegistryForCatalog:(id)a0 shouldPersist:(BOOL)a1 completion:(id /* block */)a2;
- (id)remoteInterface;
- (void)parseSignedClinicalData:(id)a0 options:(long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;
- (void)_fetchServerProxyWithHandler:(id /* block */)a0 errorHandler:(id /* block */)a1;
- (id)exportedInterface;
- (void)deleteSignedClinicalDataRecord:(id)a0 completion:(id /* block */)a1;
- (void)fetchSignedClinicalDataGroupBackingMedicalRecord:(id)a0 options:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)reverifySignatureForRecord:(id)a0 completion:(id /* block */)a1;
- (void)storeSignedClinicalData:(id)a0 completion:(id /* block */)a1;
- (void)fetchCurrentIssuerRegistryContentVersionWithCompletion:(id /* block */)a0;
- (void)setIssuerRegistryContentVersion:(id)a0 completion:(id /* block */)a1;
- (void)insertOrReplaceIssuerRegistryEntries:(id)a0 completion:(id /* block */)a1;

@end
