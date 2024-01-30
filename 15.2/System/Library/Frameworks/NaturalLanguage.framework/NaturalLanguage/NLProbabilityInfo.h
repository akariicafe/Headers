@interface NLProbabilityInfo : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) double probability;
@property (readonly, nonatomic) double log10Probability;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) unsigned long long probabilityFlags;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithLog10Probability:(double)a0 flags:(unsigned long long)a1;
- (id)initWithInvalidProbability;
- (id)initWithProbability:(double)a0 flags:(unsigned long long)a1;

@end
