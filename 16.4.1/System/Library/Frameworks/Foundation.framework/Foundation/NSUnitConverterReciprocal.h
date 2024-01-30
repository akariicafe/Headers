@interface NSUnitConverterReciprocal : NSUnitConverter <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) double reciprocalValue;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (double)valueFromBaseUnitValue:(double)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (double)baseUnitValueFromValue:(double)a0;
- (id)initWithReciprocalValue:(double)a0;

@end
