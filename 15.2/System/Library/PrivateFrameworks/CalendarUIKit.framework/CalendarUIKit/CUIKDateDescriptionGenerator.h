@class NSMutableDictionary, NSDateFormatter, NSObject;
@protocol OS_dispatch_queue;

@interface CUIKDateDescriptionGenerator : CUIKDescriptionGenerator {
    NSObject<OS_dispatch_queue> *_serialFormatterEditQueue;
    NSDateFormatter *_dayFormatter;
    NSDateFormatter *_abbrevDayFormatter;
    NSDateFormatter *_timeFormatter;
    NSDateFormatter *_standardTimeFormatter;
    NSDateFormatter *_customFormatter;
    NSDateFormatter *_fullStyleDateFormatter;
    NSDateFormatter *_dayOfWeekFormatter;
    NSMutableDictionary *_longFormatters;
}

+ (id)sharedGenerator;
+ (id)_dateBeforeTodayLastWeekFormatStringForDayOfWeek:(long long)a0 generateLowercaseString:(BOOL)a1;
+ (id)_dateBeforeTodayThisWeekFormatStringForDayOfWeek:(long long)a0 generateLowercaseString:(BOOL)a1;
+ (id)_dateAfterTodayNextWeekFormatStringForDayOfWeek:(long long)a0 generateLowercaseString:(BOOL)a1;
+ (id)_dateAfterTodayThisWeekFormatStringForDayOfWeek:(long long)a0 generateLowercaseString:(BOOL)a1;

- (id)timeFormatter;
- (void).cxx_destruct;
- (id)init;
- (id)dayFormatter;
- (id)timeStringForDate:(id)a0 inTimeZone:(id)a1;
- (id)dateStringForDate:(id)a0 allDay:(BOOL)a1 shortFormat:(BOOL)a2;
- (id)dateStringForDate:(id)a0 allDay:(BOOL)a1 standalone:(BOOL)a2 shortFormat:(BOOL)a3;
- (id)_customFormatter;
- (id)standardTimeFormatter;
- (id)stringForDate:(id)a0 withLongFormatString:(id)a1 useAbbreviatedFormats:(BOOL)a2 lowerCase:(BOOL)a3;
- (void)_initializeFormatters;
- (id)_dateFormatterWithLongFormat:(id)a0;
- (id)_stringForDate:(id)a0 relativeToReferenceDate:(id)a1 withLongFormatString:(id)a2 useAbbreviatedFormats:(BOOL)a3 lowerCase:(BOOL)a4;
- (id)abbreviatedDayFormatter;
- (id)formatterForLongFormat:(id)a0;
- (id)fullStyleDateFormatter;
- (id)_timeStringForDate:(id)a0;
- (id)dateStringForDate:(id)a0 relativeToReferenceDate:(id)a1 allDay:(BOOL)a2 standalone:(BOOL)a3 shortFormat:(BOOL)a4;
- (id)_dateStringForDate:(id)a0 relativeToReferenceDate:(id)a1 allDay:(BOOL)a2 shortFormat:(BOOL)a3 lowercase:(BOOL)a4;
- (id)dayOfWeekFormatter;

@end
