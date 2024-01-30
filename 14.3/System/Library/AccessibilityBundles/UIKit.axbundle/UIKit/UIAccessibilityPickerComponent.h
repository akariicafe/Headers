@class UIPickerView;

@interface UIAccessibilityPickerComponent : UIAccessibilityElement

@property (nonatomic) unsigned long long component;
@property (weak, nonatomic) UIPickerView *picker;

- (BOOL)canBecomeFocused;
- (unsigned long long)_accessibilityAutomationType;
- (double)_accessibilityNumberValue;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (BOOL)_accessibilitySetNativeFocus;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityRowRange;
- (BOOL)_accessibilityIsSpeakThisElement;
- (id)accessibilityUserInputLabels;
- (id)_accessibilityUserTestingChildren;
- (BOOL)accessibilityScroll:(long long)a0;
- (void)accessibilityIncrement;
- (void)accessibilityDecrement;
- (id)_accessibilityScrollStatus;
- (id)accessibilityHint;
- (long long)_accessibilityIndexForPickerString:(id)a0;
- (id)accessibilityValue;
- (long long)_accessibilityPickerType;
- (unsigned long long)_accessibilityDatePickerComponentType;
- (id)_accessibilityDateTimePickerValues;
- (BOOL)_axIsInDatePickerView;
- (id)_accessibilityViewForComponent;
- (BOOL)_isRowDisabledInWebKit:(long long)a0;
- (void)_accessibilityMoveSelection:(long long)a0;
- (id)_axSpeechInputLabelForTimeIntervalCalendarUnit:(unsigned long long)a0;
- (id)_axSpeechInputLabelForDateCalendarUnit:(unsigned long long)a0;

@end
