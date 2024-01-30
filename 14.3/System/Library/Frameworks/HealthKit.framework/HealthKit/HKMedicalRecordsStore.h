@class NSString, HKTaskServerProxyProvider;

@interface HKMedicalRecordsStore : NSObject <_HKXPCExportable, HKMedicalRecordsStoreClient> {
    HKTaskServerProxyProvider *_proxyProvider;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskIdentifier;

- (void)connectionInvalidated;
- (void).cxx_destruct;
- (id)remoteInterface;
- (id)exportedInterface;
- (id)initWithHealthStore:(id)a0;
- (void)fetchMedicalRecordsForClinicalRecords:(id)a0 completion:(id /* block */)a1;

@end
