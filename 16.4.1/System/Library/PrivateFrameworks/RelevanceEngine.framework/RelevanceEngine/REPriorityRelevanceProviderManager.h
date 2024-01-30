@interface REPriorityRelevanceProviderManager : RERelevanceProviderManager

+ (id)_features;
+ (Class)_relevanceProviderClass;
+ (BOOL)_wantsSeperateRelevanceQueue;

- (float)_relevanceForProvider:(id)a0;

@end
