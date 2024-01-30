@class NSString;

@interface _UIDatePickerMode_Date : _UIDatePickerMode {
    double _dateYearWidth;
    double _dateMonthWidth;
    double _dateDayWidth;
    NSString *_yearFormat;
    NSString *_monthFormat;
    NSString *_dayFormat;
}

+ (long long)datePickerMode;
+ (unsigned long long)extractableCalendarUnits;

- (id)localizedFormatString;
- (void).cxx_destruct;
- (void)_shouldReset:(id)a0;
- (void)noteCalendarChanged;
- (void)resetComponentWidths;
- (id)dateFormatForCalendarUnit:(unsigned long long)a0;
- (double)widthForCalendarUnit:(unsigned long long)a0 font:(id)a1 maxWidth:(double)a2;
- (long long)numberOfRowsForCalendarUnit:(unsigned long long)a0;
- (unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)a0;
- (unsigned long long)nextUnitLargerThanUnit:(unsigned long long)a0;
- (id)_dateForYearRow:(long long)a0;
- (long long)displayedCalendarUnits;
- (long long)rowForDate:(id)a0 dateComponents:(id)a1 component:(long long)a2 currentRow:(long long)a3;
- (BOOL)_shouldEnableValueForRow:(long long)a0 inComponent:(long long)a1 calendarUnit:(unsigned long long)a2;

@end
