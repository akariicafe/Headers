@class NSMutableArray, CPPage;

@interface CPZoneBorder : NSObject <NSCopying, CPCopying> {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
    CPPage *page;
    NSMutableArray *ownerArray;
    NSMutableArray *graphicObjects;
    NSMutableArray *neighbors;
    NSMutableArray *intersections;
    BOOL isHorizontal;
    BOOL hasForwardVector;
    BOOL hasBackwardVector;
    double overhangMin;
    double overhangMax;
}

+ (void)outerVertices:(struct CGPoint { double x0; double x1; } *)a0 fromBorders:(id)a1 swollenBy:(double)a2;
+ (int)clockwiseWindingNumberOfShapeWithBorders:(id)a0;
+ (void)addIntersectionBetweenBorder:(id)a0 andBorder:(id)a1 atRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })extendRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
+ (void)removeIntersectionBetweenBorder:(id)a0 andBorder:(id)a1;

- (BOOL)isVertical;
- (id)page;
- (id)init;
- (long long)zOrder;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })bounds;
- (id)neighborAtIndex:(unsigned int)a0;
- (void)addNeighbor:(id)a0;
- (BOOL)isHorizontal;
- (void)combine:(id)a0;
- (long long)compareXBounds:(id)a0;
- (long long)compareYBounds:(id)a0;
- (id)initSuper;
- (unsigned int)graphicObjectCount;
- (id)graphicObjectAtIndex:(unsigned int)a0;
- (BOOL)hasNeighborShape:(id)a0;
- (unsigned int)indexOfIntersectionWith:(id)a0;
- (unsigned int)neighborCount;
- (BOOL)hasNeighborShape:(id)a0 atSide:(int)a1;
- (id)graphicObjects;
- (void)addGraphicObject:(id)a0;
- (unsigned int)intersectionCount;
- (BOOL)windsClockwiseOnto:(id)a0;
- (BOOL)continues:(id)a0;
- (id)getNextBorder:(unsigned int)a0;
- (BOOL)extractCycleTo:(id)a0 goingForward:(BOOL)a1 throughIntersectionIndex:(unsigned int)a2 returningTo:(id)a3 atRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a4;
- (id)copyWithoutIntersections;
- (BOOL)hasClockwiseVectorAtIndex:(unsigned int)a0 startingForward:(BOOL)a1;
- (BOOL)hasCounterclockwiseVectorAtIndex:(unsigned int)a0 startingForward:(BOOL)a1;
- (void)addToArray:(id)a0;
- (void)trimToLastIntersections;
- (void)removeFromArray;
- (void)removeLooseThreadsStartingFrom:(id)a0;
- (id)initWithGraphicObject:(id)a0;
- (void)addToArray:(id)a0 atIndex:(unsigned int)a1;
- (void)removeFromArrayAtIndex:(unsigned int)a0;
- (id)ownerArray;
- (void)removeGraphicObjectAtIndex:(unsigned int)a0;
- (void)removeNeighborAtIndex:(unsigned int)a0;
- (void)setHasForwardVector:(BOOL)a0;
- (BOOL)hasForwardVector;
- (void)setHasBackwardVector:(BOOL)a0;
- (BOOL)hasBackwardVector;
- (void)setSide:(int)a0 ofPage:(id)a1;
- (BOOL)intersectsWith:(id)a0 atRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (void)instantiateVectors;
- (BOOL)hasVectorGoingForward:(BOOL)a0 startingAtIndex:(unsigned int *)a1;
- (BOOL)extractCycleTo:(id)a0 goingForward:(BOOL)a1 startingAtIndex:(unsigned int)a2;
- (BOOL)crosses:(id)a0;

@end
