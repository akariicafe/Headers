@interface _UIDatePickerMode_TimeInterval : _UIDatePickerMode {
    double _componentWidth;
}

+ (long long)datePickerMode;
+ (unsigned long long)extractableCalendarUnits;

- (id)font;
- (double)rowHeight;
- (BOOL)_shouldEnableValueForRow:(long long)a0 inComponent:(long long)a1 calendarUnit:(unsigned long long)a2;
- (BOOL)areValidDateComponents:(id)a0 comparingUnits:(long long)a1;
- (id)dateComponentsByRestrictingSelectedComponents:(id)a0 withLastManipulatedColumn:(long long)a1;
- (long long)hourForRow:(long long)a0;
- (BOOL)isTimeIntervalMode;
- (id)localizedFormatString;
- (unsigned long long)nextUnitLargerThanUnit:(unsigned long long)a0;
- (unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)a0;
- (long long)numberOfRowsForCalendarUnit:(unsigned long long)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeForCalendarUnit:(unsigned long long)a0;
- (void)resetComponentWidths;
- (long long)titleAlignmentForCalendarUnit:(unsigned long long)a0;
- (id)titleForRow:(long long)a0 inComponent:(long long)a1;
- (void)updateDateForNewDateRange;
- (long long)valueForDate:(id)a0 dateComponents:(id)a1 calendarUnit:(unsigned long long)a2;
- (double)widthForCalendarUnit:(unsigned long long)a0 font:(id)a1 maxWidth:(double)a2;

@end
