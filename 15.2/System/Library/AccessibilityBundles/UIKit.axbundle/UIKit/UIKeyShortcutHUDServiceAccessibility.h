@interface UIKeyShortcutHUDServiceAccessibility : __UIKeyShortcutHUDServiceAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (void)handleKeyboardEvent:(id)a0;
- (void)dismissHUDIfNeeded;

@end
