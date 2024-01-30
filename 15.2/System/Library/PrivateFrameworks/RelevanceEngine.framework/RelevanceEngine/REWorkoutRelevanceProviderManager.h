@class NSString, NSDate;

@interface REWorkoutRelevanceProviderManager : RERelevanceProviderManager <REPredictorObserver, REWorkoutRelevanceProviderManagerProperties> {
    unsigned long long _state;
    NSDate *_lastWorkoutDate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long state;

+ (Class)_relevanceProviderClass;
+ (BOOL)_wantsSeperateRelevanceQueue;
+ (id)_features;

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (void)predictorDidUpdate:(id)a0;
- (id)_valueForProvider:(id)a0 feature:(id)a1;
- (void)pause;
- (void)resume;
- (void)_prepareForUpdate;

@end
