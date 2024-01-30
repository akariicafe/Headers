@interface ATXAggregatedAppLaunchData : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long rawLaunchCount;
@property (readonly, nonatomic) unsigned long long uniqueDaysLaunched;

- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRawLaunchCount:(unsigned long long)a0 uniqueDaysLaunched:(unsigned long long)a1;

@end
