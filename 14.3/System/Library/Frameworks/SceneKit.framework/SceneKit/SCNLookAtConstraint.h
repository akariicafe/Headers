@class SCNNode;

@interface SCNLookAtConstraint : SCNConstraint {
    SCNNode *_target;
    BOOL _gimbalLockEnabled;
    struct SCNVector3 { float x; float y; float z; } _targetOffset;
    struct SCNVector3 { float x; float y; float z; } _upVector;
    struct SCNVector3 { float x; float y; float z; } _localFront;
}

@property (retain, nonatomic) SCNNode *target;
@property (nonatomic) struct SCNVector3 { float x0; float x1; float x2; } targetOffset;
@property (nonatomic) struct SCNVector3 { float x0; float x1; float x2; } localFront;
@property (nonatomic) struct SCNVector3 { float x0; float x1; float x2; } worldUp;
@property (nonatomic) BOOL gimbalLockEnabled;

+ (BOOL)supportsSecureCoding;
+ (id)lookAtConstraintWithTarget:(id)a0;

- (id)initWithTarget:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (struct SCNVector3 { float x0; float x1; float x2; })upVector;
- (void)encodeWithCoder:(id)a0;
- (void)setUpVector:(struct SCNVector3 { float x0; float x1; float x2; })a0;
- (void)_customEncodingOfSCNLookAtConstraint:(id)a0;
- (void)_customDecodingOfSCNLookAtConstraint:(id)a0;

@end
