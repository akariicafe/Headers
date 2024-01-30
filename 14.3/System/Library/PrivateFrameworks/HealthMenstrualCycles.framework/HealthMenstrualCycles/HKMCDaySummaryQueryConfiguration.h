@interface HKMCDaySummaryQueryConfiguration : HKQueryServerConfiguration

@property (nonatomic) struct { long long start; long long duration; } dayIndexRange;
@property (nonatomic) BOOL ascending;
@property (nonatomic) long long limit;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
