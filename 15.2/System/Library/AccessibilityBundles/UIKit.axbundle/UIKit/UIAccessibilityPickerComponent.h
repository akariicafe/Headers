@class UIPickerView;

@interface UIAccessibilityPickerComponent : UIAccessibilityElement {
    unsigned long long _component;
    UIPickerView *_picker;
}

- (BOOL)canBecomeFocused;
- (unsigned long long)accessibilityTraits;
- (id)_accessibilityUserTestingChildren;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityRowRange;
- (unsigned long long)_accessibilityAutomationType;
- (double)_accessibilityNumberValue;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityUserInputLabels;
- (BOOL)accessibilityScroll:(long long)a0;
- (void).cxx_destruct;
- (id)accessibilityHint;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)accessibilityValue;
- (id)accessibilityLabel;
- (BOOL)_accessibilityIsSpeakThisElement;
- (id)_accessibilityScrollStatus;
- (long long)_accessibilityIndexForPickerString:(id)a0;
- (long long)_accessibilityPickerType;
- (unsigned long long)_accessibilityDatePickerComponentType;
- (id)_accessibilityDateTimePickerValues;
- (BOOL)_accessibilitySetNativeFocus;

@end
