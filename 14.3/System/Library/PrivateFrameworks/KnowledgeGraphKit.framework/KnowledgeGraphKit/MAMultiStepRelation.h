@class MARelation;

@interface MAMultiStepRelation : MARelation

@property (readonly, nonatomic) MARelation *base;
@property (readonly, nonatomic) unsigned long long minNumberOfSteps;
@property (readonly, nonatomic) unsigned long long maxNumberOfSteps;

+ (id)scanRelationWithScanner:(id)a0;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)inverse;
- (id)visualString;
- (void)unionAdjacencyListFromSource:(id)a0 toTargets:(id)a1;
- (void)unionAdjacencyListFromSources:(id)a0 toTargets:(id)a1;
- (BOOL)unionAdjacencySetFromSourceNodeIdentifiers:(id)a0 toTargetNodeIdentifiers:(id)a1 graphStore:(id)a2 error:(id *)a3;
- (id)initWithBase:(id)a0 minNumberOfSteps:(unsigned long long)a1 maxNumberOfSteps:(unsigned long long)a2;
- (id)initWithBase:(id)a0 numberOfSteps:(unsigned long long)a1;

@end
