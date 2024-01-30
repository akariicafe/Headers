@class SCNPhysicsBody, SCNPhysicsWorld;

@interface SCNPhysicsCharacter : SCNPhysicsBehavior {
    struct { SCNPhysicsBody *characterBody; struct SCNVector3 { float x; float y; float z; } direction; double velocity; double jumpSpeed; } _definition;
    struct btCharacterControllerInterface { void /* function */ **x0; } *_characterController;
    void *_ghostObject;
    struct btOverlapFilterCallback { void /* function */ **x0; } *_filterCallback;
    struct btCapsuleShape { void /* function */ **x0; int x1; void *x2; struct btVector3 { union { float x0[4]; } x0; } x3; struct btVector3 { union { float x0[4]; } x0; } x4; float x5; float x6; int x7; } *_capsuleShape;
    SCNPhysicsWorld *_world;
}

@property (nonatomic) double velocity;
@property (nonatomic) double jumpSpeed;

- (void)jump;
- (void)setWalkingDirection:(struct SCNVector3 { float x0; float x1; float x2; })a0;
- (void)_update;
- (void)dealloc;
- (BOOL)canJump;
- (id)initWithCharacter:(id)a0;
- (void)_copyDefinition:(struct { unsigned char x0[296]; } *)a0;
- (void)_addToPhysicsWorld:(id)a0 definition:(struct { unsigned char x0[296]; })a1;
- (void)_willRemoveFromPhysicsWorld:(id)a0;
- (void)_handleCreateIfNeeded:(BOOL)a0;

@end
