@interface UISegmentAccessibility : __UISegmentAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityIdentifier;
- (unsigned long long)accessibilityTraits;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityRowRange;
- (unsigned long long)_accessibilityAutomationType;
- (id)accessibilityLanguage;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (BOOL)_accessibilityIsSpeakThisElement;
- (BOOL)_accessibilityHasNativeFocus;

@end
