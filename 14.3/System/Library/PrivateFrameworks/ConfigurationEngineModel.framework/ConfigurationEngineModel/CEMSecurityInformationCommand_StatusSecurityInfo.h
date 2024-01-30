@class NSSet, NSString, NSData, CEMSecurityInformationCommand_StatusSecurityInfoFirewallSettings, NSNumber, CEMSecurityInformationCommand_StatusSecurityInfoFirmwarePasswordStatus;

@interface CEMSecurityInformationCommand_StatusSecurityInfo : CEMPayloadBase

@property (class, readonly, copy) NSSet *allowedStatusKeys;

@property (copy, nonatomic) NSNumber *statusHardwareEncryptionCaps;
@property (copy, nonatomic) NSNumber *statusPasscodePresent;
@property (copy, nonatomic) NSNumber *statusPasscodeCompliant;
@property (copy, nonatomic) NSNumber *statusPasscodeCompliantWithProfiles;
@property (copy, nonatomic) NSNumber *statusPasscodeLockGracePeriod;
@property (copy, nonatomic) NSNumber *statusPasscodeLockGracePeriodEnforced;
@property (copy, nonatomic) NSNumber *statusFDEEnabled;
@property (copy, nonatomic) NSNumber *statusFDEHasPersonalRecoveryKey;
@property (copy, nonatomic) NSNumber *statusFDEHasInstitutionalRecoveryKey;
@property (copy, nonatomic) NSData *statusFDEPersonalRecoveryKeyCMS;
@property (copy, nonatomic) NSString *statusFDEPersonalRecoveryKeyDeviceKey;
@property (copy, nonatomic) NSNumber *statusSystemIntegrityProtectionEnabled;
@property (copy, nonatomic) CEMSecurityInformationCommand_StatusSecurityInfoFirewallSettings *statusFirewallSettings;
@property (copy, nonatomic) CEMSecurityInformationCommand_StatusSecurityInfoFirmwarePasswordStatus *statusFirmwarePasswordStatus;

+ (id)buildRequiredOnly;
+ (id)buildWithHardwareEncryptionCaps:(id)a0 withPasscodePresent:(id)a1 withPasscodeCompliant:(id)a2 withPasscodeCompliantWithProfiles:(id)a3 withPasscodeLockGracePeriod:(id)a4 withPasscodeLockGracePeriodEnforced:(id)a5 withFDEEnabled:(id)a6 withFDEHasPersonalRecoveryKey:(id)a7 withFDEHasInstitutionalRecoveryKey:(id)a8 withFDEPersonalRecoveryKeyCMS:(id)a9 withFDEPersonalRecoveryKeyDeviceKey:(id)a10 withSystemIntegrityProtectionEnabled:(id)a11 withFirewallSettings:(id)a12 withFirmwarePasswordStatus:(id)a13;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)loadPayload:(id)a0 error:(id *)a1;
- (id)serializePayload;

@end
