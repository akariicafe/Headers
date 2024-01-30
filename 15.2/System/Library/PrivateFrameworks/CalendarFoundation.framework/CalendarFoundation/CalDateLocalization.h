@interface CalDateLocalization : NSObject

+ (BOOL)hasAMPM;
+ (id)sharedDateFormatter;
+ (id)weekendDays;
+ (BOOL)uses24HourTime;
+ (void)initializeFormatters;
+ (void)rebuildFormatters;
+ (void)rebuildWeekendDays;
+ (void)generateLocalizedDateTimeFormats;
+ (BOOL)weekdayIsWeekend:(long long)a0;
+ (id)ICUFormats;
+ (BOOL)shouldUseHourMinutesWithoutAMPMForHours;
+ (void)setupFormatter:(struct __CFDateFormatter { } *)a0 forKey:(id)a1;
+ (void)setupFormat:(id)a0 forKey:(id)a1 locale:(id)a2;
+ (void)setupFormatTemplate:(id)a0 forKey:(id)a1 locale:(id)a2;
+ (id)_hourSymbolInFormat:(id)a0;
+ (void)generateStandardFormatters:(id)a0;
+ (void)generateAdditionalPrecodedFormatters:(id)a0;
+ (void)generateDerivedTimeFormats:(id)a0;
+ (void)generatePreferedOrders;
+ (id)dateFormatters;
+ (id)calendarDayFormatter;
+ (id)dateFormatterForKey:(id)a0 formatString:(id)a1;
+ (BOOL)dateIsWeekend:(id)a0;
+ (id)formatKeyForHourString;
+ (id)sizeOrderedDateFormats;
+ (id)sizeOrderedDateFormatsWithYear;
+ (id)sizeOrderedDateFormatsWithoutYear;
+ (id)sizeOrderedAllDateFormatsWithoutYear;
+ (id)ICUFormatForKey:(id)a0;
+ (struct __CFDateFormatter { } *)dateFormatterForKey:(id)a0;
+ (id)intervalStringFromDate:(id)a0 toDate:(id)a1 withFormat:(id)a2 options:(int)a3;

@end
