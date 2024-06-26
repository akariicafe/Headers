@class NSDateComponents, NSCalendar, NSDate;

@interface EKCalendarDate : NSObject <NSCopying, NSMutableCopying> {
    NSCalendar *_calendar;
    NSDate *_date;
    NSDateComponents *_components;
    NSDateComponents *_originalComponents;
}

+ (id)calendarDateWithDateComponents:(id)a0 timeZone:(id)a1;
+ (id)calendarDateWithYear:(long long)a0 month:(long long)a1 day:(long long)a2 timeZone:(id)a3;
+ (id)calendarDateWithDate:(id)a0 timeZone:(id)a1;
+ (id)calendarDateWithAbsoluteTime:(double)a0 timeZone:(id)a1;

- (id)allComponents;
- (id)calendarDateByAddingComponents:(id)a0;
- (long long)second;
- (int)dayOfWeek;
- (id)calendarDateByAddingGregorianUnits:(struct { int x0; int x1; int x2; int x3; int x4; double x5; })a0;
- (id)components;
- (long long)year;
- (long long)month;
- (long long)day;
- (long long)differenceInYears:(id)a0;
- (id)calendarDateForWeekWithWeekStart:(int)a0;
- (id)calendarDateByAddingHours:(long long)a0;
- (id)calendarDateByAddingSeconds:(long long)a0;
- (id)initWithAbsoluteTime:(double)a0 timeZone:(id)a1;
- (id)initWithDate:(id)a0 calendar:(id)a1;
- (void).cxx_destruct;
- (id)initWithDate:(id)a0 components:(id)a1 timeZone:(id)a2;
- (id)calendarDateInTimeZone:(id)a0;
- (id)initWithDate:(id)a0 originalComponents:(id)a1 components:(id)a2 calendar:(id)a3;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)earlierDate:(id)a0;
- (id)calendarDateByAddingMonths:(long long)a0;
- (long long)hour;
- (id)initWithDateComponents:(id)a0 calendar:(id)a1;
- (id)weekComponents;
- (id)calendarDateByComponentwiseAddingComponents:(id)a0;
- (id)dayTimeComponents;
- (long long)era;
- (id)calendarDateWithDate:(id)a0;
- (id)date;
- (long long)differenceInDays:(id)a0;
- (long long)compare:(id)a0;
- (id)timeZone;
- (id)initWithDate:(id)a0 timeZone:(id)a1;
- (id)calendarDateByAddingDays:(long long)a0;
- (id)differenceAsComponentwiseDateComponents:(id)a0;
- (id)calendarDateByAddingYears:(long long)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)differenceAsDateComponents:(id)a0 units:(unsigned long long)a1;
- (id)calendar;
- (id)calendarDateForMonth;
- (id)componentsWithoutTime;
- (id)calendarDateForYear;
- (id)timeComponents;
- (unsigned long long)weekOfYear;
- (id)initWithDate:(id)a0 originalComponents:(id)a1 components:(id)a2 timeZone:(id)a3;
- (unsigned long long)weeksInYear;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)dayOfYear;
- (id)laterDate:(id)a0;
- (unsigned long long)daysInYear;
- (id)calendarDateByComponentwiseAddingSeconds:(long long)a0;
- (id)calendarDateForDay;
- (double)differenceInSeconds:(id)a0;
- (long long)minute;
- (id)calendarDateForEndOfDay;
- (id)calendarDateByAddingMinutes:(long long)a0;
- (unsigned long long)daysInMonth;
- (id)calendarDateForEndOfYear;
- (id)initWithDateComponents:(id)a0 timeZone:(id)a1;
- (id)calendarDateForEndOfWeekWithWeekStart:(int)a0;
- (long long)secondsFromGMT;
- (id)calendarDateForEndOfMonth;
- (id)calendarDateForWeekWithWeekStart:(int)a0 daysSinceWeekStart:(long long *)a1;
- (long long)differenceInMonths:(id)a0;
- (double)absoluteTime;
- (struct { int x0; int x1; int x2; int x3; int x4; double x5; })differenceAsGregorianUnits:(id)a0 flags:(unsigned long long)a1;
- (id)calendarDateByAddingWeeks:(long long)a0;
- (id)dayComponents;

@end
