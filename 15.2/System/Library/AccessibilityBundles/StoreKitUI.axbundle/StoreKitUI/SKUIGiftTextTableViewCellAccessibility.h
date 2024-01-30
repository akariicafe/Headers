@interface SKUIGiftTextTableViewCellAccessibility : __SKUIGiftTextTableViewCellAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityValue;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)accessibilityLabel;
- (id)_accessibilityLineNumberAndColumnForPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilityRangeForLineNumberAndColumn:(id)a0;
- (id)_accessibilityTextViewTextOperationResponder;

@end
