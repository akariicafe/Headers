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
+ (id)availablePredictors;
+ (id)systemPredictorsSupportingFeatureSet:(id)a0 relevanceEngine:(id)a1;

- (id)engines;
- (void)beginActivity:(id)a0;
- (void)pause;
- (id)_init;
- (void)update;
- (BOOL)isRunning;
- (void)dealloc;
- (void)_performUpdate;
- (id)queue;
- (void)_setRunning:(BOOL)a0;
- (id)description;
- (void)invalidate;
- (void)endUpdates;
- (void).cxx_destruct;
- (void)resume;
- (void)beginUpdates;
- (void)onQueue:(id /* block */)a0;
- (void)finishActivity:(id)a0;
- (void)updateObservers;
- (void)addRelevanceEngine:(id)a0;
- (void)beginFetchingData;
- (void)enumerateInflectionFeatureValues:(id /* block */)a0;
- (id)featureValueForFeature:(id)a0 element:(id)a1 engine:(id)a2 trainingContext:(id)a3;
- (void)finishFetchingData;
- (void)onQueueSync:(id /* block */)a0;
- (void)removeRelevanceEngine:(id)a0;

@end
