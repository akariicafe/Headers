@class NSString, _PASLock;

@interface ATXClientModelCacheManager : NSObject <ATXClientModelCacheManagerProtocol> {
    _PASLock *_clientModelCacheHandlersLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cacheDirectory;
- (id)cachedSuggestionsForClientModel:(id)a0;
- (void)initGuardedData;
- (id)lastCacheUpdateDateForClientModel:(id)a0;
- (id)cachedSuggestionsForAllClientModels;
- (void)updateCachedSuggestions:(id)a0;
- (void)addCacheHandlersForExistingClientModelCaches;
- (void)addNewCacheHandlerIfNeededGivenExistingCacheHandlersInGuardedData:(id)a0 clientModelId:(id)a1;
- (double)cacheAgeForClientModel:(id)a0;
- (id)init;
- (id)cacheFileHandlerForClientModel:(id)a0 guardedData:(id)a1;
- (void).cxx_destruct;

@end
