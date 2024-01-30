@class NSString;

@interface HDMedicalRecordsStoreServer : HDStandardTaskServer <HKMedicalRecordsStoreServer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (BOOL)validateConfiguration:(id)a0 client:(id)a1 error:(id *)a2;
+ (Class)configurationClass;

- (id)remoteInterface;
- (void)remote_fetchMedicalRecordsForClinicalRecordsUUIDs:(id)a0 completion:(id /* block */)a1;
- (id)exportedInterface;
- (id)_privateSourceBundleIdentifiersByPublicWithError:(id *)a0;
- (id)_medicalRecordForClinicalRecordWithUUID:(id)a0 privateSourceBundleIdentifiersByPublic:(id)a1 error:(id *)a2;

@end
