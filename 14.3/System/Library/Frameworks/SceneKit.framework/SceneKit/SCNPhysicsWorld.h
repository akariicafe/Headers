@class NSArray, SCNPhysicsContact, SCNScene, NSMutableArray, NSMutableSet;
@protocol SCNPhysicsContactDelegate;

@interface SCNPhysicsWorld : NSObject <NSSecureCoding> {
    struct btDiscreteDynamicsWorld { void /* function */ **x0; struct btAlignedObjectArray<btCollisionObject *> { struct btAlignedAllocator<btCollisionObject *, 16> { } x0; int x1; int x2; struct btCollisionObject **x3; BOOL x4; } x1; struct btDispatcher *x2; struct btDispatcherInfo { float x0; int x1; int x2; float x3; BOOL x4; struct btIDebugDraw *x5; BOOL x6; BOOL x7; BOOL x8; float x9; BOOL x10; float x11; } x3; struct btBroadphaseInterface *x4; struct btIDebugDraw *x5; BOOL x6; void /* function */ *x7; void /* function */ *x8; void *x9; struct btContactSolverInfo { float x0; float x1; float x2; float x3; float x4; int x5; float x6; float x7; float x8; float x9; float x10; int x11; float x12; float x13; float x14; float x15; int x16; int x17; int x18; float x19; float x20; } x10; float x11; struct btAlignedObjectArray<btTypedConstraint *> { struct btAlignedAllocator<btTypedConstraint *, 16> { } x0; int x1; int x2; struct btTypedConstraint **x3; BOOL x4; } x12; struct InplaceSolverIslandCallback *x13; struct btConstraintSolver *x14; struct btSimulationIslandManager *x15; struct btAlignedObjectArray<btTypedConstraint *> { struct btAlignedAllocator<btTypedConstraint *, 16> { } x0; int x1; int x2; struct btTypedConstraint **x3; BOOL x4; } x16; struct btAlignedObjectArray<btRigidBody *> { struct btAlignedAllocator<btRigidBody *, 16> { } x0; int x1; int x2; struct btRigidBody **x3; BOOL x4; } x17; struct btVector3 { union { float x0[4]; } x0; } x18; float x19; BOOL x20; BOOL x21; BOOL x22; BOOL x23; struct btAlignedObjectArray<btActionInterface *> { struct btAlignedAllocator<btActionInterface *, 16> { } x0; int x1; int x2; struct btActionInterface **x3; BOOL x4; } x24; int x25; struct btAlignedObjectArray<btPersistentManifold *> { struct btAlignedAllocator<btPersistentManifold *, 16> { } x0; int x1; int x2; struct btPersistentManifold **x3; BOOL x4; } x26; BOOL x27; } *_world;
    struct btOverlappingPairCallback { void /* function */ **x0; } *_ghostPairCallback;
    struct btVehicleRaycaster { void /* function */ **x0; } *_vehicleRayCaster;
    struct btC3DDebugDraw { void /* function */ **x0; int x1; void *x2; } *_debugDrawer;
    struct c3dAether { struct vector<c3dPhysicsField *, std::__1::allocator<c3dPhysicsField *> > { struct c3dPhysicsField **__begin_; struct c3dPhysicsField **__end_; struct __compressed_pair<c3dPhysicsField **, std::__1::allocator<c3dPhysicsField *> > { struct c3dPhysicsField **__value_; } __end_cap_; } _fields; struct vector<c3dPhysicsField *, std::__1::allocator<c3dPhysicsField *> > { struct c3dPhysicsField **__begin_; struct c3dPhysicsField **__end_; struct __compressed_pair<c3dPhysicsField **, std::__1::allocator<c3dPhysicsField *> > { struct c3dPhysicsField **__value_; } __end_cap_; } _activeFields; unsigned int _lastOverrideIndex; } _aether;
    BOOL _hasActiveFields;
    BOOL _firstSimulationDone;
    id<SCNPhysicsContactDelegate> _contactDelegate;
    SCNPhysicsContact *_contact;
    SCNScene *_scene;
    struct SCNVector3 { float x; float y; float z; } _gravity;
    double _speed;
    double _scale;
    double _timeStep;
    NSMutableArray *_fields;
    double _elapsedTime;
    NSMutableArray *_behaviors;
    NSArray *_activeBehaviors;
    BOOL _activeBehaviorsValid;
    NSMutableSet *_bodies;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) struct SCNVector3 { float x0; float x1; float x2; } gravity;
@property (nonatomic) double speed;
@property (nonatomic) double timeStep;
@property (weak) id<SCNPhysicsContactDelegate> contactDelegate;
@property (readonly, nonatomic) NSArray *allBehaviors;

