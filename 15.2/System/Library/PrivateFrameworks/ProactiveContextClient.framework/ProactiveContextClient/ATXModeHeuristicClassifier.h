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

- (unsigned long long)currentMode;
- (id)initWithDuetHelper:(id)a0 configuredModeService:(id)a1;
- (void)_requestFeaturesFromAllFeaturizersAndUpdate;
- (void)_updateIfNeededWithGuardedData:(id)a0;
- (void)_currentModeUUID:(id *)a0 userModeName:(id *)a1 modeType:(unsigned long long *)a2 confidenceScore:(double *)a3 origin:(long long *)a4 originBundleId:(id *)a5 serializedTrigger:(id *)a6 allowsSmartEntry:(BOOL *)a7 guardedData:(id)a8;
- (void)_updateWithGuardedData:(id)a0;
- (void)updateWithFeatureSet:(id)a0;
- (id)currentFeaturesInDictionary;
- (void)update;
- (double)_confidenceScoreForMode:(unsigned long long)a0 fromAggregateFeatures:(id)a1;
- (long long)_originForMode:(unsigned long long)a0 fromAggregateFeatures:(id)a1;
- (void).cxx_destruct;
- (void)currentModeUUID:(id *)a0 userModeName:(id *)a1 modeType:(unsigned long long *)a2 confidenceScore:(double *)a3 origin:(long long *)a4 originBundleId:(id *)a5 serializedTrigger:(id *)a6 allowsSmartEntry:(BOOL *)a7;
- (id)init;
- (id)initWithFeaturizers:(id)a0 minUpdateInterval:(double)a1 duetHelper:(id)a2 configuredModeService:(id)a3;
- (id)_triggersForMode:(unsigned long long)a0 fromAggregateFeatures:(id)a1;
- (id)_serializedTriggersForMode:(unsigned long long)a0 fromAggregateFeatures:(id)a1;
- (void)dealloc;
- (void)updateWithFeatureSet:(id)a0 immediately:(BOOL)a1 reply:(id /* block */)a2;
- (void)featurizer:(id)a0 didUpdateFeatures:(id)a1;
- (void)reset;
- (unsigned long long)_predictModeWithFeature:(id)a0;

@end
