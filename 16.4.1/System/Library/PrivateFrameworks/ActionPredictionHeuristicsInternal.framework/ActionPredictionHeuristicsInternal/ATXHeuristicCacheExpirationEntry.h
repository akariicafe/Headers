@class NSString, ATXHeuristicResultCache;

@interface ATXHeuristicCacheExpirationEntry : NSObject

@property (retain, nonatomic) NSString *heuristicName;
@property (weak, nonatomic) ATXHeuristicResultCache *cache;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initWithHeuristic:(id)a0 cache:(id)a1;
- (void).cxx_destruct;

@end
