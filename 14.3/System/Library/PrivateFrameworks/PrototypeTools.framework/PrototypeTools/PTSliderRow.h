@interface PTSliderRow : PTSRow

@property (nonatomic) double minValue;
@property (nonatomic) double maxValue;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)minValue:(double)a0 maxValue:(double)a1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
