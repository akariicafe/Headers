@class HKQuantitySample;

@interface HKQuantitySeriesSampleEditorTaskServerConfiguration : HKTaskConfiguration

@property (copy, nonatomic) HKQuantitySample *quantitySample;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithQuantitySample:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
