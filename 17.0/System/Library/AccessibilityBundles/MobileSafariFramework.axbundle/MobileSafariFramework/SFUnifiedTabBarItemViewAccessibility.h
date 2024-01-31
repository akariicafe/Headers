@interface SFUnifiedTabBarItemViewAccessibility : __SFUnifiedTabBarItemViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setExtensionButtonConfiguration:(id)a0;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (id)_accessibilitySupplementaryFooterViews;
- (id)_accessibilitySupplementaryHeaderViews;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_accessibilityReplaceCharactersAtCursor:(unsigned long long)a0 withString:(id)a1;
- (id)_accessibilityResponderElement;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilityRowRange;
- (BOOL)_accessibilityServesAsFirstResponder;
- (id)_accessibilityTextViewTextOperationResponder;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilityVisibleTextRange;
- (void)_accessibilityUpdateWebExtensionLabels;
- (BOOL)_axSearchFieldIsActive;

@end
