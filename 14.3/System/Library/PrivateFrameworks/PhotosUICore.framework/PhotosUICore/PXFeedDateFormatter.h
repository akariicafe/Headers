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

- (BOOL)isDateInToday:(id)a0;
- (id)stringFromDate:(id)a0;
- (id)init;
- (void)_currentLocaleChanged:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_prepare;
- (BOOL)isDateInFuture:(id)a0;
- (id)initWithLocale:(id)a0 ignoreWhitelist:(BOOL)a1;
- (id)_completeRelativeStringForDate:(id)a0 dateFormatter:(id)a1;
- (BOOL)_canSubstitueDateStringsWithLocale:(id)a0;
- (void)_calendarDayChanged:(id)a0;
- (void)_invalidate;

@end
