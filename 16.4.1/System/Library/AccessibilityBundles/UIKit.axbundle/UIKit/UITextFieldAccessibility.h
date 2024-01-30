@interface UITextFieldAccessibility : __UITextFieldAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityLabel;
- (id)accessibilityAttributedValue;
- (BOOL)keyboardInput:(id)a0 shouldInsertText:(id)a1 isMarkedText:(BOOL)a2;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;
- (void)_clearButtonClicked:(id)a0;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)accessibilityCustomRotors;
- (id)accessibilityDragSourceDescriptors;
- (id)accessibilityDropPointDescriptors;
- (id)accessibilityValue;
- (BOOL)areChildrenFocused;
- (BOOL)fieldEditor:(id)a0 shouldInsertText:(id)a1 replacingRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2;
- (id)_accessibilitySupplementaryHeaderViews;
- (unsigned long long)_accessibilityAutomationType;
- (id)_accessibilitySupplementaryFooterViews;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilitySelectedTextRange;
- (void)_accessibilitySetValue:(id)a0;
- (id)accessibilityPlaceholderValue;
- (id)_accessibilityAttributedTextRetrieval;
- (id)_accessibilityCapturedImages;
- (id)_accessibilityForegroundTextColorAttribute;
- (BOOL)_accessibilityHandwritingAttributeAcceptsContractedBraille;
- (id)_accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (id)_accessibilityNativeFocusPreferredElement;
- (BOOL)_accessibilityOverridesPotentiallyAttributedAPISelector:(SEL)a0;
- (id)_accessibilityTextFieldText;
- (BOOL)_accessibilityAvoidsMockViewContainers;
- (id)_accessibilityGetValue;
- (id)_accessibilityRightButtons;

@end
