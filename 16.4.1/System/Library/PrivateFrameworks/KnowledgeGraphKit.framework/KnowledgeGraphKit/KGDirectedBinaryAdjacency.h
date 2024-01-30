@class NSString, KGElementIdentifierSet, _TtC17KnowledgeGraphKit32KGWrapperDirectedBinaryAdjacency;

@interface KGDirectedBinaryAdjacency : NSObject {
    _TtC17KnowledgeGraphKit32KGWrapperDirectedBinaryAdjacency *_underlyingObject;
}

@property (readonly, nonatomic) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *description;
@property (readonly, nonatomic) KGElementIdentifierSet *sources;
@property (readonly, nonatomic) KGElementIdentifierSet *targets;
@property (readonly, nonatomic) unsigned long long sourcesCount;
@property (readonly, nonatomic) _TtC17KnowledgeGraphKit32KGWrapperDirectedBinaryAdjacency *wrapper;

+ (id)identityWith:(id)a0;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)mutableCopy;
- (void).cxx_destruct;
- (id)unionWith:(id)a0;
- (id)differenceWith:(id)a0;
- (BOOL)containsSource:(unsigned long long)a0 target:(unsigned long long)a1;
- (void)enumerateTargetsBySourceWith:(id /* block */)a0;
- (id)intersectingSourcesWith:(id)a0;
- (id)intersectingTargetsWith:(id)a0;
- (id)joinOnTargetsOfAdjacency:(id)a0;
- (id)subtractingSourcesWith:(id)a0;
- (id)subtractingTargetsWith:(id)a0;
- (id)targetsForSourceIdentifier:(unsigned long long)a0;
- (id)targetsForSources:(id)a0;
- (id)targetsWithMinimumCount:(unsigned long long)a0;
- (id)transposed;

@end
