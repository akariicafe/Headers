@interface MCPasscodeManager : NSObject

+ (int)unlockScreenTypeForRestrictions:(id)a0;
+ (id)hashForPasscode:(id)a0 usingMethod:(int)a1 salt:(id)a2 customIterations:(unsigned int)a3;
+ (id)deviceLockedError;
+ (int)unlockScreenTypeForPasscodeCharacteristics:(id)a0 outSimplePasscodeType:(int *)a1;
+ (id)sharedManager;
+ (id)characteristicsDictionaryFromPasscode:(id)a0;
+ (int)unlockScreenTypeForRestrictions:(id)a0 outSimplePasscodeType:(int *)a1;
+ (BOOL)passcode:(id)a0 compliesWithPolicyFromRestrictions:(id)a1 checkHistory:(BOOL)a2 outError:(id *)a3;
+ (id)_localizedDescriptionOfPasscodePolicyFromRestrictions:(id)a0 shouldBeDefault:(BOOL)a1;
+ (id)localizedDescriptionOfDefaultNewPasscodePolicyFromRestrictions:(id)a0;
+ (BOOL)_passcodeCharacteristics:(id)a0 compliesWithPolicyFromRestrictions:(id)a1 outError:(id *)a2;
+ (int)unlockScreenTypeForPasscodeCharacteristics:(id)a0;
+ (id)generateSalt;
+ (id)localizedDescriptionOfPasscodePolicyFromRestrictions:(id)a0;
+ (BOOL)isDeviceUnlocked;
+ (int)defaultNewPasscodeEntrySimplePasscodeType;

- (BOOL)isDeviceLocked;
- (void)lockDeviceImmediately:(BOOL)a0;
- (BOOL)isPasscodeSet;
- (BOOL)unlockDeviceWithPasscode:(id)a0 outError:(id *)a1;
- (void)lockDevice;
- (int)newPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int *)a0;
- (int)newPasscodeEntryScreenType;
- (int)minimumNewPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int *)a0;
- (BOOL)isPasscodeCompliantWithNamedPolicy:(id)a0 outError:(id *)a1;
- (int)currentUnlockScreenType;
- (id)_wrongPasscodeError;
- (BOOL)_checkPasscode:(id)a0 againstHistoryWithRestrictions:(id)a1 outError:(id *)a2;
- (id)_privatePasscodeDict;
- (id)localizedDescriptionOfPasscodePolicy;
- (id)_publicPasscodeDict;
- (id)passcodeExpiryDateOutError:(id *)a0;
- (void)passcodeExpiryDateCompletionBlock:(id /* block */)a0;
- (int)currentUnlockSimplePasscodeType;
- (BOOL)isCurrentPasscodeCompliantOutError:(id *)a0;
- (id)localizedDescriptionOfDefaultNewPasscodePolicy;
- (int)_newPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int *)a0 shouldBeMinimum:(BOOL)a1;
- (int)defaultNewPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int *)a0;
- (BOOL)passcode:(id)a0 compliesWithPolicyCheckHistory:(BOOL)a1 outError:(id *)a2;
- (BOOL)currentPasscodeCompliesWithPolicyFromRestrictions:(id)a0 outError:(id *)a1;
- (id)_passcodeCharacteristics;

@end
