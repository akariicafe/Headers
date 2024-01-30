@interface CalDateLocalization : NSObject

+ (id)ICUFormats;
+ (BOOL)hasAMPM;
+ (id)ICUFormatForKey:(id)a0;
+ (id)_hourSymbolInFormat:(id)a0;
+ (id)calendarDayFormatter;
+ (struct __CFDateFormatter { } *)dateFormatterForKey:(id)a0;
+ (id)dateFormatterForKey:(id)a0 formatString:(id)a1;
+ (id)dateFormatters;
+ (BOOL)dateIsWeekend:(id)a0;
+ (id)dateStringRepresentationForEventCompontentsStartDate:(id)a0 endDate:(id)a1 allDay:(BOOL)a2 timeZone:(id)a3;
+ (id)formatKeyForHourString;
+ (void)generateAdditionalPrecodedFormatters:(id)a0;
+ (void)generateDerivedTimeFormats:(id)a0;
+ (void)generateLocalizedDateTimeFormats;
+ (void)generatePreferedOrders;
+ (void)generateStandardFormatters:(id)a0;
+ (void)initializeFormatters;
+ (id)longStringForDateAndTime:(id)a0 inTimeZone:(id)a1;
+ (void)rebuildFormatters;
+ (void)rebuildWeekendDays;
+ (void)setupFormat:(id)a0 forKey:(id)a1 locale:(id)a2;
+ (void)setupFormatTemplate:(id)a0 forKey:(id)a1 locale:(id)a2;
+ (void)setupFormatter:(struct __CFDateFormatter { } *)a0 forKey:(id)a1;
+ (id)sharedDateFormatter;
+ (BOOL)shouldUseHourMinutesWithoutAMPMForHours;
+ (id)sizeOrderedAllDateFormatsWithoutYear;
+ (id)sizeOrderedDateFormats;
+ (id)sizeOrderedDateFormatsWithYear;
+ (id)sizeOrderedDateFormatsWithoutYear;
+ (BOOL)uses24HourTime;
+ (BOOL)weekdayIsWeekend:(long long)a0;
+ (id)weekendDays;

@end
