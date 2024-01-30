@class PLLazyObject;

@interface PLDateRangeTitleGenerator : NSObject {
    PLLazyObject *_lazyRecentDateRangeFormatter;
    PLLazyObject *_lazyDateRangeFormatter;
    PLLazyObject *_lazyYearlessDateRangeFormatter;
    PLLazyObject *_lazyMonthYearDateRangeFormatter;
    PLLazyObject *_lazyShortMonthYearDateRangeFormatter;
    PLLazyObject *_lazyYearDateRangeFormatter;
}

- (id)dateRangeFormatterForCategory:(unsigned short)a0 kind:(unsigned short)a1 options:(unsigned long long)a2;
- (id)recentDateRangeFormatter;
- (id)newDateRangeFormatter;
- (id)newMonthYearDateRangeFormatter;
- (id)init;
- (void).cxx_destruct;
- (id)newShortMonthYearDateRangeFormatter;
- (id)newYearDateRangeFormatter;
- (id)newRecentDateRangeFormatter;
- (id)shortMonthYearDateRangeFormatter;
- (id)dateRangeTitleWithStartDate:(id)a0 endDate:(id)a1 category:(unsigned short)a2 kind:(unsigned short)a3;
- (id)newYearlessDateRangeFormatter;
- (id)dateRangeFormatter;
- (id)yearlessDateRangeFormatter;
- (id)monthYearDateRangeFormatter;
- (id)dateRangeTitleWithStartDate:(id)a0 endDate:(id)a1 category:(unsigned short)a2 kind:(unsigned short)a3 options:(unsigned long long)a4;
- (id)yearDateRangeFormatter;

@end
