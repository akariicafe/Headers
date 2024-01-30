@class NSTimeZone;

@interface EKTimeZone : NSObject <NSCopying>

@property (retain, nonatomic) NSTimeZone *nsTimeZone;

+ (id)timeZoneWithNSTimeZone:(id)a0;
+ (id)timeZoneWithName:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (double)nextDaylightSavingTimeTransitionAfterAbsoluteTime:(double)a0;
- (id)initWithNSTimeZone:(id)a0;
- (BOOL)isEqual:(id)a0;
- (double)secondsFromGMTForAbsoluteTime:(double)a0;
- (id)NSTimeZone;

@end
