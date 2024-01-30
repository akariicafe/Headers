@interface PXCaptionHashtagsEntryViewAccessibility : __PXCaptionHashtagsEntryViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityIdentifier;
- (unsigned long long)accessibilityTraits;
- (unsigned long long)_accessibilityAutomationType;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)accessibilityLabel;
- (void)moreButtonTapped:(id)a0;
- (id)_accessibilitySupplementaryFooterViews;
- (id)_accessibilityLineNumberAndColumnForPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilityRangeForLineNumberAndColumn:(id)a0;
- (id)_accessibilityTextViewTextOperationResponder;
- (BOOL)_accessibilitySupportsHandwriting;

@end
