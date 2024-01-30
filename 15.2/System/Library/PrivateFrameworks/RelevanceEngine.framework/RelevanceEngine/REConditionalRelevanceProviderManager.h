@interface REConditionalRelevanceProviderManager : RERelevanceProviderManager

+ (Class)_relevanceProviderClass;
+ (id)_features;
+ (id)_dependencyClasses;
+ (BOOL)_wantsDelayedUpdate;

- (float)_relevanceForProvider:(id)a0;

@end
