@class NSString, NSArray, NSSet, ATXHeuristicResultCache;

@interface ATXHeuristicResultCacheEntry : NSObject {
    NSString *_heuristicName;
    ATXHeuristicResultCache *_cache;
    NSArray *_actions;
    NSSet *_expirers;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithHeuristic:(id)a0 cache:(id)a1;
- (void)setActions:(id)a0 expirers:(id)a1;

@end
