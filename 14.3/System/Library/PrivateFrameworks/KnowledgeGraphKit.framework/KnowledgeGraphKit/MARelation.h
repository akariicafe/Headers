@class NSString;

@interface MARelation : NSObject

@property (readonly, nonatomic) NSString *visualString;
@property (readonly, nonatomic) MARelation *transitiveClosure;
@property (readonly, nonatomic) MARelation *optionalStep;
@property (readonly, nonatomic) MARelation *inverse;

+ (id)union:(id)a0;
+ (id)chain:(id)a0;
+ (id)scanRelationWithScanner:(id)a0;
+ (id)_scanNonChainRelationWithScanner:(id)a0;
+ (id)relationWithVisualString:(id)a0;

- (id)description;
- (void)unionAdjacencyListFromSource:(id)a0 toTargets:(id)a1;
- (void)unionAdjacencyListFromSources:(id)a0 toTargets:(id)a1;
- (BOOL)unionAdjacencySetFromSourceNodeIdentifiers:(id)a0 toTargetNodeIdentifiers:(id)a1 graphStore:(id)a2 error:(id *)a3;
- (id)adjacencySetFromSourceNodeIdentifiers:(id)a0 graphStore:(id)a1 error:(id *)a2;
- (id)initForSubclassing;
- (id)adjacencyListFromSource:(id)a0;
- (id)adjacencyListFromSources:(id)a0;
- (BOOL)unionAdjacencySetFromSourceNodeIdentifier:(unsigned long long)a0 toTargetNodeIdentifiers:(id)a1 graphStore:(id)a2 error:(id *)a3;
- (id)adjacencySetFromSourceNodeIdentifier:(unsigned long long)a0 graphStore:(id)a1 error:(id *)a2;
- (id)repeatWithCount:(unsigned long long)a0;
- (id)repeatWithMinCount:(unsigned long long)a0 maxCount:(unsigned long long)a1;

@end
