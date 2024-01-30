@class SKRange;

@interface SKPositionConstraint : SKConstraint

@property (copy) SKRange *xRange;
@property (copy) SKRange *yRange;

+ (BOOL)supportsSecureCoding;
+ (id)constraintWithXRange:(id)a0;
+ (id)constraintWithXRange:(id)a0 YRange:(id)a1;
+ (id)constraintWithYRange:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithXRange:(id)a0 YRange:(id)a1;
- (BOOL)isEqualToPositionConstraint:(id)a0;

@end
