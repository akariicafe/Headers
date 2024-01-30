@interface _UIDatePickerCalendarTimeLabelAccessibility : ___UIDatePickerCalendarTimeLabelAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (void)_accessibilityPerformValidations:(id)a0;

- (unsigned long long)accessibilityTraits;
- (unsigned long long)_accessibilityAutomationType;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)initWithTimeFormat:(id)a0 minuteInterval:(long long)a1;
- (void)pushCurrentStateIntoUIAndNotify;
- (BOOL)isAccessibilityElement;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (id)accessibilityElements;
- (void)dealloc;
- (id)accessibilityLabel;
- (long long)accessibilityContainerType;
- (id)_accessibilityResponderElement;
- (BOOL)_axSelfIsFirstResponder;
- (BOOL)_axIsHoursEditing;
- (id)_accessibilityHourElement;
- (id)_accessibilityMinuteElement;
- (BOOL)_axIsMinutesEditing;
- (void)_accessibilityFocusChanged:(id)a0;

@end
