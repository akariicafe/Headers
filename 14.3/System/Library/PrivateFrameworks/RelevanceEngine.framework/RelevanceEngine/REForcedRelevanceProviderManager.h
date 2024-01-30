@interface REForcedRelevanceProviderManager : RERelevanceProviderManager

+ (id)_features;
+ (Class)_relevanceProviderClass;
+ (BOOL)_wantsSeperateRelevanceQueue;
+ (BOOL)_supportsHistoricProviders;

- (float)_relevanceForProvider:(id)a0;
- (float)_relevanceForHistoricProvider:(id)a0;
- (BOOL)_isHistoricProvider:(id)a0;

@end
