@interface _UIDatePickerCalendarTimeLabelAccessibility : ___UIDatePickerCalendarTimeLabelAccessibility_super

+ (id)safeCategoryTargetClassName;
+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;

- (id)accessibilityElements;
- (BOOL)isAccessibilityElement;
- (long long)accessibilityContainerType;
- (void)dealloc;
- (id)_accessibilityResponderElement;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)initWithTimeFormat:(id)a0 minuteInterval:(long long)a1;
- (id)accessibilityLabel;
- (void)_pushCurrentStateIntoUIAndNotify;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (BOOL)_axIsHoursEditing;
- (id)_accessibilityHourElement;
- (id)_accessibilityMinuteElement;
- (BOOL)_axSelfIsFirstResponder;
- (BOOL)_axIsMinutesEditing;
- (id)_accessibilityInternalData;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilityInternalSelectedTextRange;
- (void)_accessibilitySetInternalSelectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)_accessibilityFocusChanged:(id)a0;

@end
