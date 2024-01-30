@class SKRange, SKNode;

@interface SKDistanceConstraint : SKConstraint

@property (copy) SKRange *distanceRange;
@property (weak) SKNode *node;
@property struct CGPoint { double x; double y; } point;

+ (BOOL)supportsSecureCoding;
+ (id)constraintWithNode:(id)a0 distanceRange:(id)a1;
+ (id)constraintWithPoint:(struct CGPoint { double x0; double x1; })a0 distanceRange:(id)a1;
+ (id)constraintWithPoint:(struct CGPoint { double x0; double x1; })a0 inNode:(id)a1 distanceRange:(id)a2;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithPoint:(struct CGPoint { double x0; double x1; })a0 inNode:(id)a1 distanceRange:(id)a2;
- (BOOL)isEqualToDistanceConstraint:(id)a0;

@end
