@interface ICSDuration : NSObject <NSSecureCoding> {
    double _duration;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)durationFromICSString:(id)a0;
+ (id)generateDurationFromICSString:(id)a0;
+ (id)durationFromRFC2445UTF8String:(const char *)a0;

- (long long)days;
- (long long)seconds;
- (long long)minutes;
- (id)initWithWeeks:(long long)a0 days:(long long)a1 hours:(long long)a2 minutes:(long long)a3 seconds:(long long)a4;
- (double)timeInterval;
- (id)ICSStringWithOptions:(unsigned long long)a0;
- (long long)weeks;
- (id)initWithCoder:(id)a0;
- (BOOL)isNegative;
- (long long)hours;
- (void)encodeWithCoder:(id)a0;
- (void)_ICSStringWithOptions:(unsigned long long)a0 appendingToString:(id)a1;

@end
