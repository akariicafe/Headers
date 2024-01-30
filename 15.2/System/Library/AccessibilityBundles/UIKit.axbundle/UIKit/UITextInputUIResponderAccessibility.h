@interface UITextInputUIResponderAccessibility : __UITextInputUIResponderAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)_moveRight:(BOOL)a0 withHistory:(id)a1;
- (id)_moveLeft:(BOOL)a0 withHistory:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_accessibilityBoundsForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_updateSelectionWithTextRange:(id)a0 withAffinityDownstream:(BOOL)a1;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (id)accessibilityValue;
- (BOOL)resignFirstResponder;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)becomeFirstResponder;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilityRawRangeForUITextRange:(id)a0;
- (id)_accessibilityLineNumberAndColumnForPoint:(struct CGPoint { double x0; double x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilityRangeForLineNumberAndColumn:(id)a0;
- (id)_accessibilityTextRangeFromNSRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilityLineRangeForPosition:(unsigned long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilityCharacterRangeForPosition:(unsigned long long)a0;
- (unsigned long long)_accessibilityPositionInDirection:(long long)a0 offset:(unsigned long long)a1 forPosition:(unsigned long long)a2;
- (id)_accessibilityTextRectsForSpeakThisStringRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 string:(id)a1 wantsSentences:(BOOL)a2;
- (id)_accessibilityAlternativesForTextAtPosition:(unsigned long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilityVisibleTextRange;
- (id)_accessibilityTextViewTextOperationResponder;
- (long long)_accessibilityLineStartPosition;
- (long long)_accessibilityLineEndPosition;
- (BOOL)_accessibilityHandlesTabKey;
- (id)_accessibilitySpeakThisString;
- (BOOL)_accessibilityInsertTextWithAlternatives:(id)a0;
- (id)_accessibilityTextRectsForSpeakThisStringRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)_accessibilityBeginningOfDocument;
- (long long)_accessibilityOffsetFromPosition:(id)a0 toPosition:(id)a1;
- (long long)_accessibilityTextInputLinePosition:(BOOL)a0;
- (id)_accessibilityPositionFromPosition:(id)a0 offset:(long long)a1;
- (id)_accessibilityEndOfDocument;
- (id)_accessibilityTextRectsForSpeakThisStringRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 wantsSentences:(BOOL)a1;
- (id)_accessibilityFocusItemForResponder;
- (BOOL)_axShouldDrawFocusAroundFirstResponder;

@end
