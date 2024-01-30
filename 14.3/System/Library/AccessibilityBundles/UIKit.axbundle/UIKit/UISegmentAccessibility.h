@interface UISegmentAccessibility : __UISegmentAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)isAccessibilityElement;
- (unsigned long long)_accessibilityAutomationType;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityRowRange;
- (BOOL)_accessibilityIsSpeakThisElement;
- (id)accessibilityIdentifier;
- (id)accessibilityLanguage;
- (id)accessibilityHint;
- (BOOL)_accessibilityHasNativeFocus;
- (id)accessibilityValue;
- (id)_axLabelFromInfoObject:(id)a0;

@end
