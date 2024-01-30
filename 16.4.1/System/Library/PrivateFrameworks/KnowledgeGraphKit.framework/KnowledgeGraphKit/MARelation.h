@class NSString;

@interface MARelation : NSObject

@property (readonly, nonatomic) NSString *visualString;
@property (readonly, nonatomic) MARelation *transitiveClosure;
@property (readonly, nonatomic) BOOL isTransitive;
@property (readonly, nonatomic) MARelation *optionalStep;
@property (readonly, nonatomic) MARelation *excludeSource;
@property (readonly, nonatomic) MARelation *inverse;

+ (id)chain:(id)a0;
+ (id)union:(id)a0;
+ (id)_scanNonChainRelationWithScanner:(id)a0;
+ (id)relationWithVisualString:(id)a0;
+ (id)scanRelationWithScanner:(id)a0;

- (id)description;
- (id)adjacencyByJoiningWithAdjacency:(id)a0 graph:(id)a1;
- (id)adjacencyWithStartNodeIdentifiers:(id)a0 graph:(id)a1;
- (id)initForSubclassing;
- (id)repeatWithCount:(unsigned long long)a0;
- (id)repeatWithMinCount:(unsigned long long)a0 maxCount:(unsigned long long)a1;
- (void)unionAdjacencySetFromSourceNodeIdentifiers:(id)a0 toTargetNodeIdentifiers:(id)a1 graph:(id)a2;

@end
