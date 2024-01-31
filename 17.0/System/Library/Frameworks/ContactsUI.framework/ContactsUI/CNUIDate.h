@interface CNUIDate : NSObject

+ (void)localeDidChange:(id)a0;
+ (void)initialize;
+ (id)GMTComponentsFromDate:(id)a0 sourceCalendar:(id)a1;
+ (id)componentsFromDate:(id)a0 sourceCalendar:(id)a1 destinationCalendar:(id)a2;
+ (id)currentCalendarGMT;
+ (id)dateByNormalizingToGMT:(id)a0;
+ (id)dateFromComponents:(id)a0 destinationCalendar:(id)a1;
+ (id)gregorianCalendarGMT;
+ (BOOL)isYearlessComponents:(id)a0;
+ (id)yearlessComponentsFromDate:(id)a0 calendar:(id)a1;
+ (id)yearlessGregorianComponentsFromGMTDate:(id)a0;

@end
