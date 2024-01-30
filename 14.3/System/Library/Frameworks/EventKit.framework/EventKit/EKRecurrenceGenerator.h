@interface EKRecurrenceGenerator : CalRecurrenceGenerator

+ (int)_convertEKRecurrenceFrequencyToCalRecurrenceFrequency:(long long)a0;

- (id)nextOccurrenceDateWithEKRecurrences:(id)a0 forCalendarItem:(id)a1 exceptionDates:(id)a2 initialDate:(id)a3 afterDate:(id)a4;
- (void)_prepareForEKRecurrence:(id)a0 forCalendarItem:(id)a1;
- (void)_setupForEKEvent:(id)a0 adjustDatesForAllDayEvents:(BOOL)a1;
- (id)copyOccurrenceDatesWithEKEvent:(id)a0 recurrenceRule:(id)a1 startDate:(id)a2 endDate:(id)a3 timeZone:(id)a4 exceptionDates:(id)a5 limit:(long long)a6;
- (id)copyOccurrenceDatesWithEKEvent:(id)a0 startDate:(id)a1 endDate:(id)a2 timeZone:(id)a3 limit:(long long)a4;
- (BOOL)isOccurrenceDate:(id)a0 validForEvent:(id)a1;
- (id)nextOccurrenceDateWithEKRecurrences:(id)a0 forCalendarItem:(id)a1 initialDate:(id)a2 afterDate:(id)a3;
- (id)_copyOccurrenceDatesWithEKEvent:(id)a0 recurrenceRule:(id)a1 startDate:(id)a2 endDate:(id)a3 timeZone:(id)a4 exceptionDates:(id)a5 limit:(long long)a6 adjustDatesForAllDayEvents:(BOOL)a7;
- (BOOL)occurrenceDate:(id)a0 matchesRecurrenceRule:(id)a1 forEvent:(id)a2 includeDetachedEventsInSeries:(BOOL)a3;
- (id)copyOccurrenceDatesWithEKEvent:(id)a0 recurrenceRule:(id)a1 startDate:(id)a2 endDate:(id)a3 timeZone:(id)a4 limit:(long long)a5 adjustDatesForAllDayEvents:(BOOL)a6;
- (id)copyOccurrenceDatesWithEKEvent:(id)a0 recurrenceRule:(id)a1 startDate:(id)a2 endDate:(id)a3 timeZone:(id)a4 limit:(long long)a5;

@end
