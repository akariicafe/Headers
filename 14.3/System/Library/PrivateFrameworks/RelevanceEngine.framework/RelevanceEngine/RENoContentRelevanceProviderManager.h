@interface RENoContentRelevanceProviderManager : RERelevanceProviderManager

+ (id)_features;
+ (Class)_relevanceProviderClass;
+ (BOOL)_wantsSeperateRelevanceQueue;

- (id)_valueForProvider:(id)a0 feature:(id)a1;

@end
