@class NSCalendar, NSString, NSDateFormatter, NSDate, NSLocale;

@interface PXFeedDateFormatter : NSObject {
    BOOL _prepared;
    NSLocale *_locale;
    BOOL _ignoreWhitelist;
    NSCalendar *_calendar;
    NSDate *_today;
    NSDate *_yesterday;
    NSString *_todayString;
    NSString *_yesterdayString;
    NSDateFormatter *_dateFormatterForCurrentYear;
    NSDateFormatter *_dateFormatterForNoncurrentYears;
}

+ (id)defaultFeedSectionDateFormatter;

- (void)_invalidate;
- (void)_prepare;
- (BOOL)isDateInToday:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)stringFromDate:(id)a0;
- (void)_currentLocaleChanged:(id)a0;
- (void)dealloc;
- (id)initWithLocale:(id)a0 ignoreWhitelist:(BOOL)a1;
- (BOOL)isDateInFuture:(id)a0;
- (id)_completeRelativeStringForDate:(id)a0 dateFormatter:(id)a1;
- (BOOL)_canSubstitueDateStringsWithLocale:(id)a0;
- (void)_calendarDayChanged:(id)a0;

@end
