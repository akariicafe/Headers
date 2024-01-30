@interface HDMedicationSearchEngineTaskServer : HDStandardTaskServer <HKMedicationSearchEngineServerInterface>

+ (id)requiredEntitlements;
+ (id)taskIdentifier;

- (id)remoteInterface;
- (void)connectionInvalidated;
- (id)exportedInterface;
- (void)remote_fetchMedicationClusterWithMachineReadableCode:(id)a0 codeAttributeType:(long long)a1 completion:(id /* block */)a2;
- (void)remote_fetchMedicationClustersForCHRImportWithExistingMedications:(id)a0 sinceDate:(id)a1 limit:(long long)a2 completion:(id /* block */)a3;
- (void)remote_fetchMedicationClustersWithScanResult:(id)a0 limit:(long long)a1 completion:(id /* block */)a2;
- (void)remote_fetchMedicationClustersWithTextSearchTokens:(id)a0 limit:(long long)a1 completion:(id /* block */)a2;

@end
