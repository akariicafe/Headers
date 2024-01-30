@class NSArray, NSMutableArray, TSDBezierNode;

@interface TSDEditableBezierPathSource : TSDPathSource <TSDRealignablePathSource, TSDMixing> {
    unsigned long long mActiveSubpath;
    BOOL mHasLockedFlipTransform;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } mLockedFlipTransform;
}

@property (retain, nonatomic) NSMutableArray *subpaths;
@property (retain, nonatomic) NSMutableArray *nodes;
@property (retain, nonatomic) NSArray *nodeTypes;
@property (readonly, nonatomic) TSDBezierNode *firstNode;
@property (readonly, nonatomic) TSDBezierNode *lastNode;
@property (nonatomic, getter=isClosed) BOOL closed;
@property (readonly, nonatomic) BOOL isOpen;
@property (readonly, nonatomic) BOOL closeIfEndpointsAreEqual;
@property (readonly, nonatomic) BOOL hasSelectedNode;
@property (readonly, nonatomic) BOOL allNodesSelected;
@property (readonly, nonatomic) BOOL canDeleteSelectedNodes;
@property (readonly, nonatomic) BOOL deletingSelectedNodesWillDeleteShape;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } nodeBounds;
@property (readonly, nonatomic) BOOL isCompound;
@property (readonly, nonatomic) struct CGPath { } *subpathForSelection;

+ (id)editableBezierPathSourceWithPathSource:(id)a0;
+ (id)editableBezierPathSourceWithBezierPath:(id)a0;
+ (id)editableBezierPathSource;

- (void)removeNode:(id)a0;
- (void)setNaturalSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })naturalSize;
- (void)addNode:(id)a0;
- (void)closePath;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)moveToPoint:(struct CGPoint { double x0; double x1; })a0;
- (id)init;
- (BOOL)isCircular;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)lineToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)dealloc;
- (void)removeLastNode;
- (void)transformUsingAffineTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (BOOL)isRectangular;
- (void)curveToPoint:(struct CGPoint { double x0; double x1; })a0 controlPoint1:(struct CGPoint { double x0; double x1; })a1 controlPoint2:(struct CGPoint { double x0; double x1; })a2;
- (void)setBezierPath:(id)a0;
- (long long)mixingTypeWithObject:(id)a0;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (id)bezierPathWithoutFlips;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })pathFlipTransform;
- (struct CGPath { } *)pathWithoutFlips;
- (void)alignToOrigin;
- (id)nodePriorToNode:(id)a0;
- (id)nodeAfterNode:(id)a0;
- (void)reverseDirection;
- (void)offsetSelectedNodesByDelta:(struct CGPoint { double x0; double x1; })a0;
- (void)offsetSelectedEdgesByDelta:(struct CGPoint { double x0; double x1; })a0;
- (void)deleteSelectedNodes;
- (void)selectAllNodes;
- (void)deselectAllNodes;
- (id)bezierNodeUnderPoint:(struct CGPoint { double x0; double x1; })a0 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 andTolerance:(double)a2 returningType:(long long *)a3;
- (id)insertNodeAtPoint:(struct CGPoint { double x0; double x1; })a0 tolerance:(double)a1;
- (void)sharpenAllNodes;
- (void)smoothNode:(id)a0;
- (void)convertToHobby;
- (void)deleteSelectedNodesForced:(BOOL)a0;
- (void)toggleNode:(id)a0 toType:(int)a1 prevNode:(id)a2 nextNode:(id)a3;
- (void)smoothAllNodes;
- (id)subpathsForConnectingUsingFirstSubpathFirstNode:(BOOL *)a0 andSecondPathFirstNode:(BOOL *)a1;
- (id)splitEdge:(long long)a0 at:(double)a1 fromSubpath:(long long)a2;
- (void)adjustGeometryForAlignToOrigin:(id)a0;
- (void)setLockedFlipTransform:(BOOL)a0;
- (Class)preferredRepClass;
- (double)distanceToPoint:(struct CGPoint { double x0; double x1; })a0 subpathIndex:(unsigned long long *)a1 elementIndex:(unsigned long long *)a2 tValue:(double *)a3 threshold:(double)a4;
- (BOOL)bezierPathUnderPoint:(struct CGPoint { double x0; double x1; })a0 withTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a1 tolerance:(double)a2;
- (void)toggleSelectedNodesToType:(int)a0;
- (void)selectSubpathForNode:(id)a0 toggle:(BOOL)a1;
- (BOOL)canConnectSelectedNodes;
- (void)connectSelectedNodes;
- (BOOL)canCloseSelectedNodes;
- (void)closeSelectedNodes;
- (void)deleteSelectedEdges;
- (void)splitSelectedEdges;
- (void)splitSelectedNodes;
- (BOOL)canCutAtSelectedNodes;
- (void)cutAtSelectedNodes;
- (void)smoothCurveToPoint:(struct CGPoint { double x0; double x1; })a0 controlPoint1:(struct CGPoint { double x0; double x1; })a1 controlPoint2:(struct CGPoint { double x0; double x1; })a2;

@end
