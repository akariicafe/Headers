@interface __NSCFCalendar : NSCalendar

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)calendarWithIdentifier:(id)a0;

- (void)setTimeZone:(id)a0;
- (void)setFirstWeekday:(unsigned long long)a0;
- (id)locale;
- (id)components:(unsigned long long)a0 fromDate:(id)a1 toDate:(id)a2 options:(unsigned long long)a3;
- (id)gregorianStartDate;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })maximumRangeOfUnit:(unsigned long long)a0;
- (unsigned long long)ordinalityOfUnit:(unsigned long long)a0 inUnit:(unsigned long long)a1 forDate:(id)a2;
- (unsigned long long)minimumDaysInFirstWeek;
- (id)dateByAddingComponents:(id)a0 toDate:(id)a1 options:(unsigned long long)a2;
- (id)components:(unsigned long long)a0 fromDate:(id)a1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeOfUnit:(unsigned long long)a0 inUnit:(unsigned long long)a1 forDate:(id)a2;
- (BOOL)isDateInWeekend:(id)a0;
- (id)calendarIdentifier;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (oneway void)release;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (BOOL)nextWeekendStartDate:(out id *)a0 interval:(out double *)a1 options:(unsigned long long)a2 afterDate:(id)a3;
- (void)enumerateDatesStartingAfterDate:(id)a0 matchingComponents:(id)a1 options:(unsigned long long)a2 usingBlock:(id /* block */)a3;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })minimumRangeOfUnit:(unsigned long long)a0;
- (unsigned long long)retainCount;
- (void)setLocale:(id)a0;
- (void)setGregorianStartDate:(id)a0;
- (id)timeZone;
- (void)setMinimumDaysInFirstWeek:(unsigned long long)a0;
- (unsigned long long)hash;
- (id)retain;
- (BOOL)rangeOfUnit:(unsigned long long)a0 startDate:(id *)a1 interval:(double *)a2 forDate:(id)a3;
- (BOOL)isEqual:(id)a0;
- (id)dateFromComponents:(id)a0;
- (id)initWithCalendarIdentifier:(id)a0;
- (unsigned long long)firstWeekday;

@end
