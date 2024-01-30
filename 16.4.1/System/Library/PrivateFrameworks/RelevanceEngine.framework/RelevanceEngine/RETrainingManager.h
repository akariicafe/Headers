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

- (void)dealloc;
- (void).cxx_destruct;
- (void)addTrainingContext:(id)a0;
- (id)initWithRelevanceEngine:(id)a0;
- (void)removeTrainingContext:(id)a0;
- (void)_performTraining:(BOOL)a0 completion:(id /* block */)a1;
- (void)_performTrainingForPredictionElement:(id)a0 isPositiveEvent:(BOOL)a1 interaction:(id)a2 context:(id)a3;
- (void)_queue_trainElementWithIdentifier:(id)a0 relevanceProviders:(id)a1 featureMap:(id)a2 isPositiveEvent:(BOOL)a3 interaction:(id)a4 context:(id)a5;
- (void)flushTraining;
- (void)makeContextCurrent:(id)a0;
- (void)manuallyPerformTrainingWithCompletion:(id /* block */)a0;
- (void)performTrainingForElement:(id)a0 isPositiveEvent:(BOOL)a1 interaction:(id)a2;
- (void)performTrainingForElement:(id)a0 isPositiveEvent:(BOOL)a1 interaction:(id)a2 context:(id)a3;
- (void)performTrainingForElementWithIdentifier:(id)a0 isPositiveEvent:(BOOL)a1 interaction:(id)a2;
- (void)performTrainingForElementWithIdentifier:(id)a0 isPositiveEvent:(BOOL)a1 interaction:(id)a2 context:(id)a3;
- (void)remoteTrainingClientListenerDidConnectContext:(id)a0;
- (void)remoteTrainingClientListenerDidDisconnectContext:(id)a0;

@end
