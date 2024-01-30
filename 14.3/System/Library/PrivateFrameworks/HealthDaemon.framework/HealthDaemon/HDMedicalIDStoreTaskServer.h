@class NSString;

@interface HDMedicalIDStoreTaskServer : HDStandardTaskServer <HKMedicalIDStoreServerInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (BOOL)validateClient:(id)a0 error:(id *)a1;

- (id)remoteInterface;
- (void)remote_medicalIDClinicalContactsWithCompletion:(id /* block */)a0;
- (void)remote_fetchMedicalIDDataIfSetUpOrCreateDefaultWithCompletion:(id /* block */)a0;
- (void)remote_updateMedicalIDData:(id)a0 lastFetchedMedicalIDData:(id)a1 completion:(id /* block */)a2;
- (id)exportedInterface;
- (void)remote_fetchMedicalIDWithCompletion:(id /* block */)a0;
- (void)remote_badgeHealthAppForEmergencyContactsConsolidationWithCompletion:(id /* block */)a0;
- (void)remote_medicalIDEmergencyContactsWithCompletion:(id /* block */)a0;
- (void)remote_deleteMedicalIDDataWithLastFetchedMedicalIDData:(id)a0 completion:(id /* block */)a1;

@end
