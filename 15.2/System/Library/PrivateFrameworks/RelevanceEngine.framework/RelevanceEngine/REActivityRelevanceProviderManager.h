@class NSString;

@interface REActivityRelevanceProviderManager : RERelevanceProviderManager <REPredictorObserver, REActivityRelevanceProviderManagerProperties> {
    float _activeEnergy;
    float _exerciseTime;
    float _standHour;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) float activeEnergy;
@property (readonly, nonatomic) float exerciseTime;
@property (readonly, nonatomic) float standHour;

+ (Class)_relevanceProviderClass;
+ (BOOL)_wantsSeperateRelevanceQueue;
+ (id)_features;

- (id)initWithQueue:(id)a0;
- (void)predictorDidUpdate:(id)a0;
- (id)_valueForProvider:(id)a0 feature:(id)a1;
- (void)pause;
- (void)resume;
- (void)_prepareForUpdate;

@end
