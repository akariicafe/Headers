@class TSDLayoutGeometry, NSArray, NSMutableArray;

@interface TSDAbstractLayout : NSObject {
    NSMutableArray *mChildren;
    struct CGPoint { double x; double y; } mInterimPosition;
    BOOL mInterimPositionXSet;
    BOOL mInterimPositionYSet;
    struct CGPoint { double x; double y; } mLastInterimPosition;
    BOOL mLastInterimPositionXSet;
    BOOL mLastInterimPositionYSet;
}

@property (copy, nonatomic) TSDLayoutGeometry *geometry;
@property (nonatomic) TSDAbstractLayout *parent;
@property (readonly, nonatomic) TSDAbstractLayout *root;
@property (copy, nonatomic) NSArray *children;
@property (nonatomic) double interimPositionX;
@property (nonatomic) double interimPositionY;

- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transform;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (void)dealloc;
- (void)addChild:(id)a0;
- (id)init;
- (void)removeFromParent;
- (void)insertChild:(id)a0 atIndex:(unsigned long long)a1;
- (BOOL)supportsRotation;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformInRoot;
- (void)fixTransformFromInterimPosition;
- (void)addLayoutsToArray:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameInRoot;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectInRoot:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)supportsInspectorPositioning;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForCulling;
- (id)geometryInRoot:(id)a0;
- (void)addDescendentLayoutsToArray:(id)a0;
- (void)addLayoutsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 toArray:(id)a1 deep:(BOOL)a2;
- (id)additionalDependenciesForChildLayout:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentFrame;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentFrameForProvidingGuidesInRoot;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })alignmentFrameInRoot;
- (struct CGPoint { double x0; double x1; })alignmentFrameOriginForFixingInterimPosition;
- (BOOL)canRotateChildLayout:(id)a0;
- (id)delegateConformingToProtocol:(id)a0 forLayout:(id)a1;
- (void)exchangeChildAtIndex:(unsigned long long)a0 withChildAtIndex:(unsigned long long)a1;
- (void)fixTransformFromLastInterimPosition;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameInParent;
- (id)geometryForTransforming;
- (id)geometryInParent;
- (id)geometryInRoot;
- (void)insertChild:(id)a0 above:(id)a1;
- (void)insertChild:(id)a0 below:(id)a1;
- (BOOL)isAxisAlignedUnflippedInRoot;
- (BOOL)isRootLayoutForInspectorGeometry;
- (id)layoutsForProvidingGuidesForChildLayouts;
- (void)offsetGeometryBy:(struct CGPoint { double x0; double x1; })a0;
- (void)p_fixTransformFromInterimPosition:(struct CGPoint { double x0; double x1; })a0 interimPositionXSet:(BOOL)a1 interimPositionYSet:(BOOL)a2;
- (id)parentLayoutForProvidingGuides;
- (struct CGPoint { double x0; double x1; })positionInRootForAttachmentPositioner;
- (BOOL)providesGuidesForChildLayouts;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectInParent:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)replaceChild:(id)a0 with:(id)a1;
- (BOOL)shouldSnapWhileResizing;
- (BOOL)supportsFlipping;
- (BOOL)supportsParentRotation;
- (BOOL)supportsResize;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })transformInParent;
- (id)visibleGeometries;

@end
