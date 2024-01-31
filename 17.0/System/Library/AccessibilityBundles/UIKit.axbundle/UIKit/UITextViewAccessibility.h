@interface UITextViewAccessibility : __UITextViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityLabel;
- (void)setSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)dealloc;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityAttributedValue;
- (id)accessibilityElements;
- (void)setAttributedText:(id)a0;
- (BOOL)canBecomeFocused;
- (BOOL)resignFirstResponder;
- (BOOL)keyboardInput:(id)a0 shouldReplaceTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (long long)accessibilityContainerType;
- (id)_accessibilityUserTestingChildren;
- (BOOL)keyboardInput:(id)a0 shouldInsertText:(id)a1 isMarkedText:(BOOL)a2;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityActivate;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityCustomRotors;
- (id)accessibilityDragSourceDescriptors;
- (id)accessibilityDropPointDescriptors;
- (id)accessibilityValue;
- (void)setAttributedPlaceholder:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_accessibilityBoundsForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)_accessibilityAutomationType;
- (id)_accessibilitySupplementaryHeaderViews;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_accessibilitySetValue:(id)a0;
- (id)accessibilityPlaceholderValue;
- (id)_accessibilityInternalTextLinks;
- (id)_accessibilityAttributedTextRetrieval;
- (id)_accessibilityAttributedValueForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0;
- (id)_accessibilityDataDetectorScheme:(struct CGPoint { double x0; double x1; })a0;
- (double)_accessibilityFontSize;
- (id)_accessibilityForegroundTextColorAttribute;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)_accessibilityOverridesPotentiallyAttributedAPISelector:(SEL)a0;
- (BOOL)_accessibilityTextViewShouldBreakUpParagraphs;
- (BOOL)_allowCustomActionHintSpeakOverride;
- (id)_accessibilityGetValue;
- (id)_accessibilityGetValue:(BOOL)a0;
- (void)_axDidFinishDataDetectorURLification:(id)a0;

@end
