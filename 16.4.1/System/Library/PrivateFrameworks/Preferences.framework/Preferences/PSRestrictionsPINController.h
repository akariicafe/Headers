@interface PSRestrictionsPINController : DevicePINController

+ (BOOL)settingEnabled;

- (BOOL)validatePIN:(id)a0;
- (void)setPIN:(id)a0;
- (id)init;
- (id)title;
- (id)pinInstructionsPrompt;
- (id)stringsBundle;
- (struct __CFString { } *)blockedStateKey;
- (struct __CFString { } *)blockTimeIntervalKey;
- (struct __CFString { } *)defaultsID;
- (struct __CFString { } *)failedAttemptsKey;
- (BOOL)isNumericPIN;
- (id)pinInstructionsPromptFont;
- (BOOL)pinIsAcceptable:(id)a0 outError:(id *)a1;
- (int)pinLength;
- (BOOL)simplePIN;

@end
