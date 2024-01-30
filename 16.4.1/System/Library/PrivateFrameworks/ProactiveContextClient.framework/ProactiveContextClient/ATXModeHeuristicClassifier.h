@class _PASQueueLock, NSString, NSArray, ATXModeLogger, ATXModeScheduler, NSObject, ATXConfiguredModeService;
@protocol OS_dispatch_queue, ATXModeClassifierClientModelDelegate;

@interface ATXModeHeuristicClassifier : NSObject <ATXModeFeaturizerDelegate, ATXModeClassifierClientModel> {
    NSObject<OS_dispatch_queue> *_queue;
    double _minUpdateInterval;
    NSArray *_featurizers;
    ATXModeScheduler *_scheduler;
    _PASQueueLock *_lock;
    ATXConfiguredModeService *_modeService;
    ATXModeLogger *_logger;
}

@property (weak, nonatomic) id<ATXModeClassifierClientModelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)_confidenceScoreForMode:(unsigned long long)a0 fromAggregateFeatures:(id)a1;
- (unsigned long long)currentMode;
- (void)currentModeUUID:(id *)a0 userModeName:(id *)a1 modeType:(unsigned long long *)a2 confidenceScore:(double *)a3 origin:(long long *)a4 originBundleId:(id *)a5 serializedTrigger:(id *)a6 allowsSmartEntry:(BOOL *)a7;
- (id)initWithDuetHelper:(id)a0 configuredModeService:(id)a1 locationManager:(id)a2;
- (BOOL)_isUserWorkingFromHomeWithAggregateFeatures:(id)a0;
- (void)_updateIfNeededWithGuardedData:(id)a0;
- (id)currentFeaturesInDictionary;
- (long long)_originForMode:(unsigned long long)a0 fromAggregateFeatures:(id)a1;
- (void)update;
- (id)_serializedTriggersForMode:(unsigned long long)a0 fromAggregateFeatures:(id)a1;
- (void)_requestFeaturesFromAllFeaturizersAndUpdate;
- (void)_updateWithGuardedData:(id)a0;
- (id)initWithFeaturizers:(id)a0 minUpdateInterval:(double)a1 duetHelper:(id)a2 configuredModeService:(id)a3;
- (id)_triggersForMode:(unsigned long long)a0 fromAggregateFeatures:(id)a1;
- (void)updateWithFeatureSet:(id)a0;
- (void)dealloc;
- (void)updateWithFeatureSet:(id)a0 immediately:(BOOL)a1 reply:(id /* block */)a2;
- (unsigned long long)_predictModeWithFeature:(id)a0;
- (void)_currentModeUUID:(id *)a0 userModeName:(id *)a1 modeType:(unsigned long long *)a2 confidenceScore:(double *)a3 origin:(long long *)a4 originBundleId:(id *)a5 serializedTrigger:(id *)a6 allowsSmartEntry:(BOOL *)a7 guardedData:(id)a8;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)featurizer:(id)a0 didUpdateFeatures:(id)a1;

@end
