@interface UITextViewAccessibility : __UITextViewAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)keyboardInput:(id)a0 shouldReplaceTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (void)setSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)setContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (BOOL)keyboardInput:(id)a0 shouldInsertText:(id)a1 isMarkedText:(BOOL)a2;
- (BOOL)canBecomeFocused;
- (void)setAttributedPlaceholder:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_accessibilityBoundsForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)accessibilityTraits;
- (id)_accessibilityUserTestingChildren;
- (id)accessibilityDragSourceDescriptors;
- (id)accessibilityDropPointDescriptors;
- (unsigned long long)_accessibilityAutomationType;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityAttributedValue;
- (void)setAttributedText:(id)a0;
- (id)accessibilityCustomRotors;
- (BOOL)accessibilityActivate;
- (BOOL)isAccessibilityElement;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityValue;
- (BOOL)resignFirstResponder;
- (id)accessibilityPlaceholderValue;
- (void)_accessibilitySetValue:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)accessibilityElements;
- (void)dealloc;
- (id)accessibilityLabel;
- (long long)accessibilityContainerType;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)_accessibilitySupplementaryHeaderViews;
- (id)_accessibilityInternalTextLinks;
- (BOOL)_accessibilityOverridesPotentiallyAttributedAPISelector:(SEL)a0;
- (id)_accessibilityAttributedValueForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0;
- (id)_accessibilityDataDetectorScheme:(struct CGPoint { double x0; double x1; })a0;
- (double)_accessibilityFontSize;
- (BOOL)_allowCustomActionHintSpeakOverride;
- (id)_accessibilityForegroundTextColorAttribute;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)_accessibilityTextViewShouldBreakUpParagraphs;
- (id)_accessibilityAttributedTextRetrieval;
- (id)_accessibilityGetValue;
- (void)_axDidFinishDataDetectorURLification:(id)a0;
- (id)_accessibilityGetValue:(BOOL)a0;

@end
