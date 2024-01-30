@class NSString;

@interface _UIDatePickerMode_Time : _UIDatePickerMode {
    double _timeHourWidth;
    double _timeMinuteWidth;
    double _timeAMPMWidth;
    NSString *_hourFormat;
    NSString *_minuteFormat;
}

+ (long long)datePickerMode;
+ (unsigned long long)extractableCalendarUnits;

- (id)font;
- (double)rowHeight;
- (void).cxx_destruct;
- (BOOL)_shouldEnableValueForRow:(long long)a0 inComponent:(long long)a1 calendarUnit:(unsigned long long)a2;
- (void)_shouldReset:(id)a0;
- (id)dateFormatForCalendarUnit:(unsigned long long)a0;
- (long long)displayedCalendarUnits;
- (id)localizedFormatString;
- (unsigned long long)nextUnitLargerThanUnit:(unsigned long long)a0;
- (unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)a0;
- (void)noteCalendarChanged;
- (long long)numberOfRowsForCalendarUnit:(unsigned long long)a0;
- (void)resetComponentWidths;
- (double)widthForCalendarUnit:(unsigned long long)a0 font:(id)a1 maxWidth:(double)a2;

@end
