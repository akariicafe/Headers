@class MANodeFilter;

@interface MANodeFilterRelation : MARelation

@property (readonly, copy, nonatomic) MANodeFilter *nodeFilter;

+ (id)scanRelationWithScanner:(id)a0;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)inverse;
- (id)visualString;
- (void)unionAdjacencyListFromSource:(id)a0 toTargets:(id)a1;
- (void)unionAdjacencyListFromSources:(id)a0 toTargets:(id)a1;
- (BOOL)unionAdjacencySetFromSourceNodeIdentifiers:(id)a0 toTargetNodeIdentifiers:(id)a1 graphStore:(id)a2 error:(id *)a3;
- (id)initWithNodeFilter:(id)a0;

@end
