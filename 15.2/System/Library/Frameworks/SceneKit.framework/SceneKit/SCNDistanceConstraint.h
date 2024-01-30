@class SCNNode;

@interface SCNDistanceConstraint : SCNConstraint {
    SCNNode *_target;
    float _minimumDistance;
    float _maximumDistance;
    BOOL _keepTargetDirection;
    struct SCNVector3 { float x; float y; float z; } _targetDirection;
    float _maximumDirectionAngle;
}

@property (retain, nonatomic) SCNNode *target;
@property (nonatomic) double minimumDistance;
@property (nonatomic) double maximumDistance;

+ (BOOL)supportsSecureCoding;
+ (id)distanceConstraint;
+ (id)distanceConstraintWithTarget:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void)setTargetDirection:(struct SCNVector3 { float x0; float x1; float x2; })a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (struct SCNVector3 { float x0; float x1; float x2; })targetDirection;
- (void)_customEncodingOfSCNDistanceConstraint:(id)a0;
- (void)_customDecodingOfSCNDistanceConstraint:(id)a0;
- (BOOL)keepTargetDirection;
- (void)setKeepTargetDirection:(BOOL)a0;

@end
