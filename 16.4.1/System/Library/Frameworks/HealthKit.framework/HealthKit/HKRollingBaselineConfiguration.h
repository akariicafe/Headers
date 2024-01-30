@interface HKRollingBaselineConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long minimumSampleCount;
@property (readonly, nonatomic) long long maximumSampleCount;
@property (readonly, nonatomic) double maximumWindowDuration;
@property (readonly, nonatomic) long long options;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithMinimumSampleCount:(long long)a0 maximumSampleCount:(long long)a1 maximumWindowDuration:(double)a2 options:(long long)a3;

@end
