@class SKRange, SKNode;

@interface SKOrientationConstraint : SKConstraint

@property (weak) SKNode *node;
@property struct CGPoint { double x; double y; } point;
@property (copy) SKRange *offset;

+ (BOOL)supportsSecureCoding;
+ (id)constraintOrientingToNode:(id)a0 offset:(id)a1;
+ (id)constraintOrientingToPoint:(struct CGPoint { double x0; double x1; })a0 inNode:(id)a1 offset:(id)a2;
+ (id)constraintOrientingToPoint:(struct CGPoint { double x0; double x1; })a0 offset:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (BOOL)isEqualToOrientationConstraint:(id)a0;
- (id)initWithNode:(id)a0 point:(struct CGPoint { double x0; double x1; })a1 offset:(id)a2;

@end
