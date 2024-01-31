@interface TPNumberPadAccessibility : __TPNumberPadAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (BOOL)canBecomeFocused;
- (BOOL)shouldGroupAccessibilityChildren;
- (BOOL)_accessibilityIsScannerGroup;
- (id)_accessibilityScannerGroupElements;
- (unsigned long long)_accessibilityScannerGroupTraits;
- (BOOL)_accessibilityProvidesScannerGroupElements;

@end
