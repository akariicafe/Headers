@class NSArray;

@interface _HKSampleQueryConfiguration : HKQueryServerConfiguration

@property (copy, nonatomic) NSArray *sortDescriptors;
@property (copy, nonatomic) NSArray *queryDescriptors;
@property (nonatomic) unsigned long long limit;
@property (nonatomic) BOOL includeAutomaticTimeZones;
@property (nonatomic) BOOL includeContributorInformation;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
