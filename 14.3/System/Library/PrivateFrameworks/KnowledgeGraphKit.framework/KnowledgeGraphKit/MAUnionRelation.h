@class NSArray;

@interface MAUnionRelation : MARelation

@property (readonly, nonatomic) NSArray *relations;

+ (id)scanRelationWithScanner:(id)a0;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)inverse;
- (id)visualString;
- (id)initWithRelations:(id)a0;
- (void)unionAdjacencyListFromSource:(id)a0 toTargets:(id)a1;
- (void)unionAdjacencyListFromSources:(id)a0 toTargets:(id)a1;
- (BOOL)unionAdjacencySetFromSource:(unsigned long long)a0 toTargetNodeIdentifiers:(id)a1 graphStore:(id)a2 error:(id *)a3;
- (BOOL)unionAdjacencySetFromSourceNodeIdentifiers:(id)a0 toTargetNodeIdentifiers:(id)a1 graphStore:(id)a2 error:(id *)a3;

@end
