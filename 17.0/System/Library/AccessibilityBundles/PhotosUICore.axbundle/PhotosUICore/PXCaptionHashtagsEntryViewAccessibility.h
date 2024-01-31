@interface PXCaptionHashtagsEntryViewAccessibility : __PXCaptionHashtagsEntryViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityIdentifier;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (id)_accessibilitySupplementaryFooterViews;
- (unsigned long long)_accessibilityAutomationType;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)_accessibilityLineNumberAndColumnForPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilityRangeForLineNumberAndColumn:(id)a0;
- (BOOL)_accessibilitySupportsHandwriting;
- (id)_accessibilityTextViewTextOperationResponder;
- (void)moreButtonTapped:(id)a0;

@end
