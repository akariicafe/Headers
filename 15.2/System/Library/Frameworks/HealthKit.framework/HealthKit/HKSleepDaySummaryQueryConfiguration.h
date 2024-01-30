@interface HKSleepDaySummaryQueryConfiguration : HKQueryServerConfiguration

@property (nonatomic) struct { long long start; long long duration; } morningIndexRange;
@property (nonatomic) BOOL ascending;
@property (nonatomic) long long limit;
@property (nonatomic) BOOL requireSleepAnalysis;
@property (nonatomic) BOOL onlySleepAnalysis;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
