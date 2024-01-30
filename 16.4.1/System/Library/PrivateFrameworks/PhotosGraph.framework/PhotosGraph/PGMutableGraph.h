@interface PGMutableGraph : PGGraph

- (id)addUniqueEdgeWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 properties:(id)a4;
- (id)addUniquelyIdentifiedNodeWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2 didCreate:(BOOL *)a3;
- (id)addEdgeWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 domain:(unsigned short)a3 properties:(id)a4;
- (id)addUniqueNodeWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2 didCreate:(BOOL *)a3;
- (id)addNodeWithLabel:(id)a0 domain:(unsigned short)a1 properties:(id)a2;

@end
