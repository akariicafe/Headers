@interface PXCaptionHashtagsEntryViewAccessibility : __PXCaptionHashtagsEntryViewAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)isAccessibilityElement;
- (unsigned long long)_accessibilityAutomationType;
- (BOOL)_accessibilitySupportsHandwriting;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (void)moreButtonTapped:(id)a0;
- (id)_accessibilitySupplementaryFooterViews;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)accessibilityIdentifier;
- (id)_accessibilityLineNumberAndColumnForPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilityRangeForLineNumberAndColumn:(id)a0;
- (id)accessibilityValue;
- (id)_accessibilityTextViewTextOperationResponder;

@end
