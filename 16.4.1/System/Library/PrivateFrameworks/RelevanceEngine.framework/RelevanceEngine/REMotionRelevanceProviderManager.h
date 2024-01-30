@class NSString;

@interface REMotionRelevanceProviderManager : RERelevanceProviderManager <REPredictorObserver, REMotionRelevanceProviderManagerProperties> {
    unsigned long long _type;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) unsigned long long motionType;

+ (id)_features;
+ (Class)_relevanceProviderClass;
+ (BOOL)_wantsSeperateRelevanceQueue;

- (void)pause;
- (void)resume;
- (id)initWithQueue:(id)a0;
- (id)_valueForProvider:(id)a0 feature:(id)a1;
- (void)_prepareForUpdate;
- (void)predictorDidUpdate:(id)a0;

@end
