@class NSSet, HKQueryAnchor;

@interface _HKDatabaseChangesQueryServerConfiguration : HKQueryServerConfiguration

@property (copy, nonatomic) NSSet *sampleTypes;
@property (copy, nonatomic) HKQueryAnchor *anchor;
@property (nonatomic) BOOL includeChangeDetails;
@property (nonatomic) long long changeDetailsQueryStrategy;
@property (nonatomic) long long anchorStrategyChangeCountLimit;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
