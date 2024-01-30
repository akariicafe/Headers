@interface _HKObserverQueryServerConfiguration : HKQueryServerConfiguration

@property (nonatomic) BOOL observeUnfrozenSeries;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
