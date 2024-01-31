@interface DevicePINPaneAccessibility : __DevicePINPaneAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)_accessibilityHandwritingAttributeAllowedCharacterSets;
- (unsigned long long)_accessibilityHandwritingAttributePreferredCharacterSet;
- (BOOL)_accessibilityHandwritingAttributeShouldEchoCharacter;
- (BOOL)_accessibilityHasDeletableText;
- (void)_accessibilityInsertText:(id)a0;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_accessibilityReplaceCharactersAtCursor:(unsigned long long)a0 withString:(id)a1;
- (id)_accessibilityResponderElement;
- (BOOL)_accessibilitySupportsHandwriting;
- (BOOL)_accessibilitySupportsTextInsertionAndDeletion;
- (void)setPINPolicyString:(id)a0 visible:(BOOL)a1;
- (void)slideToNewPasscodeField:(BOOL)a0 withKeyboard:(BOOL)a1;

@end
