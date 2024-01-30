@interface UITextFieldAccessibility : __UITextFieldAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)keyboardInput:(id)a0 shouldInsertText:(id)a1 isMarkedText:(BOOL)a2;
- (id)_accessibilityPlaceholderValue:(BOOL)a0;
- (BOOL)isAccessibilityElement;
- (unsigned long long)_accessibilityAutomationType;
- (BOOL)_accessibilityHandwritingAttributeAcceptsContractedBraille;
- (id)_accessibilityTextFieldText;
- (id)accessibilityDropPointDescriptors;
- (id)accessibilityDragSourceDescriptors;
- (void)_clearButtonClicked:(id)a0;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (BOOL)fieldEditor:(id)a0 shouldInsertText:(id)a1 replacingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)_accessibilityNativeFocusPreferredElement;
- (id)accessibilityCustomRotors;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)accessibilityPlaceholderValue;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityAttributedValue;
- (id)_accessibilityAttributedTextRetrieval;
- (void)_accessibilitySetValue:(id)a0;
- (id)_accessibilitySupplementaryHeaderViews;
- (id)_accessibilitySupplementaryFooterViews;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)_accessibilityOverridesPotentiallyAttributedAPISelector:(SEL)a0;
- (BOOL)areChildrenFocused;
- (id)accessibilityValue;
- (id)_accessibilityCapturedImages;
- (id)_accessibilityRightButtons;
- (BOOL)_accessibilityAvoidsMockViewContainers;
- (id)_accessibilityTextSelectionRectWithLargestVisualRangeFromCandidates:(id)a0;
- (BOOL)_axShowsLeadingView;
- (BOOL)_axShowsTrailingView;
- (BOOL)_axTextFieldIsHidden;
- (id)_accessibilityLeftButtons;
- (id)_accessibilityGetValue;

@end
