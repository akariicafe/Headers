@interface _UIDatePickerMode_MonthDay : _UIDatePickerMode_Date

+ (unsigned long long)extractableCalendarUnits;
+ (long long)datePickerMode;

- (unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)a0;
- (unsigned long long)nextUnitLargerThanUnit:(unsigned long long)a0;

@end
