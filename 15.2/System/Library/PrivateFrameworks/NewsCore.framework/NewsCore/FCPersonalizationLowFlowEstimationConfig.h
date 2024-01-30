@interface FCPersonalizationLowFlowEstimationConfig : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double exponent;
@property (nonatomic) double padding;
@property (nonatomic) double prior;

- (id)initWithConfigDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithExponent:(double)a0 padding:(double)a1 prior:(double)a2;

@end
