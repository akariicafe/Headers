@interface UITextViewAccessibility : __UITextViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityLabel;
- (void)setSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (BOOL)keyboardInput:(id)a0 shouldReplaceTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (id)accessibilityAttributedValue;
- (long long)accessibilityContainerType;
- (BOOL)canBecomeFocused;
- (void)setAttributedText:(id)a0;
- (BOOL)keyboardInput:(id)a0 shouldInsertText:(id)a1 isMarkedText:(BOOL)a2;
- (void)dealloc;
- (id)_accessibilityUserTestingChildren;
- (id)accessibilityElements;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)resignFirstResponder;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (BOOL)accessibilityActivate;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityCustomRotors;
- (id)accessibilityDragSourceDescriptors;
- (id)accessibilityDropPointDescriptors;
- (id)accessibilityValue;
- (void)setAttributedPlaceholder:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_accessibilityBoundsForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)_accessibilitySupplementaryHeaderViews;
- (unsigned long long)_accessibilityAutomationType;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilitySelectedTextRange;
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
