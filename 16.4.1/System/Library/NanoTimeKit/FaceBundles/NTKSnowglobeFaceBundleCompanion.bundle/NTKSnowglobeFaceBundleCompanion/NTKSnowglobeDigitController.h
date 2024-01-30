@class NSTimer, NSString, SCNScene, SCNNode, NTKSnowglobeEyeController, NSMutableArray, NSObject, NTKSnowglobeDigitProfile;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface NTKSnowglobeDigitController : NSObject <NTKSnowglobeSceneSubController> {
    SCNScene *_scene;
    SCNNode *_leg1;
    SCNNode *_leg2;
    NSMutableArray *_physicsBehaviors;
    double _random;
    double _random1;
    double _random2;
    double _random3;
    double _random4;
    void /* unknown type, empty encoding */ _randAccel;
    void /* unknown type, empty encoding */ _randAngularAccel;
    struct { void /* unknown type, empty encoding */ velocity; void /* unknown type, empty encoding */ acceleration; void /* unknown type, empty encoding */ angVelocity; void /* unknown type, empty encoding */ angAcceleration; void /* unknown type, empty encoding */ centerOfMass; } _digitBody;
    struct { void /* unknown type, empty encoding */ velocity; void /* unknown type, empty encoding */ acceleration; void /* unknown type, empty encoding */ angVelocity; void /* unknown type, empty encoding */ angAcceleration; void /* unknown type, empty encoding */ centerOfMass; } _leg1Body;
    struct { void /* unknown type, empty encoding */ velocity; void /* unknown type, empty encoding */ acceleration; void /* unknown type, empty encoding */ angVelocity; void /* unknown type, empty encoding */ angAcceleration; void /* unknown type, empty encoding */ centerOfMass; } _leg2Body;
    BOOL started;
    double startTime;
    double _accumulatedKick;
    NTKSnowglobeEyeController *_eyeController;
    NSTimer *_collisionAngerTimer;
    void /* unknown type, empty encoding */ _tritiumTransitionPosition;
    void /* unknown type, empty encoding */ _tritiumTransitionVelocity;
    struct { void /* unknown type, empty encoding */ vector; } _tritiumTransitionRotation;
    struct { void /* unknown type, empty encoding */ vector; } _tritiumTransitionLeg1Rotation;
    struct { void /* unknown type, empty encoding */ vector; } _tritiumTransitionLeg2Rotation;
    BOOL _destroyed;
    BOOL _tritium;
    NSObject<OS_dispatch_queue> *_renderQueue;
    NSObject<OS_dispatch_group> *_loadGroup;
    NTKSnowglobeDigitProfile *_profile;
}

@property (retain, nonatomic) SCNNode *node;
@property (nonatomic) struct SCNVector3 { float x; float y; float z; } origin;
@property (readonly, nonatomic) unsigned long long digit;
@property (nonatomic) struct { void /* unknown type, empty encoding */ vector; } tritiumRotation;
@property (nonatomic) void /* unknown type, empty encoding */ tritiumOrigin;
@property (nonatomic) struct SCNVector3 { float x; float y; float z; } exitOrigin;
@property (nonatomic) BOOL exiting;
@property (nonatomic) BOOL pausePhysics;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)destroy;
- (void)dealloc;
- (void).cxx_destruct;
- (void)updateAtTime:(double)a0;
- (void)_applyLegSpring:(id)a0;
- (void)_applyMotionAcceleration;
- (void /* unknown type, empty encoding */)_bodyMomentOfInertia;
- (struct SCNVector3 { float x0; float x1; float x2; })_effectiveOrigin;
- (void /* unknown type, empty encoding */)_legMomentOfInertiaForNode:(id)a0 body:(struct { } *)a1;
- (void)_queue_applyAcceleration;
- (void)_queue_applyLinearSpring;
- (void)_queue_applyRandAcceleration;
- (void)_queue_applyRotationSprings;
- (void)_queue_applyVelocity;
- (void)_queue_didAddToWorld;
- (void)_queue_setGrainIntensity:(float)a0 withCommit:(BOOL)a1;
- (void)_setupWithNode:(id)a0 configureNode:(id /* block */)a1;
- (void)applyTapAtLocalPosition:(struct SCNVector3 { float x0; float x1; float x2; })a0;
- (void)didCollide;
- (id)initWithDigit:(unsigned long long)a0 scene:(id)a1 queue:(id)a2 group:(id)a3 configureNode:(id /* block */)a4;
- (void)resetToOrigin;

@end
