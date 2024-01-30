@interface TPSKeyboardUtilities : NSObject

+ (id)enabledDictationLanguages;
+ (BOOL)isDictationEnabled;
+ (BOOL)isDictationSelectedForLanguage:(id)a0;
+ (id)installedInputModes;
+ (BOOL)isHandwritingEnabledForInputMode:(id)a0;
+ (id)_variantForInputMode:(id)a0;
+ (BOOL)isInputModeInstalledForLanguage:(id)a0;
+ (BOOL)isExtendedSuggestionSupportedForInputMode:(id)a0;

@end
