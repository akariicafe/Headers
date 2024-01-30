@class NSTimeZone;

@interface EKTimeZone : NSObject <NSCopying>

@property (retain, nonatomic) NSTimeZone *nsTimeZone;

+ (id)timeZoneWithName:(id)a0;
+ (id)timeZoneWithNSTimeZone:(id)a0;

- (id)NSTimeZone;
- (id)description;
- (id)initWithNSTimeZone:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (double)secondsFromGMTForAbsoluteTime:(double)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (double)nextDaylightSavingTimeTransitionAfterAbsoluteTime:(double)a0;

@end
