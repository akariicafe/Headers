@class NSString, NSMapTable;

@interface ATXExecutableReferenceManager : NSObject {
    NSString *_path;
    double _minDurationForTrackedReferencesToStayAround;
    NSMapTable *__cachedExecutableToReferenceMapForBatchUpdates;
    BOOL __cachedExecutableToReferenceMapNeedsWrite;
}

- (BOOL)canExecutableClearOnEngagement:(id)a0;
- (id)referencesForClientModelId:(id)a0;
- (id)_loadReferences;
- (void)purgeReferencesForSuggestions:(id)a0 clientModelId:(id)a1;
- (BOOL)_writeData:(id)a0;
- (void)markReferencesAsPurgableFromClientModelIdIfPossible:(id)a0;
- (id)description;
- (id)_executablePairsForSuggestions:(id)a0 clientModelId:(id)a1;
- (void)performBatchUpdateOfReferencesWithBlock:(id /* block */)a0;
- (void)updateReferencesForProactiveSuggestions:(id)a0 clientModelId:(id)a1;
- (id)initWithCacheDirectory:(id)a0 minDurationForTrackedReferencesToStayAround:(double)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isExecutableHidden:(id)a0;
- (id)clientModelIdsForExecutable:(id)a0;
- (void)purgeReferencesIfPossible;
- (id)_readData;
- (void)_addExecutablePairs:(id)a0 toMap:(id)a1;
- (void)recordExecutable:(id)a0 clientModelId:(id)a1 shouldClearEngagement:(BOOL)a2;
- (void)updateDateOfReferenceForExecutable:(id)a0 clientModelId:(id)a1;
- (id)_pairsForClientModelId:(id)a0 map:(id)a1;
- (void)addReferencesForSuggestions:(id)a0 clientModelId:(id)a1;
- (unsigned long long)referenceCountForExecutable:(id)a0;
- (void)_purgeReferencesIfPossibleInMap:(id)a0 forceWrite:(BOOL)a1;
- (void)_writeReferences:(id)a0;
- (void)markReferenceAsHiddenForExecutable:(id)a0 clientModelId:(id)a1 untilDate:(id)a2;
- (id)jsonDict;

@end
