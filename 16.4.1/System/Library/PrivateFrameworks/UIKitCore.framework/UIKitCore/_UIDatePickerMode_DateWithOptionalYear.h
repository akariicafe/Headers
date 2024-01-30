@interface _UIDatePickerMode_DateWithOptionalYear : _UIDatePickerMode_Date

+ (long long)datePickerMode;

- (BOOL)_shouldEnableValueForRow:(long long)a0 inComponent:(long long)a1 calendarUnit:(unsigned long long)a2;
- (void)_updateSelectedDateComponentsWithNewValueInComponent:(long long)a0 usingSelectionBarValue:(BOOL)a1;
- (id)dateComponentsByRestrictingSelectedComponents:(id)a0 withLastManipulatedColumn:(long long)a1;
- (long long)numberOfRowsForCalendarUnit:(unsigned long long)a0;
- (long long)rowForDate:(id)a0 dateComponents:(id)a1 component:(long long)a2 currentRow:(long long)a3;
- (id)titleForRow:(long long)a0 inComponent:(long long)a1;
- (long long)yearForRow:(long long)a0;

@end
