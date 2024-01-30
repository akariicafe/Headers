@interface HKActivitySummaryQueryServerConfiguration : HKQueryServerConfiguration

@property (nonatomic) BOOL shouldIncludeActivitySummaryPrivateProperties;
@property (nonatomic) BOOL shouldIncludeActivitySummaryStatistics;
@property (nonatomic) BOOL orderByDateAscending;
@property (nonatomic) unsigned long long limit;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
