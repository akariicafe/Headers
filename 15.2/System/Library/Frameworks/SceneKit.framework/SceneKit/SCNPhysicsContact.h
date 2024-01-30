@class SCNNode;

@interface SCNPhysicsContact : NSObject {
    SCNNode *_nodeA;
    SCNNode *_nodeB;
    struct SCNVector3 { float x; float y; float z; } _contactPoint;
    struct SCNVector3 { float x; float y; float z; } _contactNormal;
    double _collisionImpulse;
    double _distance;
    double _fraction;
    long long _updateCount;
}

@property (readonly, nonatomic) SCNNode *nodeA;
@property (readonly, nonatomic) SCNNode *nodeB;
@property (readonly, nonatomic) struct SCNVector3 { float x0; float x1; float x2; } contactPoint;
@property (readonly, nonatomic) struct SCNVector3 { float x0; float x1; float x2; } contactNormal;
@property (readonly, nonatomic) double collisionImpulse;
@property (readonly, nonatomic) double penetrationDistance;
@property (readonly, nonatomic) double sweepTestFraction;

+ (id)_contactWithManifold:(const struct btPersistentManifold { int x0; struct btManifoldPoint { struct btVector3 { union { float x0[4]; } x0; } x0; struct btVector3 { union { float x0[4]; } x0; } x1; struct btVector3 { union { float x0[4]; } x0; } x2; struct btVector3 { union { float x0[4]; } x0; } x3; struct btVector3 { union { float x0[4]; } x0; } x4; float x5; float x6; float x7; float x8; int x9; int x10; int x11; int x12; void *x13; BOOL x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; int x22; struct btVector3 { union { float x0[4]; } x0; } x23; struct btVector3 { union { float x0[4]; } x0; } x24; } x1[4]; struct btCollisionObject *x2; struct btCollisionObject *x3; int x4; float x5; float x6; int x7; int x8; int x9; struct c3dContactCallback *x10; } *)a0 index:(long long)a1;

- (id)description;
- (void)dealloc;
- (void)_setupWithManifold:(const struct btPersistentManifold { int x0; struct btManifoldPoint { struct btVector3 { union { float x0[4]; } x0; } x0; struct btVector3 { union { float x0[4]; } x0; } x1; struct btVector3 { union { float x0[4]; } x0; } x2; struct btVector3 { union { float x0[4]; } x0; } x3; struct btVector3 { union { float x0[4]; } x0; } x4; float x5; float x6; float x7; float x8; int x9; int x10; int x11; int x12; void *x13; BOOL x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; int x22; struct btVector3 { union { float x0[4]; } x0; } x23; struct btVector3 { union { float x0[4]; } x0; } x24; } x1[4]; struct btCollisionObject *x2; struct btCollisionObject *x3; int x4; float x5; float x6; int x7; int x8; int x9; struct c3dContactCallback *x10; } *)a0 index:(long long)a1 point:(const struct btManifoldPoint { struct btVector3 { union { float x0[4]; } x0; } x0; struct btVector3 { union { float x0[4]; } x0; } x1; struct btVector3 { union { float x0[4]; } x0; } x2; struct btVector3 { union { float x0[4]; } x0; } x3; struct btVector3 { union { float x0[4]; } x0; } x4; float x5; float x6; float x7; float x8; int x9; int x10; int x11; int x12; void *x13; BOOL x14; float x15; float x16; float x17; float x18; float x19; float x20; float x21; int x22; struct btVector3 { union { float x0[4]; } x0; } x23; struct btVector3 { union { float x0[4]; } x0; } x24; } *)a2;
- (void)_fillNodeA:(id)a0 nodeB:(id)a1 contactPoint:(struct SCNVector3 { float x0; float x1; float x2; })a2 collisionImpulse:(struct SCNVector3 { float x0; float x1; float x2; })a3 distance:(double)a4 hitFraction:(double)a5;
- (void)_fillNodeA:(id)a0 nodeB:(id)a1;
- (void)_prepareUpdate;
- (BOOL)_shouldPostUpdate;

@end
