@interface SBUIPasscodeLockViewBaseAccessibility : __SBUIPasscodeLockViewBaseAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (BOOL)becomeFirstResponder;
- (BOOL)_accessibilityActivateKeyboardReturnKey;
- (unsigned long long)_accessibilityHandwritingAttributeAllowedCharacterSets;
- (unsigned long long)_accessibilityHandwritingAttributePreferredCharacterSet;
- (BOOL)_accessibilityHandwritingAttributeShouldEchoCharacter;
- (BOOL)_accessibilityHandwritingAttributeShouldPlayKeyboardSecureClickSound;
- (BOOL)_accessibilityHasDeletableText;
- (void)_accessibilityInsertText:(id)a0;
- (void)_accessibilityReplaceCharactersAtCursor:(unsigned long long)a0 withString:(id)a1;
- (BOOL)_accessibilitySupportsHandwriting;
- (BOOL)_accessibilitySupportsTextInsertionAndDeletion;
- (void)_resetForFailedPasscode:(BOOL)a0;
- (void)_setPasscodeLockViewState:(long long)a0 animated:(BOOL)a1;
- (void)_updateStatusTextForBioEvent:(unsigned long long)a0 animated:(BOOL)a1;
- (BOOL)_accessibilityEntryFieldIsFirstResponder;

@end
