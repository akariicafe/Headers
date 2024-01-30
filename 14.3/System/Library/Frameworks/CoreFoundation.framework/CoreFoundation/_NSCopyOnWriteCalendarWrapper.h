@class NSCalendar, _NSRefcountedPthreadMutex;

@interface _NSCopyOnWriteCalendarWrapper : NSCalendar {
    NSCalendar *cal;
    _NSRefcountedPthreadMutex *_lock;
    BOOL needsToCopy;
}

+ (id)currentCalendar;

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
- (id)_initWithCalendar:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)_copyWrappedCalendar;
- (void)dealloc;
- (BOOL)nextWeekendStartDate:(out id *)a0 interval:(out double *)a1 options:(unsigned long long)a2 afterDate:(id)a3;
- (void)enumerateDatesStartingAfterDate:(id)a0 matchingComponents:(id)a1 options:(unsigned long long)a2 usingBlock:(id /* block */)a3;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })minimumRangeOfUnit:(unsigned long long)a0;
- (void)setLocale:(id)a0;
- (void)setGregorianStartDate:(id)a0;
- (id)timeZone;
- (void)setMinimumDaysInFirstWeek:(unsigned long long)a0;
- (unsigned long long)hash;
- (id)_init;
- (BOOL)rangeOfUnit:(unsigned long long)a0 startDate:(id *)a1 interval:(double *)a2 forDate:(id)a3;
- (id)dateFromComponents:(id)a0;
- (unsigned long long)firstWeekday;

@end
