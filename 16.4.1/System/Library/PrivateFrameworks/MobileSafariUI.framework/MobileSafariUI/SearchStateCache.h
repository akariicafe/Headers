@class NSMapTable;

@interface SearchStateCache : NSObject {
    NSMapTable *_cache;
}

- (id)init;
- (void).cxx_destruct;
- (id)_cacheQueryForTabDocument:(id)a0;
- (void)cacheAcceptanceOfCompletionItem:(id)a0 withCompletionList:(id)a1 forTabDocument:(id)a2;
- (void)cacheSearchQueryID:(long long)a0 forTab:(id)a1;
- (id)cachedCompletionListForTabDocument:(id)a0;
- (void)clearParsecQueryOriginatingFromSearchSuggestionInTabDocument:(id)a0;
- (long long)idOfParsecQueryOriginatingFromSearchSuggestionInTabDocument:(id)a0;
- (void)removeCachedSearchStateForTabDocument:(id)a0;

@end
