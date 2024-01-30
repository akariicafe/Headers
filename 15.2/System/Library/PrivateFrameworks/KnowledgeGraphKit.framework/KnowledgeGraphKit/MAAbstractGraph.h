@class NSMutableArray;

@interface MAAbstractGraph : NSObject {
    NSMutableArray *_nodes;
    NSMutableArray *_edges;
}

- (void).cxx_destruct;
- (id)init;
- (id)insertNodeWithLabel:(id)a0;
- (id)insertEdgeWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 minimum:(unsigned long long)a3 maximum:(unsigned long long)a4 directed:(BOOL)a5;

@end
