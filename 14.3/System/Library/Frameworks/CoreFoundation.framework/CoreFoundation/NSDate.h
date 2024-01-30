@interface NSDate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) double timeIntervalSinceReferenceDate;

+ (id)dateWithNaturalLanguageString:(id)a0 locale:(id)a1;
+ (id)dateWithNaturalLanguageString:(id)a0 date:(id)a1 locale:(id)a2;
+ (id)dateWithNaturalLanguageString:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)dateWithString:(id)a0;
+ (id)dateWithDate:(id)a0;
+ (id)dateWithTimeIntervalSinceReferenceDate:(double)a0;
+ (id)dateWithTimeIntervalSince1970:(double)a0;
+ (id)dateWithTimeIntervalSinceNow:(double)a0;
+ (id)dateWithTimeInterval:(double)a0 sinceDate:(id)a1;
+ (id)distantPast;
+ (id)date;
+ (double)timeIntervalSinceReferenceDate;
+ (id)distantFuture;
+ (id)now;

- (id)descriptionWithCalendarFormat:(id)a0 timeZone:(id)a1 locale:(id)a2;
- (id)dateWithCalendarFormat:(id)a0 timeZone:(id)a1;
- (BOOL)_web_isToday;
- (id)initWithCoder:(id)a0;
- (id)_web_RFC1123DateString;
- (long long)_web_compareDay:(id)a0;
- (Class)classForCoder;
- (id)replacementObjectForPortCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (double)bucketToRoundingFactor:(unsigned int)a0;
- (double)timeIntervalSince1970WithBucket:(unsigned int)a0;
- (BOOL)isInToday;
- (BOOL)isNSDate__;
- (BOOL)isEqualToDate:(id)a0;
- (BOOL)isInTomorrow;
- (BOOL)isInYesterday;
- (id)addTimeInterval:(double)a0;
- (double)timeIntervalSinceDate:(id)a0;
- (BOOL)isInSameDayAsDate:(id)a0;
- (id)initWithTimeIntervalSince1970:(double)a0;
- (id)initWithTimeIntervalSinceNow:(double)a0;
- (id)dateByAddingTimeInterval:(double)a0;
- (BOOL)isEqual:(id)a0 toUnitGranularity:(unsigned long long)a1;
- (long long)compare:(id)a0 toUnitGranularity:(unsigned long long)a1;
- (id)initWithTimeInterval:(double)a0 sinceDate:(id)a1;
- (id)initWithDate:(id)a0;
- (unsigned long long)_cfTypeID;
- (id)initWithTimeIntervalSinceReferenceDate:(double)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)earlierDate:(id)a0;
- (double)timeIntervalSinceNow;
- (id)initWithString:(id)a0;
- (long long)compare:(id)a0;
- (double)timeIntervalSince1970;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)laterDate:(id)a0;
- (id)descriptionWithLocale:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
