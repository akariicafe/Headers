@class HKQuantityType, NSString;

@interface HKDataCollectorTaskServerConfiguration : HKTaskConfiguration

@property (copy, nonatomic) HKQuantityType *quantityType;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, nonatomic) BOOL canResumeFromLastDatum;

+ (BOOL)supportsSecureCoding;

- (id)initWithQuantityType:(id)a0 bundleIdentifier:(id)a1 canResumeFromLastDatum:(BOOL)a2;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
