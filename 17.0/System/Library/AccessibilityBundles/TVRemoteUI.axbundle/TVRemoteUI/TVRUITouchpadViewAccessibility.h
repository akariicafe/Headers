@interface TVRUITouchpadViewAccessibility : __TVRUITouchpadViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityHint;
- (BOOL)accessibilityActivate;
- (BOOL)_accessibilitySupportsActivateAction;
- (void)_accessibilityFocusChanged:(id)a0;
- (BOOL)_accessibilityIsDirectTouching;
- (void)_accessibilitySetIsDirectTouching:(BOOL)a0;

@end
