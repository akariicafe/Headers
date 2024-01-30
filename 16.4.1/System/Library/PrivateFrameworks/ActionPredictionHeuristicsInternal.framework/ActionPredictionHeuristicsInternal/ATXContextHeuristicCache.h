@class NSMutableDictionary, NSHashTable;

@interface ATXContextHeuristicCache : NSObject {
    NSMutableDictionary *_cache;
    NSHashTable *_criteriaTable;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

- (id)heuristicsCached;
- (void)dealloc;
- (id)nextChangeAfterDate:(id)a0;
- (void)evictAll;
- (void)setSuggestions:(id)a0 forKey:(id)a1;
- (id)suggestionsForKey:(id)a0;
- (id)init;
- (void)evictBefore:(id)a0;
- (id)allRelevantSuggestionsForDate:(id)a0;
- (void).cxx_destruct;
- (void)evict:(id)a0;

@end
