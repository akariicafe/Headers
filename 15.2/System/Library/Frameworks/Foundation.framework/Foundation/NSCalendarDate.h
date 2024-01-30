@class NSString, NSTimeZone;

@interface NSCalendarDate : NSDate {
    unsigned long long refCount;
    double _timeIntervalSinceReferenceDate;
    NSTimeZone *_timeZone;
    NSString *_formatString;
    void *_reserved;
}

+ (BOOL)supportsSecureCoding;
+ (id)dateWithString:(id)a0 calendarFormat:(id)a1;
+ (id)distantFuture;
+ (id)dateWithNaturalLanguageString:(id)a0 date:(id)a1 locale:(id)a2;
+ (id)dateWithYear:(long long)a0 month:(unsigned long long)a1 day:(unsigned long long)a2 hour:(unsigned long long)a3 minute:(unsigned long long)a4 second:(unsigned long long)a5 timeZone:(id)a6;
+ (id)distantPast;
+ (id)calendarDate;
+ (id)dateWithString:(id)a0 calendarFormat:(id)a1 locale:(id)a2;

- (long long)dayOfYear;
- (id)addTimeInterval:(double)a0;
- (double)timeIntervalSinceReferenceDate;
- (id)initWithString:(id)a0;
- (long long)dayOfWeek;
- (id)dateByAddingYears:(long long)a0 months:(long long)a1 days:(long long)a2 hours:(long long)a3 minutes:(long long)a4 seconds:(long long)a5;
- (id)initWithYear:(long long)a0 month:(unsigned long long)a1 day:(unsigned long long)a2 hour:(unsigned long long)a3 minute:(unsigned long long)a4 second:(unsigned long long)a5 timeZone:(id)a6;
- (void)years:(long long *)a0 months:(long long *)a1 days:(long long *)a2 hours:(long long *)a3 minutes:(long long *)a4 seconds:(long long *)a5 sinceDate:(id)a6;
- (long long)dayOfMonth;
- (long long)monthOfYear;
- (void)encodeWithCoder:(id)a0;
- (id)descriptionWithCalendarFormat:(id)a0 locale:(id)a1;
- (long long)minuteOfHour;
- (id)initWithString:(id)a0 calendarFormat:(id)a1 locale:(id)a2;
- (id)timeZone;
- (id)calendarFormat;
- (id)timeZoneDetail;
- (long long)dayOfCommonEra;
- (long long)secondOfMinute;
- (id)descriptionWithCalendarFormat:(id)a0;
- (id)initWithString:(id)a0 calendarFormat:(id)a1;
- (long long)yearOfCommonEra;
- (id)description;
- (void)setCalendarFormat:(id)a0;
- (id)initWithTimeIntervalSinceReferenceDate:(double)a0;
- (long long)microsecondOfSecond;
- (long long)hourOfDay;
- (id)descriptionWithLocale:(id)a0;
- (id)init;
- (id)replacementObjectForPortCoder:(id)a0;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)setTimeZone:(id)a0;
- (oneway void)release;

@end
