@interface _UIDatePickerMode_TimeInterval : _UIDatePickerMode {
    double _componentWidth;
}

+ (unsigned long long)extractableCalendarUnits;
+ (long long)datePickerMode;

- (id)dateComponentsByRestrictingSelectedComponents:(id)a0 withLastManipulatedColumn:(long long)a1;
- (id)font;
- (double)rowHeight;
- (long long)hourForRow:(long long)a0;
- (BOOL)isTimeIntervalMode;
- (void)resetComponentWidths;
- (double)widthForCalendarUnit:(unsigned long long)a0 font:(id)a1 maxWidth:(double)a2;
- (id)localizedFormatString;
- (long long)numberOfRowsForCalendarUnit:(unsigned long long)a0;
- (unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)a0;
- (unsigned long long)nextUnitLargerThanUnit:(unsigned long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeForCalendarUnit:(unsigned long long)a0;
- (long long)valueForDate:(id)a0 dateComponents:(id)a1 calendarUnit:(unsigned long long)a2;
- (long long)titleAlignmentForCalendarUnit:(unsigned long long)a0;
- (id)titleForRow:(long long)a0 inComponent:(long long)a1;
- (BOOL)_shouldEnableValueForRow:(long long)a0 inComponent:(long long)a1 calendarUnit:(unsigned long long)a2;
- (void)updateDateForNewDateRange;
- (BOOL)areValidDateComponents:(id)a0 comparingUnits:(long long)a1;

@end
