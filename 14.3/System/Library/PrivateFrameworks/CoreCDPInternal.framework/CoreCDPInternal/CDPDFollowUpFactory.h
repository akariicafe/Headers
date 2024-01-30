@interface CDPDFollowUpFactory : NSObject

+ (id)contextToIdentifierMap;

- (id)_followUpForRecoveryKeyRepairWithContext:(id)a0;
- (BOOL)_isBiometricCapable;
- (unsigned long long)secretType;
- (BOOL)_supportsFaceID;
- (id)_followUpForSettingUpBiometricsWithContext:(id)a0;
- (id)identifierForContext:(id)a0;
- (id)_followUpActionForRecoveryKeyRepair;
- (id)_baseFollowUpItemWithContext:(id)a0;
- (id)_followUpForOfflineSecretChangeWithContext:(id)a0;
- (id)_offlineSecretChangeFollowUpAction;
- (id)followUpItemWithContext:(id)a0;
- (id)_followUpActionForRepair;
- (id)_localizedStringForKey:(id)a0;
- (id)_followUpForRepairWithContext:(id)a0;
- (BOOL)_isBiometricAuthEnrolled;

@end
