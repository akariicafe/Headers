@interface REGeofenceRelevanceProviderManager : RESharedLocationRelevanceProviderManager

+ (id)_features;
+ (Class)_relevanceProviderClass;
+ (id)_dependencyClasses;

- (id)_valueForProvider:(id)a0 feature:(id)a1;
- (id)_valueForProvider:(id)a0 context:(id)a1 feature:(id)a2;
- (int)_queryRevokableStatusForProvider:(id)a0;

@end
