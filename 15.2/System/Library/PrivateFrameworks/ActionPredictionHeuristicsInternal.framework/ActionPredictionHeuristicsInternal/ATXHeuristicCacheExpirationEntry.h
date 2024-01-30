@class NSString, ATXHeuristicResultCache;

@interface ATXHeuristicCacheExpirationEntry : NSObject

@property (retain, nonatomic) NSString *heuristicName;
@property (weak, nonatomic) ATXHeuristicResultCache *cache;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithHeuristic:(id)a0 cache:(id)a1;
- (unsigned long long)hash;

@end
