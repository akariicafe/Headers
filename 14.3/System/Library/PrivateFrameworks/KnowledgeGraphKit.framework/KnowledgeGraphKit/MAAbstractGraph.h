@class NSMutableArray;

@interface MAAbstractGraph : NSObject {
    NSMutableArray *_nodes;
    NSMutableArray *_edges;
}

- (id)init;
- (void).cxx_destruct;
- (id)addUniqueNodeWithLabel:(id)a0 didCreate:(BOOL *)a1;
- (id)addUniqueEdgeWithLabel:(id)a0 sourceNode:(id)a1 targetNode:(id)a2 didCreate:(BOOL *)a3;

@end
