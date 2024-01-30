@class SKRange;

@interface SKRotationConstraint : SKConstraint

@property (copy) SKRange *zRotationRange;

+ (BOOL)supportsSecureCoding;
+ (id)constraintWithZRotationRange:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToRotationConstraint:(id)a0;
- (id)initWithZRotationRange:(id)a0;

@end
