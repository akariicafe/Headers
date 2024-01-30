@interface TPSKeyboardUtilities : NSObject

+ (BOOL)isInputModeInstalledForLanguage:(id)a0;
+ (id)_variantForInputMode:(id)a0;
+ (id)installedInputModes;
+ (BOOL)isHandwritingEnabledForInputMode:(id)a0;
+ (BOOL)isExtendedSuggestionSupportedForInputMode:(id)a0;

@end
