@interface NSUnitConverterLinear : NSUnitConverter <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) double coefficient;
@property (readonly) double constant;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoefficient:(double)a0 constant:(double)a1;
- (id)description;
- (id)initWithCoefficient:(double)a0;
- (double)baseUnitValueFromValue:(double)a0;
- (double)valueFromBaseUnitValue:(double)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;

@end
