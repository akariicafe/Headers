@interface CDPDFollowUpFactory : NSObject

+ (id)contextToIdentifierMap;

- (BOOL)_isWalrusEnabled;
- (BOOL)_isManateeAvailableForAltDSID:(id)a0;
- (id)_baseFollowUpItemWithContext:(id)a0;
- (BOOL)_isBiometricCapable;
- (id)_createPasscodeFollowUpAction;
- (BOOL)_isBiometricAuthEnrolled;
- (id)_followUpForOfflineSecretChangeWithContext:(id)a0;
- (id)_followUpForRecoveryKeyRepairWithContext:(id)a0;
- (BOOL)_supportsFaceID;
- (void)_configureConfirmExistingSecretFollowUpItem:(id)a0;
- (id)_createPasscodeNoteFollowUpAction;
- (id)_followUpActionForRepair;
- (id)_followUpActionForRecoveryKeyRepair;
- (id)_baseFollowUpNotificationWithContext:(id)a0;
- (id)_createPasscodeDismissNoteFollowUpAction;
- (id)_deviceCapabilityProvider;
- (unsigned long long)secretType;
- (void)_configureRepairFollowUpItem:(id)a0;
- (void)_configureWalrusRepairFollowUpItem:(id)a0;
- (id)_localizedStringForKey:(id)a0;
- (id)_followUpForSecureTermsWithContext:(id)a0;
- (id)_offlineSecretChangeFollowUpAction;
- (id)followUpItemWithContext:(id)a0;
- (void)_configureWalrusConfirmExistingSecretFollowUpItem:(id)a0;
- (id)identifierForContext:(id)a0;
- (BOOL)_isManateeAvailable;
- (id)_followUpItemForWalrusCreatePasscodeWithContext:(id)a0;
- (id)_confirmExistingSecretFollowUpAction;
- (id)_followUpForConfirmExistingSecretWithContext:(id)a0;
- (id)_followUpForRepairWithContext:(id)a0;
- (id)_followUpForSettingUpBiometricsWithContext:(id)a0;
- (id)_secureTermsFollowUpAction;

@end
