@class NSCache, PPLocalContactStore;

@interface PPQuickTypeContactsServant : NSObject <PPQuickTypeServantProtocol> {
    PPLocalContactStore *_localContactStore;
    NSCache *_meQuickTypeItemCache;
    NSCache *_cachedNameLookups;
}

+ (id)_supportedPeopleSemanticTypes;

- (id)initWithOptions:(unsigned char)a0;
- (void)clearCaches;
- (void)_registerForNotifications;
- (id)init;
- (void).cxx_destruct;
- (BOOL)_isSemanticTagEligible:(unsigned char)a0;
- (void)_warmUpFormatters;
- (id)_mePredictionCacheKeyForQuery:(id)a0;
- (id)quickTypeItemsWithQuery:(id)a0 limit:(unsigned long long)a1 explanationSet:(id)a2;
- (id)_scoredMeContactWithMeContact:(id)a0;
- (BOOL)_isMeCardQuery:(id)a0;
- (id)_predictionForPeopleQuery:(id)a0 fromEligibleSemanticTextField:(BOOL)a1 limit:(unsigned long long)a2 explanationSet:(id)a3;
- (id)_lookupScoredPeopleWithNamePrefix:(id)a0 subtype:(unsigned char)a1 explanationSet:(id)a2 justPreloadCache:(BOOL)a3 timeoutSeconds:(id)a4;
- (void)setCachedNameLookup:(id)a0;
- (id)_predictMeCardDetailForQuery:(id)a0 limit:(unsigned long long)a1 explanationSet:(id)a2;
- (id)_predictMeCardDetailForQuery:(id)a0 limit:(unsigned long long)a1 fromSemanticTextField:(BOOL)a2 explanationSet:(id)a3;
- (void)_preloadMeCardAndItemCacheWithMeContact:(id)a0;
- (id)_applySmartLimitingToCandidates:(id)a0 clientLimit:(unsigned long long)a1 explanationSet:(id)a2;
- (id)_lookupPeopleWithNamePrefix:(id)a0 explanationSet:(id)a1 justPreloadCache:(BOOL)a2 timeoutSeconds:(id)a3;
- (id)_selfContactQueryqueryFromSemanticTagquery:(id)a0;

@end
