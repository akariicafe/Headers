@class ABTachogramClassification, HKHRSampleClassification;

@interface HKHRAFibBurdenTachogramClassificationProvider : NSObject <NSSecureCoding> {
    ABTachogramClassification *_computedTachogramClassification;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) HKHRSampleClassification *sampleClassification;
@property (readonly, nonatomic) ABTachogramClassification *tachogramClassification;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithSampleClassification:(id)a0;
- (id)initWithSampleClassification:(id)a0 tachogramClassification:(id)a1;

@end
