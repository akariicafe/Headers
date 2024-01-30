@class NSTimeZone, NSDateFormatter, NSLocale;

@interface PLDateRangeFormatter : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    long long _preset;
    NSLocale *_locale;
    BOOL _useLocalDates;
    NSTimeZone *_timeZone;
    BOOL _includeDayNumbers;
    BOOL _includeDayNumbersWhenMonthsDiffer;
    BOOL _useRelativeDayFormatting;
    BOOL _useShortMonths;
    BOOL _useShortDaysInRanges;
    BOOL _useTime;
    BOOL _yearOnly;
    BOOL _monthOnly;
    BOOL _timeOnly;
    BOOL _omitYear;
    BOOL _monthWithDelimiterAndYear;
    NSDateFormatter *_sameDayDateFormatter;
    NSDateFormatter *_sameDayNoYearDateFormatter;
    NSDateFormatter *_dayOfTheWeekDateFormatter;
    NSDateFormatter *_yearDateFormatter;
    NSDateFormatter *_monthDateFormatter;
    NSDateFormatter *_monthYearDateFormatter;
    NSDateFormatter *_relativeDateFormatter;
    struct UDateIntervalFormat { } *_monthDayIntervalFormat;
    struct UDateIntervalFormat { } *_monthDayNoYearIntervalFormat;
    struct UDateIntervalFormat { } *_differentMonthDayIntervalFormat;
    struct UDateIntervalFormat { } *_differentMonthDayNoYearIntervalFormat;
    struct UDateIntervalFormat { } *_dayOfTheWeekIntervalFormat;
    struct UDateIntervalFormat { } *_timeIntervalFormat;
    struct UDateIntervalFormat { } *_monthIntervalFormat;
    struct UDateIntervalFormat { } *_monthYearIntervalFormat;
    struct UDateIntervalFormat { } *_yearIntervalFormat;
}

@property (nonatomic) long long preset;
@property (retain, nonatomic) NSLocale *locale;
@property (nonatomic) BOOL useLocalDates;

+ (id)autoupdatingFormatterWithPreset:(long long)a0;

- (id)stringFromDate:(id)a0;
- (id)stringFromDate:(id)a0 toDate:(id)a1 currentDate:(id)a2;
- (struct UDateIntervalFormat { } *)_monthDayIntervalFormat;
- (id)init;
- (void)_significantTimeChange:(id)a0;
- (void).cxx_destruct;
- (struct UDateIntervalFormat { } *)_monthYearIntervalFormat;
- (void)_systemTimeZoneDidChange:(id)a0;
- (id)_dayOfTheWeekDateFormatter;
- (id)_monthDateFormatter;
- (void)dealloc;
- (struct UDateIntervalFormat { } *)_monthIntervalFormat;
- (struct UDateIntervalFormat { } *)_yearIntervalFormat;
- (id)initWithPreset:(long long)a0;
- (struct UDateIntervalFormat { } *)_monthDayNoYearIntervalFormat;
- (id)_dayTemplate;
- (void)_currentLocaleDidChange:(id)a0;
- (struct UDateIntervalFormat { } *)_differentMonthDayNoYearIntervalFormat;
- (void)_handlePresetDidChange;
- (id)_dayDifferentMonthsTemplate;
- (id)_monthYearDateFormatter;
- (id)_relativeDateFormatter;
- (id)_yearDateFormatter;
- (void)_handleUseLocalDatesDidChange;
- (id)_sameDayNoYearDateFormatter;
- (id)_stringFromDate:(id)a0 toDate:(id)a1 currentDate:(id)a2;
- (void)_resetFormatters;
- (id)_sameMonthTemplate;
- (struct UDateIntervalFormat { } *)_timeIntervalFormat;
- (id)_sameDayDateFormatter;
- (struct UDateIntervalFormat { } *)_differentMonthDayIntervalFormat;
- (struct UDateIntervalFormat { } *)_dayOfTheWeekIntervalFormat;
- (id)localTimeZone;
- (id)stringFromDate:(id)a0 toDate:(id)a1;

@end
