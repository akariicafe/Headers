@interface CDBRecurrenceGenerator : CalRecurrenceGenerator

- (void)_prepareForCalRecurrence:(void *)a0 locked:(BOOL)a1;
- (id)nextOccurrenceDateWithCalRecurrences:(id)a0 exceptionDates:(id)a1 initialDate:(id)a2 afterDate:(id)a3;
- (void)_setupForCalEvent:(void *)a0 locked:(BOOL)a1;
- (id)copyOccurrenceDatesWithInitialDate:(id)a0 calRecurrences:(id)a1 rangeStart:(id)a2 rangeEnd:(id)a3 timeZone:(id)a4;
- (id)copyOccurrenceDatesWithCalEvent:(void *)a0 startDate:(id)a1 endDate:(id)a2 timeZone:(id)a3 limit:(long long)a4 locked:(BOOL)a5;
- (id)computeRecurrenceEndDateForCalEvent:(void *)a0 recurrenceRule:(void *)a1 locked:(BOOL)a2;
- (id)_copyOccurrenceDatesWithBirthdayEvent:(void *)a0 startDate:(id)a1 endDate:(id)a2 timeZone:(id)a3 limit:(long long)a4 locked:(BOOL)a5;

@end
