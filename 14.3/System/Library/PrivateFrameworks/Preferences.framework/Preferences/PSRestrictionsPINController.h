@interface PSRestrictionsPINController : DevicePINController

+ (BOOL)settingEnabled;

- (id)init;
- (BOOL)simplePIN;
- (int)pinLength;
- (BOOL)isNumericPIN;
- (struct __CFString { } *)defaultsID;
- (id)stringsBundle;
- (struct __CFString { } *)failedAttemptsKey;
- (struct __CFString { } *)blockTimeIntervalKey;
- (struct __CFString { } *)blockedStateKey;
- (BOOL)pinIsAcceptable:(id)a0 outError:(id *)a1;
- (id)pinInstructionsPrompt;
- (id)pinInstructionsPromptFont;
- (void)setPIN:(id)a0;
- (BOOL)validatePIN:(id)a0;
- (id)title;

@end
