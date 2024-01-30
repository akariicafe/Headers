@class NSArray;

@interface BiasEstimatorOutputs : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *outProbabilities;
@property (nonatomic) double rawRange;
@property (nonatomic) double correctedRange;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithBiasEstimatorOutputs:(id)a0;
- (id)initWithOuputProbabilities:(id)a0 rawRange:(double)a1 correctedRange:(double)a2;
- (id)populateOrderedBiasEstimatorOutputs;

@end
