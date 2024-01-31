@class UIPickerView;

@interface UIAccessibilityPickerComponent : UIAccessibilityElement {
    unsigned long long _component;
    UIPickerView *_picker;
}

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (BOOL)canBecomeFocused;
- (void)accessibilityIncrement;
- (id)_accessibilityUserTestingChildren;
- (void).cxx_destruct;
- (void)accessibilityDecrement;
- (id)accessibilityHint;
- (id)accessibilityUserInputLabels;
- (BOOL)accessibilityScroll:(long long)a0;
- (id)accessibilityValue;
- (unsigned long long)_accessibilityAutomationType;
- (double)_accessibilityNumberValue;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityRowRange;
- (unsigned long long)_accessibilityDatePickerComponentType;
- (id)_accessibilityDateTimePickerValues;
- (long long)_accessibilityIndexForPickerString:(id)a0;
- (BOOL)_accessibilityIsSpeakThisElement;
- (long long)_accessibilityPickerType;
- (id)_accessibilityScrollStatus;
- (BOOL)_accessibilitySetNativeFocus;

@end
