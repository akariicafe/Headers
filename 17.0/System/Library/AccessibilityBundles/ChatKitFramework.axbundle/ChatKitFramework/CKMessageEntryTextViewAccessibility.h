@interface CKMessageEntryTextViewAccessibility : __CKMessageEntryTextViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)setAttributedText:(id)a0;
- (void)startTimer:(id)a0;
- (id)accessibilityHint;
- (BOOL)isAccessibilityElement;
- (void)layoutSubviews;
- (id)accessibilityCustomRotors;
- (id)accessibilityTextualContext;
- (id)_accessibilitySupplementaryHeaderViews;
- (void)updateTextView;
- (id)accessibilityPlaceholderValue;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibleNonSupplementarySubviews;
- (void)stopTimer:(id)a0;
- (void)_axShowOverlayWithEmojiElement:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_axBoundingRectForGlyphRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)_axCreateEmojiRotor;
- (id)_axEmojiCandidates;
- (id)_axEmojiCandidatesFromEmojiKit;
- (id)_axEmojiRotor;
- (void)_axRemoveElementFromEmojiCandidates:(id)a0;
- (void)_axReplaceEmojiWithElement:(id)a0;
- (void)_axSetEmojiCandidates:(id)a0;
- (void)_axSetEmojiRotor:(id)a0;
- (void)_axUpdateEmojiCandidates;

@end
