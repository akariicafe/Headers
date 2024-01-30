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

- (id)init;
- (void).cxx_destruct;
- (struct GKSimpleVehicle { void /* function */ **x0; struct Vec3 { float x0; float x1; float x2; } x1; struct Vec3 { float x0; float x1; float x2; } x2; struct Vec3 { float x0; float x1; float x2; } x3; struct Vec3 { float x0; float x1; float x2; } x4; float x5; float x6; struct Vec3 { float x0; float x1; float x2; } x7; struct Vec3 { float x0; float x1; float x2; } x8; BOOL x9; int x10; float x11; float x12; float x13; float x14; float x15; float x16; struct Vec3 { float x0; float x1; float x2; } x17; struct Vec3 { float x0; float x1; float x2; } x18; struct Vec3 { float x0; float x1; float x2; } x19; float x20; struct Vec3 { float x0; float x1; float x2; } x21; BOOL x22; } *)vehicle;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (void)encodeWithCoder:(id)a0;
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
