@interface MCPasscodeManager : NSObject

+ (BOOL)isDeviceUnlocked;
+ (int)unlockScreenTypeForRestrictions:(id)a0 outSimplePasscodeType:(int *)a1;
+ (int)unlockScreenTypeForPasscodeCharacteristics:(id)a0;
+ (BOOL)passcode:(id)a0 compliesWithPolicyFromRestrictions:(id)a1 checkHistory:(BOOL)a2 outError:(id *)a3;
+ (id)hashForPasscode:(id)a0 usingMethod:(int)a1 salt:(id)a2 customIterations:(unsigned int)a3;
+ (BOOL)_passcodeCharacteristics:(id)a0 compliesWithPolicyFromRestrictions:(id)a1 outError:(id *)a2;
+ (int)defaultNewPasscodeEntrySimplePasscodeType;
+ (int)unlockScreenTypeForPasscodeCharacteristics:(id)a0 outSimplePasscodeType:(int *)a1;
+ (id)localizedDescriptionOfPasscodePolicyFromRestrictions:(id)a0;
+ (id)sharedManager;
+ (int)unlockScreenTypeForRestrictions:(id)a0;
+ (id)deviceLockedError;
+ (id)localizedDescriptionOfDefaultNewPasscodePolicyFromRestrictions:(id)a0;
+ (id)_localizedDescriptionOfPasscodePolicyFromRestrictions:(id)a0 shouldBeDefault:(BOOL)a1;
+ (id)generateSalt;
+ (id)characteristicsDictionaryFromPasscode:(id)a0;

- (id)passcodeExpiryDateOutError:(id *)a0;
- (void)lockDevice;
- (BOOL)isPasscodeSet;
- (int)newPasscodeEntryScreenType;
- (int)minimumNewPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int *)a0;
- (void)lockDeviceImmediately:(BOOL)a0;
- (BOOL)isDeviceLocked;
- (id)_publicPasscodeDict;
- (void)passcodeExpiryDateCompletionBlock:(id /* block */)a0;
- (int)newPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int *)a0;
- (int)currentUnlockSimplePasscodeType;
- (id)_privatePasscodeDictWithOutError:(id *)a0;
- (id)localizedDescriptionOfDefaultNewPasscodePolicy;
- (BOOL)isPasscodeCompliantWithNamedPolicy:(id)a0 outError:(id *)a1;
- (int)_newPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int *)a0 shouldBeMinimum:(BOOL)a1;
- (BOOL)_checkPasscode:(id)a0 againstHistoryWithRestrictions:(id)a1 outError:(id *)a2;
- (int)defaultNewPasscodeEntryScreenTypeWithOutSimplePasscodeType:(int *)a0;
- (BOOL)currentPasscodeCompliesWithPolicyFromRestrictions:(id)a0 outError:(id *)a1;
- (BOOL)unlockDeviceWithPasscode:(id)a0 outError:(id *)a1;
- (id)localizedDescriptionOfPasscodePolicy;
- (id)_wrongPasscodeError;
- (int)currentUnlockScreenType;
- (BOOL)isCurrentPasscodeCompliantOutError:(id *)a0;
- (BOOL)passcode:(id)a0 compliesWithPolicyCheckHistory:(BOOL)a1 outError:(id *)a2;

@end
