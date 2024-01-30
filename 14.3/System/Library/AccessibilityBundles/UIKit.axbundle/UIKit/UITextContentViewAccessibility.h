@interface UITextContentViewAccessibility : __UITextContentViewAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (BOOL)keyboardInput:(id)a0 shouldInsertText:(id)a1 isMarkedText:(BOOL)a2;
- (BOOL)isAccessibilityElement;
- (unsigned long long)_accessibilityAutomationType;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void)keyboardInputChangedSelection:(id)a0;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityCustomRotors;
- (struct CGPoint { double x0; double x1; })accessibilityActivationPoint;
- (id)_accessibilityAttributedTextRetrieval;
- (void)_accessibilitySetValue:(id)a0;
- (id)_accessibilitySupplementaryHeaderViews;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)keyboardInputChanged:(id)a0;
- (BOOL)_accessibilitySupportsActivateAction;
- (BOOL)accessibilityActivate;
- (id)_accessibilityAttributedValueForRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; } *)a0;
- (id)_accessibilityDataDetectorScheme:(struct CGPoint { double x0; double x1; })a0;
- (id)accessibilityValue;
- (BOOL)keyboardInput:(id)a0 shouldReplaceTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (id)_accessibilityTextViewTextOperationResponder;
- (id)_accessibilityCapturedImages;
- (BOOL)_accessibilityShouldAnnounceFontInfo;
- (void)_accessibilitySetShouldUpdateCache:(BOOL)a0;
- (BOOL)_accessibilityShouldUpdateTextCache;

@end
