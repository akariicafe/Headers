@class NSString, _PASLock;

@interface ATXClientModelCacheManager : NSObject <ATXClientModelCacheManagerProtocol> {
    _PASLock *_clientModelCacheHandlersLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initGuardedData;
- (id)init;
- (void).cxx_destruct;
- (double)cacheAgeForClientModel:(id)a0;
- (void)updateCachedSuggestions:(id)a0;
- (void)addNewCacheHandlerIfNeededGivenExistingCacheHandlersInGuardedData:(id)a0 clientModelId:(id)a1;
- (id)cachedSuggestionsForClientModel:(id)a0;
- (id)cacheDirectory;
- (void)addCacheHandlersForExistingClientModelCaches;
- (id)cachedSuggestionsForAllClientModels;
- (id)cacheFileHandlerForClientModel:(id)a0 guardedData:(id)a1;

@end
