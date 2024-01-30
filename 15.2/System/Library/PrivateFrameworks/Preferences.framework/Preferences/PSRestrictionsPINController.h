@interface PSRestrictionsPINController : DevicePINController

+ (BOOL)settingEnabled;

- (void)setPIN:(id)a0;
- (id)title;
- (BOOL)simplePIN;
- (int)pinLength;
- (struct __CFString { } *)defaultsID;
- (BOOL)isNumericPIN;
- (id)stringsBundle;
- (struct __CFString { } *)failedAttemptsKey;
- (struct __CFString { } *)blockTimeIntervalKey;
- (struct __CFString { } *)blockedStateKey;
- (BOOL)pinIsAcceptable:(id)a0 outError:(id *)a1;
- (id)init;
- (id)pinInstructionsPrompt;
- (id)pinInstructionsPromptFont;
- (BOOL)validatePIN:(id)a0;

@end
