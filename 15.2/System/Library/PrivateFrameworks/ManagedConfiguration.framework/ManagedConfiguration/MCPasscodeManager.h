@interface MCPasscodeManager : NSObject

+ (id)deviceLockedError;
+ (int)unlockScreenTypeForPasscodeCharacteristics:(id)a0;
+ (BOOL)isDeviceUnlocked;
+ (id)hashForPasscode:(id)a0 usingMethod:(int)a1 salt:(id)a2 customIterations:(unsigned int)a3;
+ (int)unlockScreenTypeForRestrictions:(id)a0;
+ (id)generateSalt;
+ (id)characteristicsDictionaryFromPasscode:(id)a0;
+ (id)localizedDescriptionOfPasscodePolicyFromRestrictions:(id)a0;
+ (id)sharedManager;
+ (id)_localizedDescriptionOfPasscodePolicyFromRestrictions:(id)a0 shouldBeDefault:(BOOL)a1;
+ (BOOL)passcode:(id)a0 compliesWithPolicyFromRestrictions:(id)a1 checkHistory:(BOOL)a2 outError:(id *)a3;
+ (int)unlockScreenTypeForPasscodeCharacteristics:(id)a0 outSimplePasscodeType:(int *)a1;
+ (int)unlockScreenTypeForRestrictions:(id)a0 outSimplePasscodeType:(int *)a1;
+ (id)localizedDescriptionOfDefaultNewPasscodePolicyFromRestrictions:(id)a0;
+ (int)defaultNewPasscodeEntrySimplePasscodeType;
+ (BOOL)_passcodeCharacteristics:(id)a0 compliesWithPolicyFromRestrictions:(id)a1 outError:(id *)a2;

- (void)lockDevice;
- (void)lockDeviceImmediately:(BOOL)a0;
- (int)newPasscodeEntryScreenType;
- (id)passcodeExpiryDateOutError:(id *)a0;
- (BOOL)isPasscodeCompliantWithNamedPolicy:(id)a0 outError:(id *)a1;
- (int)newPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int *)a0;
- (int)defaultNewPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int *)a0;
- (id)localizedDescriptionOfDefaultNewPasscodePolicy;
- (id)_publicPasscodeDict;
- (int)currentUnlockSimplePasscodeType;
- (BOOL)isPasscodeSet;
- (BOOL)isDeviceLocked;
- (BOOL)_checkPasscode:(id)a0 againstHistoryWithRestrictions:(id)a1 outError:(id *)a2;
- (void)passcodeExpiryDateCompletionBlock:(id /* block */)a0;
- (BOOL)passcode:(id)a0 compliesWithPolicyCheckHistory:(BOOL)a1 outError:(id *)a2;
- (int)_newPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int *)a0 shouldBeMinimum:(BOOL)a1;
- (int)minimumNewPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int *)a0;
- (BOOL)isCurrentPasscodeCompliantOutError:(id *)a0;
- (id)_privatePasscodeDictWithOutError:(id *)a0;
- (BOOL)unlockDeviceWithPasscode:(id)a0 outError:(id *)a1;
- (id)_wrongPasscodeError;
- (int)currentUnlockScreenType;
- (BOOL)currentPasscodeCompliesWithPolicyFromRestrictions:(id)a0 outError:(id *)a1;
- (id)localizedDescriptionOfPasscodePolicy;

@end
