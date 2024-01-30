@class NSArray, SCNPhysicsWorld;
@protocol AVTPhysicsControllerDelegate;

@interface AVTPhysicsController : NSObject {
    SCNPhysicsWorld *_physicsWorld;
    NSArray *_physicsRigs;
    BOOL _physicsBehaviorsAreInstalledInPhysicsWorld;
    unsigned int _frameCount;
    BOOL _setupDone;
    BOOL _hasPhysicsStateOverride;
}

@property (weak, nonatomic) id<AVTPhysicsControllerDelegate> delegate;

- (void).cxx_destruct;
- (id)physicsState;
- (void)installPhysics;
- (void)applyForcesWithMultiplier:(double)a0;
- (void)setupPhysicsIfNeeded;
- (void)setupPhysics;
- (void)_setupPhysicsChain:(id)a0 physicsRigs:(id)a1;
- (void)_setupCollisionNode:(id)a0;
- (void)solvePhysicsLimitState;
- (void)updateAtTime:(double)a0 forceMultiplier:(double)a1;
- (void /* unknown type, empty encoding */)offsetFromRestingPositionForNode:(id)a0 inCoordinateSpaceOfNode:(id)a1;
- (void)downforcesDidChange;
- (void)resetToPhysicsState:(id)a0 assumeRestStateIfNil:(BOOL)a1;
- (void)addToPhysicsWorld:(id)a0;
- (void)removeFromPhysicsWorld:(id)a0;

@end
