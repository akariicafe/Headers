@interface _UIDatePickerMode_YearMonth : _UIDatePickerMode_Date

+ (unsigned long long)extractableCalendarUnits;
+ (long long)datePickerMode;

- (id)localizedFormatString;
- (unsigned long long)nextUnitSmallerThanUnit:(unsigned long long)a0;
- (unsigned long long)nextUnitLargerThanUnit:(unsigned long long)a0;

@end
