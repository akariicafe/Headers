@class NSString, NSData;

@interface NSTimeZone : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy) NSString *name;
@property (readonly, copy) NSData *data;

+ (id)systemTimeZone;
+ (id)defaultTimeZone;
+ (id)knownTimeZoneNames;
+ (void)resetSystemTimeZone;
+ (void)setDefaultTimeZone:(id)a0;
+ (id)timeZoneDataVersion;
+ (id)timeZoneForSecondsFromGMT:(long long)a0;
+ (id)abbreviationDictionary;
+ (id)timeZoneWithName:(id)a0 data:(id)a1;
+ (id)timeZoneWithAbbreviation:(id)a0;
+ (void)setAbbreviationDictionary:(id)a0;
+ (BOOL)supportsSecureCoding;
+ (id)timeZoneWithName:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)localTimeZone;

- (void)encodeWithCoder:(id)a0;
- (id)replacementObjectForPortCoder:(id)a0;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (id)abbreviation;
- (BOOL)isDaylightSavingTime;
- (BOOL)isEqualToTimeZone:(id)a0;
- (double)daylightSavingTimeOffset;
- (id)nextDaylightSavingTimeTransition;
- (id)initWithName:(id)a0 data:(id)a1;
- (long long)secondsFromGMTForDate:(id)a0;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)a0;
- (id)localizedName:(long long)a0 locale:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isNSTimeZone__;
- (id)abbreviationForDate:(id)a0;
- (id)description;
- (BOOL)isDaylightSavingTimeForDate:(id)a0;
- (unsigned long long)_cfTypeID;
- (BOOL)isEqual:(id)a0;
- (id)initWithName:(id)a0;
- (id)initWithCoder:(id)a0;
- (double)daylightSavingTimeOffsetForDate:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (long long)secondsFromGMT;

@end
