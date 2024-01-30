@class SCNPhysicsBody, SCNPhysicsWorld;

@interface SCNPhysicsCharacter : SCNPhysicsBehavior {
    struct { SCNPhysicsBody *characterBody; struct SCNVector3 { float x; float y; float z; } direction; double velocity; double jumpSpeed; } _definition;
    struct btCharacterControllerInterface { void /* function */ **x0; } *_characterController;
    struct btPairCachingGhostObject { void /* function */ **x0; struct btTransform { struct btMatrix3x3 { struct btVector3 { union { float x0[4]; } x0; } x0[3]; } x0; struct btVector3 { union { float x0[4]; } x0; } x1; } x1; struct btTransform { struct btMatrix3x3 { struct btVector3 { union { float x0[4]; } x0; } x0[3]; } x0; struct btVector3 { union { float x0[4]; } x0; } x1; } x2; struct btVector3 { union { float x0[4]; } x0; } x3; struct btVector3 { union { float x0[4]; } x0; } x4; struct btVector3 { union { float x0[4]; } x0; } x5; int x6; float x7; struct btBroadphaseProxy *x8; struct btCollisionShape *x9; void *x10; struct btCollisionShape *x11; int x12; int x13; int x14; int x15; float x16; float x17; float x18; float x19; int x20; void *x21; float x22; float x23; float x24; int x25; struct btAlignedObjectArray<btCollisionObject *> { struct btAlignedAllocator<btCollisionObject *, 16> { } x0; int x1; int x2; struct btCollisionObject **x3; BOOL x4; } x26; struct btHashedOverlappingPairCache *x27; } *_ghostObject;
    struct btOverlapFilterCallback { void /* function */ **x0; } *_filterCallback;
    struct btCapsuleShape { void /* function */ **x0; int x1; void *x2; struct btVector3 { union { float x0[4]; } x0; } x3; struct btVector3 { union { float x0[4]; } x0; } x4; float x5; float x6; int x7; } *_capsuleShape;
    SCNPhysicsWorld *_world;
}

@property (nonatomic) double velocity;
@property (nonatomic) double jumpSpeed;

- (id)initWithCharacter:(id)a0;
- (void)jump;
- (void)dealloc;
- (void)_update;
- (BOOL)canJump;
- (void)setWalkingDirection:(struct SCNVector3 { float x0; float x1; float x2; })a0;
- (void)_addToPhysicsWorld:(id)a0;
- (void)_willRemoveFromPhysicsWorld:(id)a0;
- (void)_handleCreateIfNeeded:(BOOL)a0;

@end
