@interface REForcedRelevanceProviderManager : RERelevanceProviderManager

+ (BOOL)_supportsHistoricProviders;
+ (Class)_relevanceProviderClass;
+ (BOOL)_wantsSeperateRelevanceQueue;
+ (id)_features;

- (BOOL)_isHistoricProvider:(id)a0;
- (float)_relevanceForProvider:(id)a0;
- (float)_relevanceForHistoricProvider:(id)a0;

@end
