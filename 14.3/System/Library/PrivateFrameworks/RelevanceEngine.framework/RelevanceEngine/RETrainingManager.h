@class RETrainingContext, REMLModelManager, RERemoteTrainingClientListener, RELiveElementCoordinator, NSObject, RETrainingScheduler, NSMutableSet, NSMutableArray;
@protocol OS_dispatch_queue;

@interface RETrainingManager : RERelevanceEngineSubsystem <RERemoteTrainingClientListenerDelegate, RETrainingManagerProperties> {
    RELiveElementCoordinator *_coordinator;
    REMLModelManager *_modelManager;
    RETrainingScheduler *_trainingScheduler;
    NSMutableSet *_trainingContexts;
    NSObject<OS_dispatch_queue> *_queue;
    RERemoteTrainingClientListener *_remoteTrainingListener;
    NSMutableArray *_trainingFeatureMaps;
    NSMutableArray *_trainingContents;
    NSMutableArray *_trainingEvents;
    NSMutableArray *_interactionTypes;
}

@property (retain) RETrainingContext *currentTrainingContext;
@property (readonly, nonatomic) NSMutableArray *trainingEvents;
@property (readonly, nonatomic) RETrainingScheduler *trainingScheduler;

- (void).cxx_destruct;
- (void)dealloc;
- (void)addTrainingContext:(id)a0;
- (id)initWithRelevanceEngine:(id)a0;
- (void)remoteTrainingClientListenerDidDisconnectContext:(id)a0;
- (void)remoteTrainingClientListenerDidConnectContext:(id)a0;
- (void)_performTrainingForPredictionElement:(id)a0 isPositiveEvent:(BOOL)a1 interaction:(id)a2 context:(id)a3;
- (void)makeContextCurrent:(id)a0;
- (void)performTrainingForElementWithIdentifier:(id)a0 isPositiveEvent:(BOOL)a1 interaction:(id)a2 context:(id)a3;
- (void)performTrainingForElement:(id)a0 isPositiveEvent:(BOOL)a1 interaction:(id)a2 context:(id)a3;
- (void)_queue_trainElementWithIdentifier:(id)a0 relevanceProviders:(id)a1 featureMap:(id)a2 isPositiveEvent:(BOOL)a3 interaction:(id)a4 context:(id)a5;
- (void)flushTraining;
- (void)_performTraining:(BOOL)a0 completion:(id /* block */)a1;
- (void)removeTrainingContext:(id)a0;
- (void)performTrainingForElementWithIdentifier:(id)a0 isPositiveEvent:(BOOL)a1 interaction:(id)a2;
- (void)performTrainingForElement:(id)a0 isPositiveEvent:(BOOL)a1 interaction:(id)a2;
- (void)manuallyPerformTrainingWithCompletion:(id /* block */)a0;

@end
