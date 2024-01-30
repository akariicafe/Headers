@interface CNUIDate : NSObject

+ (void)initialize;
+ (void)localeDidChange:(id)a0;
+ (id)currentCalendarGMT;
+ (id)gregorianCalendarGMT;
+ (id)GMTComponentsFromDate:(id)a0 sourceCalendar:(id)a1;
+ (id)componentsFromDate:(id)a0 sourceCalendar:(id)a1 destinationCalendar:(id)a2;
+ (id)dateByNormalizingToGMT:(id)a0;
+ (id)yearlessGregorianComponentsFromGMTDate:(id)a0;
+ (id)yearlessComponentsFromDate:(id)a0 calendar:(id)a1;
+ (id)dateFromComponents:(id)a0 destinationCalendar:(id)a1;
+ (BOOL)isYearlessComponents:(id)a0;

@end
