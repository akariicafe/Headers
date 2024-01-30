@class NSString;

@interface HKFeatureAvailabilityStoreServerConfiguration : HKTaskConfiguration

@property (readonly, copy, nonatomic) NSString *featureIdentifier;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithFeatureIdentifier:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
