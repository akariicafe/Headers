@interface JTFormatters : NSObject

+ (id)dateFormatter;
+ (id)dateFormatterLongStyle;
+ (id)dateFormatterMonthDay;
+ (id)dateFormatterDayOfWeekMonthDayYear;
+ (id)dateFormatterDebugDate;
+ (id)dateComponentsFormatterHourMinSec;
+ (id)dateComponentsFormatterMinSec;

@end
