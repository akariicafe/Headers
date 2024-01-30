@class MAEdgeFilter;

@interface MANeighborRelation : MARelation

@property (readonly, nonatomic) unsigned long long edgeType;
@property (readonly, copy, nonatomic) MAEdgeFilter *edgeFilter;

+ (id)scanRelationWithScanner:(id)a0;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)inverse;
- (id)visualString;
- (void)unionAdjacencyListFromSource:(id)a0 toTargets:(id)a1;
- (BOOL)unionAdjacencySetFromSourceNodeIdentifiers:(id)a0 toTargetNodeIdentifiers:(id)a1 graphStore:(id)a2 error:(id *)a3;
- (id)initWithEdgeType:(unsigned long long)a0 edgeFilter:(id)a1;
- (id)adjacencySetFromSourceNodeIdentifiers:(id)a0 graphStore:(id)a1 error:(id *)a2;

@end
