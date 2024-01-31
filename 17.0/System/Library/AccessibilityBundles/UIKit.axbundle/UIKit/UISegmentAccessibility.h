@interface UISegmentAccessibility : __UISegmentAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityIdentifier;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLanguage;
- (id)accessibilityValue;
- (unsigned long long)_accessibilityAutomationType;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityRowRange;
- (BOOL)_accessibilityHasNativeFocus;
- (BOOL)_accessibilityIsSpeakThisElement;
- (id)_accessibilitySegmentedControlParent;

@end
