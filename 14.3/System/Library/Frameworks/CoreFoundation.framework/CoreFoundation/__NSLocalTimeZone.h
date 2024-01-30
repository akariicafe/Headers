@interface __NSLocalTimeZone : NSTimeZone

+ (BOOL)supportsSecureCoding;

- (id)nextDaylightSavingTimeTransitionAfterDate:(id)a0;
- (id)localizedName:(long long)a0 locale:(id)a1;
- (double)daylightSavingTimeOffsetForDate:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)data;
- (long long)secondsFromGMTForDate:(id)a0;
- (BOOL)isDaylightSavingTimeForDate:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)abbreviationForDate:(id)a0;
- (id)description;
- (id)name;
- (Class)classForCoder;
- (id)replacementObjectForPortCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
