@class NSSet, NSMapTable;

@interface UIGestureGraph : NSObject {
    NSMapTable *_nodesByLabel;
    NSMapTable *_edgesByLabel;
}

@property (readonly, nonatomic) unsigned long long nodeCount;
@property (readonly, nonatomic) NSSet *nodeLabels;
@property (readonly, nonatomic) unsigned long long edgeCount;
@property (readonly, nonatomic) NSSet *edgeLabels;

- (id)_allNodes;
- (void)removeNode:(id)a0;
- (void)enumerateEdgesWithBlock:(id /* block */)a0;
- (void)_addNode:(id)a0;
- (void)enumerateNodesWithLabel:(id)a0 usingBlock:(id /* block */)a1;
- (unsigned long long)nodeCountForLabel:(id)a0;
- (void)removeNodeEdges:(id)a0;
- (id)init;
- (id)_edgesForLabel:(id)a0;
- (void).cxx_destruct;
- (id)addUniqueNodeWithLabel:(id)a0 properties:(id)a1;
- (void)removeNodes:(id)a0;
- (void)enumerateEdgesWithLabel:(id)a0 usingBlock:(id /* block */)a1;
- (id)addNodeWithLabel:(id)a0 properties:(id)a1;
- (id)addUniqueEdgeWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 directed:(BOOL)a3 properties:(id)a4;
- (id)nodesForLabel:(id)a0;
- (id)_allEdges;
- (void)traverseGraphBreadthFirstFromNode:(id)a0 directed:(BOOL)a1 usingBlock:(id /* block */)a2;
- (void)removeEdges:(id)a0;
- (id)description;
- (id)nodesForLabel:(id)a0 properties:(id)a1;
- (id)addNodeWithLabel:(id)a0;
- (id)_nodesForLabel:(id)a0;
- (unsigned long long)edgeCountForLabel:(id)a0;
- (id)addEdgeWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 directed:(BOOL)a3;
- (id)edgesForLabel:(id)a0 properties:(id)a1;
- (void)removeEdge:(id)a0;
- (void)removeAllObjects;
- (void)enumerateNodesWithBlock:(id /* block */)a0;
- (void)_addEdge:(id)a0;
- (id)edgesForLabel:(id)a0;
- (void)traverseGraphDepthFirstFromNode:(id)a0 directed:(BOOL)a1 usingBlock:(id /* block */)a2;

@end
