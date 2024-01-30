@class NSArray, PKExtendedPhysicsBody, NSMutableDictionary;
@protocol UICollisionBehaviorDelegate;

@interface UICollisionBehavior : UIDynamicBehavior {
    BOOL _usesImplicitBounds;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _implicitBoundsInsets;
    PKExtendedPhysicsBody *_implicitBoundsBody;
    NSMutableDictionary *_boundaryBodies;
    NSMutableDictionary *_boundaryPaths;
    unsigned long long _collisionMode;
    id<UICollisionBehaviorDelegate> _collisionDelegate;
    unsigned int _groupVID;
    unsigned int _groupBID;
    struct { unsigned char delegateBeganWithItem : 1; unsigned char delegateEndedWithItem : 1; unsigned char delegateBeganWithBoundary : 1; unsigned char delegateEndedWithBoundary : 1; } _collisionBehaviorFlags;
}

@property (readonly, copy, nonatomic) NSArray *items;
@property (nonatomic) unsigned long long collisionMode;
@property (nonatomic) BOOL translatesReferenceBoundsIntoBoundary;
@property (readonly, copy, nonatomic) NSArray *boundaryIdentifiers;
@property (weak, nonatomic) id<UICollisionBehaviorDelegate> collisionDelegate;

+ (BOOL)_isPrimitiveBehavior;

- (void)removeItem:(id)a0;
- (void)addItem:(id)a0;
- (id)initWithItems:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)_setTranslatesReferenceItemBounds:(BOOL)a0 intoBoundaryWithInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (void)_applySettings;
- (void)_setCollisions:(BOOL)a0 forBody:(id)a1 isEdge:(BOOL)a2;
- (void)_addCollisionItem:(id)a0;
- (void)_setupImplicitBoundaries;
- (void)_setupExplicitBoundaries;
- (void)_removeImplicitBoundaries;
- (void)_removeExplicitBoundaryBodies;
- (void)_registerBodyForIdentifier:(id)a0 path:(id)a1;
- (void)_registerBoundaryForIdentifier:(id)a0 path:(id)a1;
- (void)_removeExplicitBoundaryPaths;
- (void)_didBeginContact:(id)a0;
- (void)_didEndContact:(id)a0;
- (id)boundaryWithIdentifier:(id)a0;
- (void)setTranslatesReferenceBoundsIntoBoundaryWithInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a0;
- (void)addBoundaryWithIdentifier:(id)a0 forPath:(id)a1;
- (void)addBoundaryWithIdentifier:(id)a0 fromPoint:(struct CGPoint { double x0; double x1; })a1 toPoint:(struct CGPoint { double x0; double x1; })a2;
- (void)removeBoundaryWithIdentifier:(id)a0;
- (void)removeAllBoundaries;
- (id)description;
- (void)_associate;
- (void)_dissociate;
- (void)_reevaluate:(unsigned long long)a0;

@end
