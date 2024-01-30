@class NSString, NSData;

@interface NSTimeZone : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *name;
@property (readonly, copy) NSData *data;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)systemTimeZone;
+ (id)defaultTimeZone;
+ (void)resetSystemTimeZone;
+ (id)knownTimeZoneNames;
+ (void)setDefaultTimeZone:(id)a0;
+ (id)abbreviationDictionary;
+ (id)timeZoneDataVersion;
+ (id)timeZoneWithName:(id)a0 data:(id)a1;
+ (id)timeZoneForSecondsFromGMT:(long long)a0;
+ (id)timeZoneWithAbbreviation:(id)a0;
+ (void)setAbbreviationDictionary:(id)a0;
+ (BOOL)supportsSecureCoding;
+ (id)localTimeZone;
+ (id)timeZoneWithName:(id)a0;

- (id)initWithCoder:(id)a0;
- (Class)classForCoder;
- (id)replacementObjectForPortCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)abbreviation;
- (BOOL)isNSTimeZone__;
- (BOOL)isDaylightSavingTime;
- (id)nextDaylightSavingTimeTransition;
- (double)daylightSavingTimeOffset;
- (BOOL)isEqualToTimeZone:(id)a0;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)a0;
- (id)localizedName:(long long)a0 locale:(id)a1;
- (double)daylightSavingTimeOffsetForDate:(id)a0;
- (unsigned long long)_cfTypeID;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)secondsFromGMTForDate:(id)a0;
- (BOOL)isDaylightSavingTimeForDate:(id)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)abbreviationForDate:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (long long)secondsFromGMT;
- (id)initWithName:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithName:(id)a0 data:(id)a1;

@end
