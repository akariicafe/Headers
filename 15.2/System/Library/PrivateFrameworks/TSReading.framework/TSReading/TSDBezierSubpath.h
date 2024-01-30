@class TSDBezierNode, NSMutableArray, TSDBezierPath;

@interface TSDBezierSubpath : NSObject

@property (retain, nonatomic) NSMutableArray *nodes;
@property (nonatomic, getter=isClosed) BOOL closed;
@property (readonly, nonatomic) BOOL isRectangular;
@property (readonly, nonatomic) TSDBezierPath *bezierPath;
@property (readonly, nonatomic) TSDBezierNode *firstNode;
@property (readonly, nonatomic) TSDBezierNode *lastNode;
@property (readonly, nonatomic) BOOL allNodesSelected;
@property (readonly, nonatomic) BOOL hasSelectedNode;
@property (readonly, nonatomic) BOOL canDeleteSelectedNodes;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } nodeBounds;
@property (readonly, nonatomic) BOOL closeIfEndpointsAreEqual;

- (void)removeNode:(id)a0;
- (void)addNode:(id)a0;
- (id)description;
- (id)init;
- (BOOL)isCircular;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (void)removeLastNode;
- (void)transformUsingAffineTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (double)distanceToPoint:(struct CGPoint { double x0; double x1; })a0 elementIndex:(unsigned long long *)a1 tValue:(double *)a2 threshold:(double)a3;
- (void)updateReflectedState;
- (void)appendToBezierPath:(id)a0 selectedNodesOnly:(BOOL)a1 fromIndex:(unsigned long long)a2;
- (id)nodePriorToNode:(id)a0;
- (id)nodeAfterNode:(id)a0;
- (id)splitEdgeAtIndex:(unsigned long long)a0;
- (void)appendToBezierPath:(id)a0;
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
- (void)addNodesToArray:(id)a0;
- (void)convertToHobby;

@end
