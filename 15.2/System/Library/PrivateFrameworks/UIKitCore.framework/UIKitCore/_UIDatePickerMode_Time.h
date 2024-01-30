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

- (double)rowHeight;
- (id)localizedFormatString;
- (void).cxx_destruct;
- (id)font;
- (void)_shouldReset:(id)a0;
- (void)noteCalendarChanged;
- (void)resetComponentWidths;
- (id)dateFormatForCalendarUnit:(unsigned long long)a0;
- (double)widthForCalendarUnit:(unsigned long long)a0 font:(id)a1 maxWidth:(double)a2;
- (long long)numberOfRowsForCalendarUnit:(unsigned long long)a0;
- (unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)a0;
- (unsigned long long)nextUnitLargerThanUnit:(unsigned long long)a0;
- (long long)displayedCalendarUnits;
- (BOOL)_shouldEnableValueForRow:(long long)a0 inComponent:(long long)a1 calendarUnit:(unsigned long long)a2;

@end
