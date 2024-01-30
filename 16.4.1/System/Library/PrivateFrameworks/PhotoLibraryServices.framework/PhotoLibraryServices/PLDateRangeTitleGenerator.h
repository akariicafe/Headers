@class PLLazyObject, NSLocale;

@interface PLDateRangeTitleGenerator : NSObject {
    PLLazyObject *_lazyRecentDateRangeFormatter;
    PLLazyObject *_lazyDateRangeFormatter;
    PLLazyObject *_lazyYearlessDateRangeFormatter;
    PLLazyObject *_lazyMonthYearDateRangeFormatter;
    PLLazyObject *_lazyShortMonthYearDateRangeFormatter;
    PLLazyObject *_lazyYearDateRangeFormatter;
    NSLocale *_locale;
}

- (id)newMonthYearDateRangeFormatter;
- (id)newRecentDateRangeFormatter;
- (id)yearDateRangeFormatter;
- (id)dateRangeFormatter;
- (id)monthYearDateRangeFormatter;
- (id)newShortMonthYearDateRangeFormatter;
- (id)dateRangeTitleWithStartDate:(id)a0 endDate:(id)a1 category:(unsigned short)a2 kind:(unsigned short)a3 options:(unsigned long long)a4;
- (id)newDateRangeFormatter;
- (id)dateRangeTitleWithStartDate:(id)a0 endDate:(id)a1 category:(unsigned short)a2 kind:(unsigned short)a3;
- (id)shortMonthYearDateRangeFormatter;
- (id)recentDateRangeFormatter;
- (id)dateRangeFormatterForCategory:(unsigned short)a0 kind:(unsigned short)a1 options:(unsigned long long)a2;
- (id)newYearDateRangeFormatter;
- (id)init;
- (id)yearlessDateRangeFormatter;
- (id)initWithLocale:(id)a0;
- (void).cxx_destruct;
- (id)newYearlessDateRangeFormatter;

@end
