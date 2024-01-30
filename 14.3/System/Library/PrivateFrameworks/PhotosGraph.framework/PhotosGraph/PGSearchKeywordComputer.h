@class NSDictionary, PGGraph, PGSearchComputationCache;

@interface PGSearchKeywordComputer : NSObject {
    PGGraph *_graph;
}

@property (readonly, nonatomic) NSDictionary *personLocalIdentifiersBySocialGroupUUID;
@property (readonly, nonatomic) PGSearchComputationCache *searchComputationCache;

- (id)initWithGraph:(id)a0 searchComputationCache:(id)a1;
- (void).cxx_destruct;
- (id)searchableAssetUUIDsBySocialGroupWithEventUUIDs:(id)a0 ofType:(unsigned long long)a1 isFullAnalysis:(BOOL)a2;
- (id)_personUUIDsInSocialGroupNode:(id)a0;
- (id)searchKeywordsByEventWithEventUUIDs:(id)a0 ofType:(unsigned long long)a1;
- (void)_enumerateBusinessAndPublicEventKeywordsForEvent:(id)a0 usingBlock:(id /* block */)a1;
- (id)eventNodeForUUID:(id)a0 ofType:(unsigned long long)a1;
- (id)assetSearchKeywordsByMomentUUIDWithEventUUIDs:(id)a0 ofType:(unsigned long long)a1;

@end
