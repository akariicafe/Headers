@class MARelation;

@interface MAMultiStepRelation : MARelation

@property (readonly, nonatomic) MARelation *base;
@property (readonly, nonatomic) unsigned long long minNumberOfSteps;
@property (readonly, nonatomic) unsigned long long maxNumberOfSteps;

+ (id)scanRelationWithScanner:(id)a0;

- (id)inverse;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)visualString;
- (void)unionAdjacencySetFromSourceNodeIdentifiers:(id)a0 toTargetNodeIdentifiers:(id)a1 graph:(id)a2;
- (id)adjacencyWithStartNodeIdentifiers:(id)a0 graph:(id)a1;
- (id)adjacencyByJoiningWithAdjacency:(id)a0 graph:(id)a1;
- (id)initWithBase:(id)a0 minNumberOfSteps:(unsigned long long)a1 maxNumberOfSteps:(unsigned long long)a2;
- (id)initWithBase:(id)a0 numberOfSteps:(unsigned long long)a1;

@end
