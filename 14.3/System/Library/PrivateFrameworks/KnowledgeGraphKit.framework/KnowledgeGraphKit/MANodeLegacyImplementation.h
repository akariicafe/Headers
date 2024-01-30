@class NSString, NSMutableArray, MANode;

@interface MANodeLegacyImplementation : NSObject <MANodeImplementationProtocol> {
    NSMutableArray *_edges;
    MANode *_node;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithNode:(id)a0;
- (BOOL)hasEdgeOfType:(unsigned long long)a0 withLabel:(id)a1 inDomain:(unsigned short)a2;
- (id)siblingNodesThroughEdgesWithLabel:(id)a0 inDomain:(unsigned short)a1;
- (unsigned long long)countOfEdgesOfType:(unsigned long long)a0 withLabel:(id)a1 inDomain:(unsigned short)a2;
- (void).cxx_destruct;
- (unsigned long long)memoryFootprint:(id)a0;
- (id)anyEdgeOfType:(unsigned long long)a0 withNode:(id)a1;
- (id)neighborNodesWithLabel:(id)a0 inDomain:(unsigned short)a1;
- (id)neighborNodesThroughEdgesOfType:(unsigned long long)a0 withLabel:(id)a1 inDomain:(unsigned short)a2;
- (id)edgesOfType:(unsigned long long)a0 withNode:(id)a1;
- (void)enumerateSiblingNodesThroughEdgesWithLabel:(id)a0 inDomain:(unsigned short)a1 usingBlock:(id /* block */)a2;
- (void)enumerateEdgesInDomains:(id)a0 usingBlock:(id /* block */)a1;
- (BOOL)hasEdgeOfType:(unsigned long long)a0 withNode:(id)a1;
- (id)anyNeighborNodeThroughEdgesOfType:(unsigned long long)a0 withLabel:(id)a1 inDomain:(unsigned short)a2;
- (void)enumerateNeighborNodesWithLabel:(id)a0 inDomain:(unsigned short)a1 usingBlock:(id /* block */)a2;
- (void)enumerateSiblingNodesThroughEdgesInDomains:(id)a0 usingBlock:(id /* block */)a1;
- (id)edgesOfType:(unsigned long long)a0 withLabel:(id)a1 inDomain:(unsigned short)a2;
- (void)enumerateEdgesOfType:(unsigned long long)a0 withLabel:(id)a1 inDomain:(unsigned short)a2 usingBlock:(id /* block */)a3;
- (id)anyEdgeOfType:(unsigned long long)a0 withLabel:(id)a1 inDomain:(unsigned short)a2;
- (void)enumerateNeighborNodesThroughEdgesOfType:(unsigned long long)a0 withLabel:(id)a1 inDomain:(unsigned short)a2 usingBlock:(id /* block */)a3;
- (void)removeEdge:(id)a0;
- (void)addEdge:(id)a0;
- (void)enumerateDeepNeighborsWithLabel:(id)a0 domain:(unsigned short)a1 edgeType:(unsigned long long)a2 excluding:(id)a3 shouldStop:(BOOL *)a4 block:(id /* block */)a5;
- (void)enumerateNeighborNodesThroughEdgesInDomains:(id)a0 usingBlock:(id /* block */)a1;

@end
