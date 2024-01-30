@class GKBehavior;
@protocol GKAgentDelegate;

@interface GKAgent : GKComponent <NSSecureCoding> {
    struct GKSimpleVehicle { void /* function */ **_vptr$AbstractLocalSpace; struct Vec3 { float x; float y; float z; } _side; struct Vec3 { float x; float y; float z; } _up; struct Vec3 { float x; float y; float z; } _forward; struct Vec3 { float x; float y; float z; } _position; float WanderSide; float WanderUp; struct Vec3 { float x; float y; float z; } hisPositionAtNearestApproach; struct Vec3 { float x; float y; float z; } ourPositionAtNearestApproach; BOOL gaudyPursuitAnnotation; int serialNumber; float _mass; float _radius; float _speed; float _maxForce; float _maxSpeed; float _curvature; struct Vec3 { float x; float y; float z; } _lastForward; struct Vec3 { float x; float y; float z; } _lastPosition; struct Vec3 { float x; float y; float z; } _smoothedPosition; float _smoothedCurvature; struct Vec3 { float x; float y; float z; } _smoothedAcceleration; BOOL m_rightHanded; } _vehicle;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) id<GKAgentDelegate> delegate;
@property (retain, nonatomic) GKBehavior *behavior;
@property (nonatomic) float mass;
@property (nonatomic) float radius;
@property (nonatomic) float speed;
@property (nonatomic) float maxAcceleration;
@property (nonatomic) float maxSpeed;

- (void)encodeWithCoder:(id)a0;
- (void *)vehicle;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (void /* unknown type, empty encoding */)position3;
- (void /* unknown type, empty encoding */)velocity3;
- (void /* unknown type, empty encoding */)steerForSeek:(SEL)a0;
- (void /* unknown type, empty encoding */)steerForFlee:(SEL)a0;
- (void /* unknown type, empty encoding */)steerToAvoidObstacles:(id)a0 timeBeforeCollisionToAvoid:(double)a1;
- (void /* unknown type, empty encoding */)steerToAvoidAgents:(id)a0 timeBeforeCollisionToAvoid:(double)a1;
- (void /* unknown type, empty encoding */)steerForSeparation:(id)a0 maxDistance:(float)a1 maxAngle:(float)a2;
- (void /* unknown type, empty encoding */)steerForAlignment:(id)a0 maxDistance:(float)a1 maxAngle:(float)a2;
- (void /* unknown type, empty encoding */)steerForCohesion:(id)a0 maxDistance:(float)a1 maxAngle:(float)a2;
- (void /* unknown type, empty encoding */)steerForTargetSpeed:(float)a0;
- (void /* unknown type, empty encoding */)steerForWander:(double)a0 speed:(float)a1;
- (void /* unknown type, empty encoding */)steerForIntercept:(id)a0 maxPredictionTime:(double)a1;
- (void /* unknown type, empty encoding */)steerToFollowPath:(id)a0 maxPredictionTime:(double)a1 forward:(BOOL)a2;
- (void /* unknown type, empty encoding */)steerToStayOnPath:(id)a0 maxPredictionTime:(double)a1;

@end
