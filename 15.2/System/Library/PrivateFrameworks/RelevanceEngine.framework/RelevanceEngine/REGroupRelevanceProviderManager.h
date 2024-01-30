@interface REGroupRelevanceProviderManager : RERelevanceProviderManager

+ (Class)_relevanceProviderClass;
+ (BOOL)_wantsSeperateRelevanceQueue;
+ (id)_features;

- (id)_valueForProvider:(id)a0 feature:(id)a1;

@end
