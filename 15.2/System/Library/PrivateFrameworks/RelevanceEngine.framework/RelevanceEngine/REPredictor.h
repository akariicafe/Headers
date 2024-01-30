@class NSCountedSet, REUpNextScheduler, REObserverStore, NSObject;
@protocol OS_dispatch_queue;

@interface REPredictor : REObservableSingleton <REPredictorProperties> {
    NSObject<OS_dispatch_queue> *_queue;
    REObserverStore *_engines;
    REUpNextScheduler *_refreshScheduler;
    NSCountedSet *_activities;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _predictorLock;
}

@property (readonly, nonatomic) NSCountedSet *outstandingActivities;
@property (setter=_setIsRunning:) BOOL _isRunning;
@property (nonatomic) long long beginUpdatesCount;
@property (readonly, nonatomic) BOOL running;

+ (double)updateInterval;
+ (id)supportedFeatures;
+ (id)systemPredictorsSupportingFeatureSet:(id)a0 relevanceEngine:(id)a1;
+ (id)availablePredictors;

- (void)endUpdates;
- (void)_performUpdate;
- (BOOL)isRunning;
- (id)description;
- (void)_setRunning:(BOOL)a0;
- (void)update;
- (void).cxx_destruct;
- (void)beginUpdates;
- (void)pause;
- (id)_init;
- (void)invalidate;
- (void)resume;
- (void)dealloc;
- (id)queue;
- (id)engines;
- (void)updateObservers;
- (void)onQueue:(id /* block */)a0;
- (void)beginActivity:(id)a0;
- (void)enumerateInflectionFeatureValues:(id /* block */)a0;
- (void)beginFetchingData;
- (void)finishFetchingData;
- (id)featureValueForFeature:(id)a0 element:(id)a1 engine:(id)a2 trainingContext:(id)a3;
- (void)finishActivity:(id)a0;
- (void)addRelevanceEngine:(id)a0;
- (void)removeRelevanceEngine:(id)a0;
- (void)onQueueSync:(id /* block */)a0;

@end
