@interface MDMMCInterface : NSObject

+ (BOOL)isAwaitingDeviceConfigured;
+ (void)flush;
+ (BOOL)isPasscodeSet;
+ (BOOL)installProvisioningProfileData:(id)a0 managingProfileIdentifier:(id)a1 outError:(id *)a2;
+ (id)managedAppIDs;
+ (void)storeCertificateData:(id)a0 forHostIdentifier:(id)a1;
+ (BOOL)isProfileWithIdentifier:(id)a0 managedByProfileWithIdentifier:(id)a1;
+ (BOOL)removeProvisioningProfileWithUUID:(id)a0 managingProfileIdentifier:(id)a1 outError:(id *)a2;
+ (void)storeCloudConfigurationDetails:(id)a0 completion:(id /* block */)a1;
+ (id)cloudConfigurationDetails;
+ (BOOL)clearPasscodeWithEscrowKeybagData:(id)a0 secret:(id)a1 outError:(id *)a2;
+ (BOOL)isEnterpriseBookBackupAllowed;
+ (void)profileDataStoredForPurpose:(int)a0 completion:(id /* block */)a1;
+ (void)storeProfileData:(id)a0 configurationSource:(int)a1 purpose:(int)a2 completion:(id /* block */)a3;
+ (BOOL)isLimitedAppsMode;
+ (int)_mcFilterFlagsForMDMFlags:(int)a0;
+ (id)profileIdentifierForProfileData:(id)a0 allowEmptyPayload:(BOOL)a1 outIsSupervisionProfile:(BOOL *)a2 outProfileSigner:(struct __SecCertificate **)a3 outMayInstallCloudProfile:(BOOL *)a4 outError:(id *)a5;
+ (int)_mcCloudConfigSourceForCCSource:(int)a0;
+ (int)_mcProfileStoragePurposeForMDMPurpose:(int)a0;
+ (void)profiledCheckIn;
+ (id)mdmQueryableRestrictions;
+ (id)filterMDMRestrictions:(id)a0 acceptingKeysFromDictionary:(id)a1;
+ (BOOL)isAutomaticDateAndTimeForced;
+ (BOOL)isDiagnosticsSubmissionRestricted;
+ (id)mdmProfileIdentifier;
+ (id)profileIdentifiersWithFilterFlags:(int)a0;
+ (id)profileListWithFilterFlags:(int)a0;
+ (id)provisioningProfileUUIDsWithManagedOnly:(BOOL)a0;
+ (BOOL)isProvisioningProfileWithUUID:(id)a0 managedByProfileWithIdentifier:(id)a1;
+ (id)ipcuProfileList;
+ (id)ipcuRemoveProfileWithIdentifier:(id)a0;
+ (void)installProfileDataStoredForPurpose:(int)a0 completion:(id /* block */)a1;
+ (void)retrieveCloudConfigurationDetailsCompletion:(id /* block */)a0;
+ (void)retrieveCloudConfigurationFromURL:(id)a0 username:(id)a1 password:(id)a2 anchorCertificates:(id)a3 completion:(id /* block */)a4;
+ (void)enrollProvisionallyWithNonce:(id)a0 completion:(id /* block */)a1;

@end
