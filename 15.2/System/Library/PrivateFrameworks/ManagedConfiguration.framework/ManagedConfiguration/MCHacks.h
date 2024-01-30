@interface MCHacks : NSObject

+ (id)sharedHacks;

- (void)_applyServerSideChangesWithOldRestrictions:(id)a0 newRestrictions:(id)a1 oldEffectiveUserSettings:(id)a2 newEffectiveUserSettings:(id)a3;
- (BOOL)isGreenTea;
- (id)quantizedGracePeriodInSeconds:(id)a0;
- (id)quantizedAutoLockInSeconds:(id)a0;
- (BOOL)isSetupBuddyDone;
- (BOOL)sanitizedProfileSignerCertificateChainIsAllowedToWriteDefaults:(id)a0;
- (BOOL)sanitizedProfileSignerCertificateChainIsAllowedToInstallUnsupportedPayload:(id)a0;
- (BOOL)sanitizedProfileSignerCertificateChainIsAllowedToInstallSupervisedRestrictionsOnUnsupervisedDevices:(id)a0;
- (id)permittedAutoLockNumbers;
- (BOOL)_applyHeuristicsToRestrictions:(id)a0 forProfile:(id)a1 outError:(id *)a2;
- (BOOL)isJapanSKU;
- (id)_permittedGracePeriodNumbers;
- (id)_selectLargestNumberFromSortedArray:(id)a0 equalToOrLessThanNumber:(id)a1;
- (void)_applyImpliedSettingsToSettingsDictionary:(id)a0 currentSettings:(id)a1 restrictions:(id)a2;
- (void)_applyHeuristicsToEffectiveUserSettings:(id)a0;
- (void)_applyMandatorySettingsToEffectiveUserSettings:(id)a0;
- (void)_applyHeuristicsToGranfatheredRestrictionPayloadKeys:(id)a0;
- (void)_setRequriesEncryptedBackupInLockdownWithEffectiveUserSettings:(id)a0;
- (id)_deviceSpecificDefaultSettings;
- (void)_sendChangeNotificationsBasedOnDefaultsAdditionByDomain:(id)a0;
- (void)_sendChangeNotificationsBasedOnDefaultsRemovalByDomain:(id)a0;

@end
