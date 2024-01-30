@class NSString;

@interface RELocationRelevanceProviderManager : RESharedLocationRelevanceProviderManager <REPredictorObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_features;
+ (Class)_relevanceProviderClass;
+ (id)_dependencyClasses;

- (void)pause;
- (void)resume;
- (id)_valueForProvider:(id)a0 feature:(id)a1;
- (id)_valueForProvider:(id)a0 context:(id)a1 feature:(id)a2;
- (id)_locationOfProvider:(id)a0;
- (int)_queryRevokableStatusForProvider:(id)a0;
- (void)predictorDidUpdate:(id)a0;

@end
