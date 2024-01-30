@class GVGraph, NSMutableArray;

@interface GVLayout : NSObject {
    unsigned long long *savedOrder;
    unsigned long long currentCrossings;
}

@property (nonatomic) GVGraph *graph;
@property (nonatomic) int direction;
@property (nonatomic) struct CGSize { double width; double height; } separation;
@property (retain, nonatomic) NSMutableArray *selfEdges;
@property (retain, nonatomic) NSMutableArray *ranks;

+ (struct CGSize { double x0; double x1; })layoutGraph:(id)a0 withDirection:(int)a1 separation:(struct CGSize { double x0; double x1; })a2;

- (void)dealloc;
- (void)transpose;
- (struct CGSize { double x0; double x1; })doLayout:(id)a0 direction:(int)a1 separation:(struct CGSize { double x0; double x1; })a2;
- (void)removeSelfEdges;
- (void)removeCycles;
- (void)assignRanks;
- (void)orderVertices;
- (void)assignCoordinates;
- (void)undoRemoveCycles;
- (void)_removeCycleDFS:(id)a0 visistedNodes:(id)a1 nodesInStack:(id)a2;
- (void)makeFeasibleTree;
- (void)minimizeCutValues;
- (void)normalizeRanks;
- (void)balanceRanks;
- (void)buildRankIterators;
- (void)initializeRanks;
- (void)initializeOrder;
- (void)weightedMedian:(unsigned long long)a0;
- (void)commitOrder;
- (unsigned long long)crossings;
- (void)saveOrder;
- (void)restoreOrder;
- (unsigned long long)medianValueOf:(id)a0 withRespectTo:(id)a1;
- (void)medianSort:(id)a0 withRespectTo:(id)a1;
- (void)assignNodePriorities;
- (void)assignNodeCoordinates;
- (void)assignRankCoordinates;
- (void)initializeNodeCoordinates;
- (void)medianPosition:(unsigned long long)a0;
- (void)packCutX:(unsigned long long)a0;
- (void)straightenX;
- (void)packCutY:(unsigned long long)a0;
- (void)straightenY;
- (void)undoRemoveSelfEdges;

@end
