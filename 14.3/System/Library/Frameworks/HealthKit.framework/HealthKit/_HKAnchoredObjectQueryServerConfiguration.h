@class HKQueryAnchor;

@interface _HKAnchoredObjectQueryServerConfiguration : HKQueryServerConfiguration

@property (copy, nonatomic) HKQueryAnchor *anchor;
@property (nonatomic) unsigned long long limit;
@property (nonatomic) double collectionInterval;
@property (nonatomic) BOOL includeDeletedObjects;
@property (nonatomic) BOOL includeAutomaticTimeZones;
@property (nonatomic) BOOL includeContributorInformation;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
