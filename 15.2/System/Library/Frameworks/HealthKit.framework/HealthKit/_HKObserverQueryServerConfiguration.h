@class NSArray;

@interface _HKObserverQueryServerConfiguration : HKQueryServerConfiguration

@property (nonatomic) BOOL observeUnfrozenSeries;
@property (copy, nonatomic) NSArray *queryDescriptors;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
