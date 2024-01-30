@class _PASQueueLock, NSArray, ATXModeLogger, ATXModeScheduler, NSObject, NSUserDefaults;
@protocol OS_dispatch_queue, _DKKnowledgeSaving;

@interface ATXModeClassifier : NSObject <ATXModeFeaturizerDelegate> {
    NSObject<OS_dispatch_queue> *_queue;
    double _minUpdateInterval;
    NSArray *_featurizers;
    ATXModeScheduler *_scheduler;
    _PASQueueLock *_lock;
    id<_DKKnowledgeSaving> _knowledgeStore;
    ATXModeLogger *_logger;
    NSUserDefaults *_userDefaults;
}

+ (void)provideModeClassifierWhenReadyWithDuetHelper:(id)a0 block:(id /* block */)a1;

- (int)currentMode;
- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (void)dealloc;
- (id)initWithDuetHelper:(id)a0;
- (void)featurizer:(id)a0 didUpdateFeatures:(id)a1;
- (id)initWithFeaturizers:(id)a0 minUpdateInterval:(double)a1 duetHelper:(id)a2;
- (void)_updateWithGuardedData:(id)a0;
- (void)_requestFeaturesFromAllFeaturizersAndUpdate;
- (int)_predictModeWithFeature:(id)a0;
- (id)_originForMode:(int)a0 fromAggregateFeatures:(id)a1;
- (void)updateWithFeatureSet:(id)a0 immediately:(BOOL)a1 reply:(id /* block */)a2;
- (void)updateWithFeatureSet:(id)a0;
- (id)_pbEventForMode:(int)a0;
- (id)currentFeaturesInDictionary;

@end
