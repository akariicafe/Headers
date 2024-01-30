@interface REGeofenceRelevanceProviderManager : RESharedLocationRelevanceProviderManager

+ (Class)_relevanceProviderClass;
+ (id)_features;
+ (id)_dependencyClasses;

- (id)_valueForProvider:(id)a0 context:(id)a1 feature:(id)a2;
- (id)_valueForProvider:(id)a0 feature:(id)a1;
- (int)_queryRevokableStatusForProvider:(id)a0;

@end
