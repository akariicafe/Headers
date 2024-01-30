@class PLLazyObject;

@interface PLDateRangeTitleGenerator : NSObject {
    PLLazyObject *_lazyRecentDateRangeFormatter;
    PLLazyObject *_lazyDateRangeFormatter;
    PLLazyObject *_lazyYearlessDateRangeFormatter;
    PLLazyObject *_lazyMonthYearDateRangeFormatter;
    PLLazyObject *_lazyShortMonthYearDateRangeFormatter;
    PLLazyObject *_lazyYearDateRangeFormatter;
}

- (id)newRecentDateRangeFormatter;
- (id)newMonthYearDateRangeFormatter;
- (id)yearDateRangeFormatter;
- (id)newYearDateRangeFormatter;
- (id)monthYearDateRangeFormatter;
- (id)yearlessDateRangeFormatter;
- (id)shortMonthYearDateRangeFormatter;
- (void).cxx_destruct;
- (id)recentDateRangeFormatter;
- (id)init;
- (id)newShortMonthYearDateRangeFormatter;
- (id)dateRangeFormatterForCategory:(unsigned short)a0 kind:(unsigned short)a1 options:(unsigned long long)a2;
- (id)newYearlessDateRangeFormatter;
- (id)newDateRangeFormatter;
- (id)dateRangeFormatter;
- (id)dateRangeTitleWithStartDate:(id)a0 endDate:(id)a1 category:(unsigned short)a2 kind:(unsigned short)a3;
- (id)dateRangeTitleWithStartDate:(id)a0 endDate:(id)a1 category:(unsigned short)a2 kind:(unsigned short)a3 options:(unsigned long long)a4;

@end
