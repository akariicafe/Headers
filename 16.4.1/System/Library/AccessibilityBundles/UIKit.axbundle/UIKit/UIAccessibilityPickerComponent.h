@class UIPickerView;

@interface UIAccessibilityPickerComponent : UIAccessibilityElement {
    unsigned long long _component;
    UIPickerView *_picker;
}

- (id)accessibilityLabel;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (BOOL)canBecomeFocused;
- (id)_accessibilityUserTestingChildren;
- (id)accessibilityHint;
- (id)accessibilityUserInputLabels;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (void).cxx_destruct;
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
