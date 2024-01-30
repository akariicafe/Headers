@interface EKRecurrenceGenerator : CalRecurrenceGenerator

+ (int)_convertEKRecurrenceFrequencyToCalRecurrenceFrequency:(long long)a0;
+ (id)_copyDatesForLunarBirthdayFromDate:(id)a0 toDate:(id)a1 inTimeZone:(id)a2 lunarCalendarString:(id)a3;
+ (id)_daysOfWeekFromICSRule:(id)a0;
+ (BOOL)_isLunarBirthdayRecurrenceRule:(id)a0 lunarCalendarString:(id)a1;
+ (unsigned long long)_weekStartFromICSRule:(id)a0;
+ (id)datesByExpandingRule:(id)a0 fromDate:(id)a1 toDate:(id)a2 inTimezone:(id)a3 isAllDay:(BOOL)a4 lunarCalendarString:(id)a5;

- (BOOL)isOccurrenceDate:(id)a0 validForEvent:(id)a1;
- (id)_copyOccurrenceDatesWithEKEvent:(id)a0 recurrenceRule:(id)a1 startDate:(id)a2 endDate:(id)a3 timeZone:(id)a4 exceptionDates:(id)a5 limit:(long long)a6 adjustDatesForAllDayEvents:(BOOL)a7;
- (void)_prepareForEKRecurrence:(id)a0 forCalendarItem:(id)a1;
- (void)_setupForEKEvent:(id)a0 adjustDatesForAllDayEvents:(BOOL)a1;
- (id)adjustedExceptionDatesFromDates:(id)a0 fromGMTToTimeZone:(id)a1;
- (id)copyOccurrenceDatesWithEKEvent:(id)a0 recurrenceRule:(id)a1 startDate:(id)a2 endDate:(id)a3 timeZone:(id)a4 exceptionDates:(id)a5 limit:(long long)a6;
- (id)copyOccurrenceDatesWithEKEvent:(id)a0 recurrenceRule:(id)a1 startDate:(id)a2 endDate:(id)a3 timeZone:(id)a4 exceptionDates:(id)a5 limit:(long long)a6 adjustDatesForAllDayEvents:(BOOL)a7;
- (id)copyOccurrenceDatesWithEKEvent:(id)a0 recurrenceRule:(id)a1 startDate:(id)a2 endDate:(id)a3 timeZone:(id)a4 limit:(long long)a5;
- (id)copyOccurrenceDatesWithEKEvent:(id)a0 startDate:(id)a1 endDate:(id)a2 timeZone:(id)a3 exceptionDates:(id)a4 limit:(long long)a5 adjustDatesForAllDayEvents:(BOOL)a6;
- (id)copyOccurrenceDatesWithEKEvent:(id)a0 startDate:(id)a1 endDate:(id)a2 timeZone:(id)a3 limit:(long long)a4;
- (id)nextOccurrenceDateWithEKRecurrences:(id)a0 forCalendarItem:(id)a1 exceptionDates:(id)a2 initialDate:(id)a3 afterDate:(id)a4;
- (id)nextOccurrenceDateWithEKRecurrences:(id)a0 forCalendarItem:(id)a1 exceptionDates:(id)a2 initialDate:(id)a3 afterDate:(id)a4 inclusive:(BOOL)a5;
- (id)nextOccurrenceDateWithEKRecurrences:(id)a0 forCalendarItem:(id)a1 initialDate:(id)a2 afterDate:(id)a3;
- (id)nextOccurrenceDateWithEKRecurrences:(id)a0 forCalendarItem:(id)a1 initialDate:(id)a2 afterDate:(id)a3 inclusive:(BOOL)a4;
- (BOOL)occurrenceDate:(id)a0 matchesRecurrenceRule:(id)a1 forEvent:(id)a2 includeDetachedEventsInSeries:(BOOL)a3;

@end
