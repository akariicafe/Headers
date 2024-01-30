@class NSString;

@interface RELocationRelevanceProviderManager : RESharedLocationRelevanceProviderManager <REPredictorObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)_relevanceProviderClass;
+ (id)_features;
+ (id)_dependencyClasses;

- (void)predictorDidUpdate:(id)a0;
- (id)_valueForProvider:(id)a0 context:(id)a1 feature:(id)a2;
- (id)_valueForProvider:(id)a0 feature:(id)a1;
- (void)pause;
- (void)resume;
- (int)_queryRevokableStatusForProvider:(id)a0;
- (id)_locationOfProvider:(id)a0;

@end
