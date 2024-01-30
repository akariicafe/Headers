@class NSMutableOrderedSet;

@interface GVNode : NSObject

@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) double w;
@property (nonatomic) double h;
@property (nonatomic) double cx;
@property (nonatomic) double cy;
@property (retain, nonatomic) NSMutableOrderedSet *inNodes;
@property (retain, nonatomic) NSMutableOrderedSet *outNodes;
@property (readonly) unsigned long long inDegree;
@property (readonly) unsigned long long outDegree;
@property (nonatomic) long long rank;
@property (nonatomic) long long index;
@property (nonatomic) GVNode *prev;
@property (nonatomic) GVNode *next;
@property (nonatomic) unsigned long long inPriority;
@property (nonatomic) unsigned long long outPriority;
@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } frame;
@property (nonatomic) struct CGPoint { double x0; double x1; } origin;
@property (nonatomic) struct CGPoint { double x0; double x1; } center;
@property (nonatomic) struct CGSize { double x0; double x1; } size;

- (void)dealloc;
- (id)init;
- (id)description;
- (void)computePriority;
- (void)removeEdgeFrom:(id)a0;
- (void)addEdgeFrom:(id)a0;
- (void)addEdgeTo:(id)a0;
- (BOOL)hasEdgeFrom:(id)a0;
- (BOOL)hasEdgeTo:(id)a0;
- (void)removeEdgeTo:(id)a0;
- (void)traversePostorder:(int)a0 withCallback:(id /* block */)a1 stopper:(id /* block */)a2 randomize:(BOOL)a3;
- (void)traversePreorder:(int)a0 withCallback:(id /* block */)a1 randomize:(BOOL)a2;

@end
