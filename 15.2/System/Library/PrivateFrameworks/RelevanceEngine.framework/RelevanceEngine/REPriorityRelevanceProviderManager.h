@interface REPriorityRelevanceProviderManager : RERelevanceProviderManager

+ (Class)_relevanceProviderClass;
+ (BOOL)_wantsSeperateRelevanceQueue;
+ (id)_features;

- (float)_relevanceForProvider:(id)a0;

@end
