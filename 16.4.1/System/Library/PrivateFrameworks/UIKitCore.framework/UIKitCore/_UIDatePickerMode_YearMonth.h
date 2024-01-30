@interface _UIDatePickerMode_YearMonth : _UIDatePickerMode_Date

+ (long long)datePickerMode;
+ (unsigned long long)extractableCalendarUnits;

- (id)localizedFormatString;
- (unsigned long long)nextUnitLargerThanUnit:(unsigned long long)a0;
- (unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)a0;

@end
