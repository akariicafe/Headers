@class NSArray, HKQueryAnchor;

@interface _HKAnchoredObjectQueryServerConfiguration : HKQueryServerConfiguration

@property (copy, nonatomic) HKQueryAnchor *anchor;
@property (nonatomic) unsigned long long limit;
@property (nonatomic) double collectionInterval;
@property (copy, nonatomic) NSArray *queryDescriptors;
@property (nonatomic) BOOL includeDeletedObjects;
@property (nonatomic) BOOL includeAutomaticTimeZones;
@property (nonatomic) BOOL includeContributorInformation;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
