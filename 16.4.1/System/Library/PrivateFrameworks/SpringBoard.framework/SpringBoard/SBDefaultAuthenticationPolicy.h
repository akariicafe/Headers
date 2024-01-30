@class SecureBackup, SBiCloudPasscodeRequirementLockoutController, SBSoftwareUpdatePasscodePolicyManager, NSString;

@interface SBDefaultAuthenticationPolicy : NSObject <SBFAuthenticationPolicy>

@property (retain, nonatomic, getter=_secureBackupHelper, setter=_setSecureBackupHelper:) SecureBackup *secureBackupHelper;
@property (retain, nonatomic) SBiCloudPasscodeRequirementLockoutController *iCloudPasscodeRequirementLockoutController;
@property (retain, nonatomic) SBSoftwareUpdatePasscodePolicyManager *softwareUpdatePasscodePolicyManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)allowAuthenticationRevocation;
- (void)cachePasscode:(id)a0;
- (void)clearPasscodeCache;
- (void)passcodeAuthenticationFailedWithError:(id)a0;
- (BOOL)shouldClearBlockStateOnSync;
- (BOOL)usesSecureMode;
- (void)wipeDeviceWithReason:(id)a0;

@end
