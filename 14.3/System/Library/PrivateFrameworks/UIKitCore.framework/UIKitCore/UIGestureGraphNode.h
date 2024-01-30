@class NSSet, NSMutableSet, NSMapTable;

@interface UIGestureGraphNode : UIGestureGraphElement {
    NSMutableSet *_inEdges;
    NSMutableSet *_outEdges;
    NSMutableSet *_inOutEdges;
    NSMapTable *_edgesByLabel;
}

@property (readonly, nonatomic) unsigned long long edgeCount;
@property (readonly, nonatomic) NSSet *allEdges;
@property (readonly, nonatomic) NSSet *inEdges;
@property (readonly, nonatomic) NSSet *outEdges;
@property (readonly, nonatomic) NSSet *inOutEdges;

- (void)_removeEdge:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)typeOfEdge:(id)a0;
- (void)enumerateEdgesFromNode:(id)a0 usingBlock:(id /* block */)a1;
- (void)enumerateNeighborNodesUsingBlock:(id /* block */)a0;
- (BOOL)isOutEdge:(id)a0;
- (void)enumerateEdgesTowardNode:(id)a0 usingBlock:(id /* block */)a1;
- (id)description;
- (void)enumerateEdgesBetweenNode:(id)a0 usingBlock:(id /* block */)a1;
- (unsigned long long)edgeCountForLabel:(id)a0;
- (BOOL)isInOutEdge:(id)a0;
- (BOOL)hasEdgeTowardNode:(id)a0;
- (void)_addEdge:(id)a0;
- (BOOL)hasEdgeBetweenNode:(id)a0;
- (id)edgesForLabel:(id)a0;
- (BOOL)hasEdgeFromNode:(id)a0;
- (BOOL)isInEdge:(id)a0;
- (id)_edgesForType:(unsigned long long)a0 createIfNeeded:(BOOL)a1;

@end
