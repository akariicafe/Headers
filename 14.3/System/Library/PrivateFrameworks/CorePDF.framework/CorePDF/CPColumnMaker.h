@class NSMutableArray, CPZone;

@interface CPColumnMaker : NSObject {
    NSMutableArray *columns;
    CPZone *currentZone;
    NSMutableArray *allParagraphs;
    NSMutableArray *thinHorizontalShapes;
    NSMutableArray *otherShapes;
    NSMutableArray *images;
    NSMutableArray *paragraphWrappers;
    double maxParagraphDistance;
}

@property struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } pageBounds;

- (id)init;
- (void)dealloc;
- (id)columns;
- (void)makeColumnsFrom:(id)a0 zone:(id)a1;
- (BOOL)paragraph:(id)a0 isAbove:(id)a1;
- (BOOL)paragraph:(id)a0 isBelow:(id)a1;
- (id)paragraphAbove:(id)a0 in:(id)a1;
- (BOOL)paragraph:(id)a0 isLinkedBelowTo:(id)a1;
- (void)intersectionCallout:(id)a0;
- (double)averageSpacing:(id)a0;
- (BOOL)closeImagesBetween:(id)a0 and:(id)a1 bounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)partitionShapes:(id)a0;
- (void)callOuts;
- (BOOL)canSafelyAdd:(id)a0 to:(id)a1;
- (void)splitColumns:(id)a0;
- (void)anchorImages;
- (BOOL)intervalOverlapLeft:(double)a0 right:(double)a1 paragraphs:(id)a2;
- (BOOL)cuttingShapeBetween:(id)a0 and:(id)a1;
- (BOOL)paragraph:(id)a0 notOnSameShapeAs:(id)a1;
- (id)paragraphBelow:(id)a0 in:(id)a1;
- (id)chunkAbove:(id)a0 in:(id)a1;
- (BOOL)column:(id)a0 isLinkedBelowTo:(id)a1;

@end
