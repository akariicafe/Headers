@interface REConditionalRelevanceProviderManager : RERelevanceProviderManager

+ (id)_features;
+ (Class)_relevanceProviderClass;
+ (id)_dependencyClasses;
+ (BOOL)_wantsDelayedUpdate;

- (float)_relevanceForProvider:(id)a0;

@end
