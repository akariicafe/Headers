@interface __NSLocalTimeZone : NSTimeZone

+ (BOOL)supportsSecureCoding;

- (long long)secondsFromGMTForDate:(id)a0;
- (id)nextDaylightSavingTimeTransitionAfterDate:(id)a0;
- (id)localizedName:(long long)a0 locale:(id)a1;
- (void)encodeWithCoder:(id)a0;
- (id)abbreviationForDate:(id)a0;
- (id)description;
- (BOOL)isDaylightSavingTimeForDate:(id)a0;
- (id)replacementObjectForPortCoder:(id)a0;
- (Class)classForCoder;
- (id)initWithCoder:(id)a0;
- (double)daylightSavingTimeOffsetForDate:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)name;
- (id)data;

@end
