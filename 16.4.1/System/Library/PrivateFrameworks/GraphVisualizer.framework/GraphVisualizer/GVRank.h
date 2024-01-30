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
- (void)addNode:(id)a0;
- (id)nodes;
- (void)dealloc;
- (void)buildNodeIterators;
- (void)centerNode:(id)a0 at:(double)a1;
- (void)centerNodesWithRespectoTo:(id)a0;
- (void)exchangeNodeAtIndex:(unsigned long long)a0 withNodeAtIndex:(unsigned long long)a1;
- (unsigned long long)inCrossings;
- (id)initWithSeparation:(struct CGSize { double x0; double x1; })a0;
- (id)neighborsOfNode:(id)a0;
- (unsigned long long)outCrossings;
- (struct CGSize { double x0; double x1; })sizeForDummy;
- (void)sortByIndex;

@end
