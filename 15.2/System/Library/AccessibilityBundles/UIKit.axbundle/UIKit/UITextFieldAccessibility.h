@interface UITextFieldAccessibility : __UITextFieldAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)keyboardInput:(id)a0 shouldInsertText:(id)a1 isMarkedText:(BOOL)a2;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityDragSourceDescriptors;
- (id)accessibilityDropPointDescriptors;
- (unsigned long long)_accessibilityAutomationType;
- (id)accessibilityAttributedValue;
- (id)accessibilityCustomRotors;
- (BOOL)isAccessibilityElement;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityValue;
- (BOOL)areChildrenFocused;
- (BOOL)fieldEditor:(id)a0 shouldInsertText:(id)a1 replacingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)accessibilityPlaceholderValue;
- (void)_accessibilitySetValue:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_clearButtonClicked:(id)a0;
- (id)accessibilityLabel;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)_accessibilitySupplementaryHeaderViews;
- (id)_accessibilitySupplementaryFooterViews;
- (BOOL)_accessibilityOverridesPotentiallyAttributedAPISelector:(SEL)a0;
- (id)_accessibilityCapturedImages;
- (id)_accessibilityForegroundTextColorAttribute;
- (BOOL)_accessibilityHandwritingAttributeAcceptsContractedBraille;
- (id)_accessibilityTextFieldText;
- (id)_accessibilityNativeFocusPreferredElement;
- (id)_accessibilityAttributedTextRetrieval;
- (id)_accessibilityRightButtons;
- (BOOL)_accessibilityAvoidsMockViewContainers;
- (id)_accessibilityGetValue;

@end
