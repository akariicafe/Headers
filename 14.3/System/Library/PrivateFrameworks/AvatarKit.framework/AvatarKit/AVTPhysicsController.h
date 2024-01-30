@class NSMutableArray;
@protocol AVTPhysicsControllerDelegate;

@interface AVTPhysicsController : NSObject {
    NSMutableArray *_physicsRigs;
    BOOL _setupDone;
    BOOL _firstFrameRendered;
}

@property (weak, nonatomic) id<AVTPhysicsControllerDelegate> delegate;

- (void).cxx_destruct;
- (id)physicsState;
- (void)setupPhysics;
- (void)applyForcesWithMultiplier:(double)a0;
- (void)_setupPhysicsChain:(id)a0;
- (void)_setupCollisionNode:(id)a0;
- (void)updateAtTime:(double)a0 forceMultiplier:(double)a1;
- (void /* unknown type, empty encoding */)offsetFromRestingPositionForNode:(id)a0 inCoordinateSpaceOfNode:(id)a1;
- (void)downforcesDidChange;
- (void)setupPhysicsIfNeeded;
- (void)resetToPhysicsState:(id)a0;

@end
