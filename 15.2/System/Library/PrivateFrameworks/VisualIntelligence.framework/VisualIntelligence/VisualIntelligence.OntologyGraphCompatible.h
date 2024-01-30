@interface VisualIntelligence.OntologyGraphCompatible : NSObject {
    void /* unknown type, empty encoding */ ontologyGraph;
}

@property (nonatomic, readonly) unsigned long long count;

- (void).cxx_destruct;
- (id)init;
- (BOOL)isDescendentWithDescendent:(id)a0 ancestor:(id)a1;
- (id)ontologyNodeWithKnowledgeGraphID:(id)a0;
- (id)findLeastCommonAncestorWithNode1:(id)a0 node2:(id)a1;

@end
