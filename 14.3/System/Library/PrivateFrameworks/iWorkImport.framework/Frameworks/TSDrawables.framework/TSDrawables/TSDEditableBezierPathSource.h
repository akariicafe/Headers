@class NSArray, TSDBezierNode;

@interface TSDEditableBezierPathSource : TSDPathSource <TSDRealignablePathSource, TSDMixing> {
    BOOL mHasLockedFlipTransform;
    struct CGAffineTransform { double a; double b; double c; double d; double tx; double ty; } mLockedFlipTransform;
}

@property (copy, nonatomic) NSArray *subpaths;
@property (copy, nonatomic) NSArray *nodes;
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
@property (readonly, nonatomic) const struct CGPath { } *subpathForSelection;
@property (nonatomic) unsigned long long activeSubpath;
@property (readonly, nonatomic) const struct CGPath { } *pathWithoutFlips;

+ (id)editableBezierPathSourceWithPathSource:(id)a0;
+ (id)editableBezierPathSourceWithBezierPath:(id)a0;
+ (id)editableBezierPathSource;

- (void)removeNode:(id)a0;
- (void)setNaturalSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })naturalSize;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isCircular;
- (id)initWithArchive:(const struct PathSourceArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; struct PointPathSourceArchive *x6; struct ScalarPathSourceArchive *x7; struct BezierPathSourceArchive *x8; struct CalloutPathSourceArchive *x9; struct ConnectionLinePathSourceArchive *x10; struct EditableBezierPathSourceArchive *x11; BOOL x12; BOOL x13; } *)a0;
- (void)closePath;
- (unsigned long long)hash;
- (id)description;
- (void)removeLastNode;
- (BOOL)isEqual:(id)a0;
- (void)lineToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)moveToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)addNode:(id)a0;
- (void)saveToArchive:(struct PathSourceArchive { void /* function */ **x0; struct InternalMetadataWithArena { void *x0; } x1; struct HasBits<1> { unsigned int x0[1]; } x2; struct CachedSize { struct atomic<int> { struct __cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> > { _Atomic int x0; } x0; } x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x5; struct PointPathSourceArchive *x6; struct ScalarPathSourceArchive *x7; struct BezierPathSourceArchive *x8; struct CalloutPathSourceArchive *x9; struct ConnectionLinePathSourceArchive *x10; struct EditableBezierPathSourceArchive *x11; BOOL x12; BOOL x13; } *)a0;
- (void)transformUsingAffineTransform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })a0;
- (BOOL)isRectangular;
- (void)curveToPoint:(struct CGPoint { double x0; double x1; })a0 controlPoint1:(struct CGPoint { double x0; double x1; })a1 controlPoint2:(struct CGPoint { double x0; double x1; })a2;
- (void)setBezierPath:(id)a0;
- (id)mixedObjectWithFraction:(double)a0 ofObject:(id)a1;
- (id)bezierPathWithoutFlips;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })pathFlipTransform;
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
- (void)sharpenAllNodes;
- (void)smoothNode:(id)a0;
- (void)convertToHobby;
- (void)deleteSelectedNodesForced:(BOOL)a0;
- (void)toggleNode:(id)a0 toType:(int)a1 prevNode:(id)a2 nextNode:(id)a3;
- (void)smoothAllNodes;
- (id)subpathsForConnectingUsingFirstSubpathFirstNode:(BOOL *)a0 andSecondPathFirstNode:(BOOL *)a1;
- (id)splitEdge:(long long)a0 at:(double)a1 fromSubpath:(long long)a2;
- (void)setLockedFlipTransform:(BOOL)a0;
- (Class)preferredRepClass;
- (double)distanceToPoint:(struct CGPoint { double x0; double x1; })a0 subpathIndex:(unsigned long long *)a1 elementIndex:(unsigned long long *)a2 tValue:(double *)a3 threshold:(double)a4;
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
- (long long)mixingTypeWithObject:(id)a0 context:(id)a1;
- (BOOL)isEqualWithStrictComparison:(id)a0;
- (id)inferredAccessibilityDescription;
- (void)beginNewSubpath;
- (void)updateSmoothNodes;
- (void)morphWithMorphInfo:(id)a0;
- (void)addTemporarySmoothNodes;

@end
