@interface CDPDFollowUpFactory : NSObject

+ (id)contextToIdentifierMap;

- (id)_baseFollowUpItemWithContext:(id)a0;
- (id)_offlineSecretChangeFollowUpAction;
- (id)_followUpActionForRecoveryKeyRepair;
- (id)_followUpForRepairWithContext:(id)a0;
- (id)_followUpForRecoveryKeyRepairWithContext:(id)a0;
- (id)_followUpForOfflineSecretChangeWithContext:(id)a0;
- (id)_followUpActionForRepair;
- (id)_followUpForSecureTermsWithContext:(id)a0;
- (BOOL)_isBiometricCapable;
- (id)_confirmExistingSecretFollowUpAction;
- (id)_localizedStringForKey:(id)a0;
- (BOOL)_isBiometricAuthEnrolled;
- (id)_followUpForConfirmExistingSecretWithContext:(id)a0;
- (id)_secureTermsFollowUpAction;
- (id)followUpItemWithContext:(id)a0;
- (BOOL)_isManateeAvailable;
- (BOOL)_supportsFaceID;
- (unsigned long long)secretType;
- (id)_followUpForSettingUpBiometricsWithContext:(id)a0;
- (id)identifierForContext:(id)a0;

@end
