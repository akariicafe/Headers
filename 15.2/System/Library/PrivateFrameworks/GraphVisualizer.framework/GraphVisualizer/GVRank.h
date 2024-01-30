@class NSMutableArray;

@interface GVRank : NSObject {
    NSMutableArray *nodes;
    double separation;
}

@property (nonatomic) GVRank *prev;
@property (nonatomic) GVRank *next;
@property (readonly, nonatomic) double width;
@property (readonly, nonatomic) double height;

- (void)removeNode:(id)a0;
- (id)nodes;
- (void)addNode:(id)a0;
- (void)dealloc;
- (id)initWithSeparation:(struct CGSize { double x0; double x1; })a0;
- (id)neighborsOfNode:(id)a0;
- (void)sortByIndex;
- (void)exchangeNodeAtIndex:(unsigned long long)a0 withNodeAtIndex:(unsigned long long)a1;
- (void)buildNodeIterators;
- (unsigned long long)inCrossings;
- (unsigned long long)outCrossings;
- (struct CGSize { double x0; double x1; })sizeForDummy;
- (void)centerNodesWithRespectoTo:(id)a0;
- (void)centerNode:(id)a0 at:(double)a1;

@end
