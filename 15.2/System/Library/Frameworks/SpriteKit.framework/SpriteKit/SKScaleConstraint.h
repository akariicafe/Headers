@class SKRange;

@interface SKScaleConstraint : SKConstraint

@property (copy) SKRange *xRange;
@property (copy) SKRange *yRange;

+ (BOOL)supportsSecureCoding;
+ (id)constraintWithXRange:(id)a0;
+ (id)constraintWithYRange:(id)a0;
+ (id)constraintWithXRange:(id)a0 YRange:(id)a1;
+ (id)constraintWithScaleRange:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToScaleConstraint:(id)a0;
- (id)initWithXRange:(id)a0 YRange:(id)a1;

@end
