@class NSString, NSDateFormatter;

@interface _UIDatePickerMode_DateAndTime : _UIDatePickerMode {
    BOOL _weekdayLast;
    double _wmdWeekMonthDayWidth;
    double _wmdHourWidth;
    double _wmdMinuteWidth;
    double _wmdAMPMWidth;
    double _wmdWeekdayWidth;
    NSString *_weekdayFormat;
    NSString *_monthDayFormat;
    NSString *_hourFormat;
    NSString *_minuteFormat;
    NSDateFormatter *_relativeFormatter;
    NSDateFormatter *_weekdayFormatter;
}

+ (long long)datePickerMode;
+ (unsigned long long)extractableCalendarUnits;

- (unsigned long long *)elements;
- (void).cxx_destruct;
- (id)_dateForWeekMonthDayRow:(long long)a0;
- (void)_resetBaseDateComponentsIfNecessaryFromDate:(id)a0;
- (BOOL)_shouldEnableValueForRow:(long long)a0 inComponent:(long long)a1 calendarUnit:(unsigned long long)a2;
- (BOOL)_shouldEnableWeekMonthDayForRow:(long long)a0;
- (void)_shouldReset:(id)a0;
- (void)_takeBaseDateComponentsFromDate:(id)a0;
- (id)baseDateComponents;
- (double)componentWidthForDateTimeCalendarUnit:(unsigned long long)a0 font:(id)a1 maxWidth:(double)a2;
- (id)dateForRow:(long long)a0 inCalendarUnit:(unsigned long long)a1;
- (id)dateFormatForCalendarUnit:(unsigned long long)a0;
- (long long)displayedCalendarUnits;
- (BOOL)isWeekdayLast;
- (void)loadDate:(id)a0 animated:(BOOL)a1;
- (id)localizedFormatString;
- (unsigned long long)nextUnitLargerThanUnit:(unsigned long long)a0;
- (unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)a0;
- (void)noteCalendarChanged;
- (long long)numberOfRowsForCalendarUnit:(unsigned long long)a0;
- (id)relativeFormatter;
- (void)resetComponentWidths;
- (long long)rowForDate:(id)a0 dateComponents:(id)a1 component:(long long)a2 currentRow:(long long)a3;
- (id)titleForRow:(long long)a0 inComponent:(long long)a1;
- (void)updateEnabledStateOfViewForRow:(long long)a0 inComponent:(long long)a1;
- (id)viewForRow:(long long)a0 inComponent:(long long)a1 reusingView:(id)a2;
- (id)weekdayFormatter;
- (double)weekdayWidth;
- (double)widthForCalendarUnit:(unsigned long long)a0 font:(id)a1 maxWidth:(double)a2;

@end
