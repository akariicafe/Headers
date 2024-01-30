@class NSString, HKHealthStore, HKTaskServerProxyProvider;

@interface HKMedicationSearchEngine : NSObject <_HKXPCExportable, HKMedicationSearchEngineClientInterface>

@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) HKTaskServerProxyProvider *proxyProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serverInterface;
+ (id)clientInterface;

- (id)remoteInterface;
- (void)connectionInvalidated;
- (id)initWithHealthStore:(id)a0;
- (id)exportedInterface;
- (void).cxx_destruct;
- (void)unitTest_noOpWithCompletion:(id /* block */)a0;
- (void)fetchMedicationClusterWithMachineReadableCode:(id)a0 codeAttributeType:(long long)a1 completion:(id /* block */)a2;
- (void)fetchMedicationClustersForCHRImportWithExistingMedications:(id)a0 sinceDate:(id)a1 limit:(long long)a2 completion:(id /* block */)a3;
- (void)fetchMedicationClustersWithScanResult:(id)a0 limit:(long long)a1 completion:(id /* block */)a2;
- (void)fetchMedicationClustersWithTextSearchTokens:(id)a0 limit:(long long)a1 completion:(id /* block */)a2;

@end
