@interface UISearchTextFieldAccessibility : __UISearchTextFieldAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (BOOL)_delegateShouldChangeCharactersInTextStorageRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementString:(id)a1 delegateCares:(BOOL *)a2;
- (void)_setClearButtonImage:(id)a0 forState:(unsigned long long)a1;
- (void)_accessibilityLoadAccessibilityInformation;

@end