- (void)_reset;
- (BOOL)_isDefault;
- (double)scale;
- (void)setScene:(id)a0;
- (void).cxx_destruct;
- (void)commonInit;
- (struct btDynamicsWorld { void /* function */ **x0; struct btAlignedObjectArray<btCollisionObject *> { struct btAlignedAllocator<btCollisionObject *, 16> { } x0; int x1; int x2; struct btCollisionObject **x3; BOOL x4; } x1; struct btDispatcher *x2; struct btDispatcherInfo { float x0; int x1; int x2; float x3; BOOL x4; struct btIDebugDraw *x5; BOOL x6; BOOL x7; BOOL x8; float x9; BOOL x10; float x11; } x3; struct btBroadphaseInterface *x4; struct btIDebugDraw *x5; BOOL x6; void /* function */ *x7; void /* function */ *x8; void *x9; struct btContactSolverInfo { float x0; float x1; float x2; float x3; float x4; int x5; float x6; float x7; float x8; float x9; float x10; int x11; float x12; float x13; float x14; float x15; int x16; int x17; int x18; float x19; float x20; } x10; float x11; } *)_handle;
- (id)initWithScene:(id)a0;
- (void)dealloc;
- (id)valueForUndefinedKey:(id)a0;
- (id)scene;
- (void)removeAllBehaviors;
- (id)initWithCoder:(id)a0;
- (void)_step:(double)a0;
- (id).cxx_construct;
- (void)setScale:(double)a0;
- (void)addBehavior:(id)a0;
- (void)removeBehavior:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)_postCommandWithBlock:(id /* block */)a0;
- (struct c3dAether { struct vector<c3dPhysicsField *, std::__1::allocator<c3dPhysicsField *> > { struct c3dPhysicsField **x0; struct c3dPhysicsField **x1; struct __compressed_pair<c3dPhysicsField **, std::__1::allocator<c3dPhysicsField *> > { struct c3dPhysicsField **x0; } x2; } x0; struct vector<c3dPhysicsField *, std::__1::allocator<c3dPhysicsField *> > { struct c3dPhysicsField **x0; struct c3dPhysicsField **x1; struct __compressed_pair<c3dPhysicsField **, std::__1::allocator<c3dPhysicsField *> > { struct c3dPhysicsField **x0; } x2; } x1; unsigned int x2; } *)_aetherHandle;
- (void)_removeFieldFromWorld:(id)a0;
- (void)_addFieldToWorld:(id)a0;
- (void)_allowGhostObjects;
- (void)removePhysicsBody:(id)a0 handle:(void *)a1;
- (void)addPhysicsBody:(id)a0 nodeRef:(struct __C3DNode { } *)a1 colGroup:(unsigned long long)a2 colMask:(unsigned long long)a3 colTest:(unsigned long long)a4;
- (void)_preTick:(double)a0;
- (void)wakeUpAllBodies;
- (BOOL)parseSpecialKey:(id)a0 withPath:(id)a1 intoDestination:(id *)a2;
- (id)_rayTestWithSegmentFromPoint:(struct btVector3 { union { float x0[4]; } x0; })a0 toPoint:(struct btVector3 { union { float x0[4]; } x0; })a1 options:(id)a2;
- (void)_createDynamicWorldIfNeeded;
- (void)_customEncodingOfSCNPhysicsWorld:(id)a0;
- (void)_customDecodingOfSCNPhysicsWorld:(id)a0;
- (void)_didDecodeSCNPhysicsWorld:(id)a0;
- (id)_physicsContact;
- (void)sceneWillDie;
- (id)objectInAllBehaviorsAtIndex:(unsigned long long)a0;
- (id)rayTestWithSegmentFromPoint:(struct SCNVector3 { float x0; float x1; float x2; })a0 toPoint:(struct SCNVector3 { float x0; float x1; float x2; })a1 options:(id)a2;
- (id)contactTestBetweenBody:(id)a0 andBody:(id)a1 options:(id)a2;
- (id)contactTestWithBody:(id)a0 options:(id)a1;
- (id)convexSweepTestWithShape:(id)a0 fromTransform:(struct SCNMatrix4 { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; })a1 toTransform:(struct SCNMatrix4 { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; })a2 options:(id)a3;
- (void)updateCollisionPairs;
- (BOOL)_needsRedraw;
- (void)enumerateBodiesUsingBlock:(id /* block */)a0;
- (id)_findFieldAttachedToNode:(id)a0;
- (void)_updatePhysicsFieldsTransforms;
- (struct btVehicleRaycaster { void /* function */ **x0; } *)_defaultVehicleRayCaster;
- (void)_drawDebugInAuthoringEnvironment:(void *)a0;

@end
