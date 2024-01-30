@class NSString, NSTimeZone;

@interface NSCalendarDate : NSDate {
    unsigned long long refCount;
    double _timeIntervalSinceReferenceDate;
    NSTimeZone *_timeZone;
    NSString *_formatString;
    void *_reserved;
}

+ (id)distantPast;
+ (id)dateWithString:(id)a0 calendarFormat:(id)a1 locale:(id)a2;
+ (BOOL)supportsSecureCoding;
+ (id)dateWithNaturalLanguageString:(id)a0 date:(id)a1 locale:(id)a2;
+ (id)dateWithString:(id)a0 calendarFormat:(id)a1;
+ (id)distantFuture;
+ (id)calendarDate;
+ (id)dateWithYear:(long long)a0 month:(unsigned long long)a1 day:(unsigned long long)a2 hour:(unsigned long long)a3 minute:(unsigned long long)a4 second:(unsigned long long)a5 timeZone:(id)a6;

- (void)setTimeZone:(id)a0;
- (id)addTimeInterval:(double)a0;
- (long long)dayOfWeek;
- (id)initWithYear:(long long)a0 month:(unsigned long long)a1 day:(unsigned long long)a2 hour:(unsigned long long)a3 minute:(unsigned long long)a4 second:(unsigned long long)a5 timeZone:(id)a6;
- (id)dateByAddingYears:(long long)a0 months:(long long)a1 days:(long long)a2 hours:(long long)a3 minutes:(long long)a4 seconds:(long long)a5;
- (void)years:(long long *)a0 months:(long long *)a1 days:(long long *)a2 hours:(long long *)a3 minutes:(long long *)a4 seconds:(long long *)a5 sinceDate:(id)a6;
- (id)init;
- (id)initWithTimeIntervalSinceReferenceDate:(double)a0;
- (long long)dayOfMonth;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)hourOfDay;
- (oneway void)release;
- (long long)monthOfYear;
- (id)descriptionWithCalendarFormat:(id)a0 locale:(id)a1;
- (id)initWithString:(id)a0 calendarFormat:(id)a1 locale:(id)a2;
- (void)dealloc;
- (long long)minuteOfHour;
- (id)initWithString:(id)a0;
- (id)calendarFormat;
- (id)timeZoneDetail;
- (long long)dayOfCommonEra;
- (long long)secondOfMinute;
- (id)descriptionWithCalendarFormat:(id)a0;
- (id)initWithString:(id)a0 calendarFormat:(id)a1;
- (double)timeIntervalSinceReferenceDate;
- (id)timeZone;
- (long long)yearOfCommonEra;
- (id)initWithCoder:(id)a0;
- (void)setCalendarFormat:(id)a0;
- (id)description;
- (long long)microsecondOfSecond;
- (long long)dayOfYear;
- (id)descriptionWithLocale:(id)a0;
- (Class)classForCoder;
- (id)replacementObjectForPortCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
