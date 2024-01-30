@class FBSceneManager, NSString, FBSSceneSettings, FBScene, FBSSceneDefinition, FBSSceneTransitionContext, FBSSceneSpecification, FBWaitForSceneDestructionTransaction, FBSSceneParameters;
@protocol FBSynchronizedTransactionDelegate;

@interface FBUpdateSceneTransaction : FBTransaction <FBSceneObserver, FBSynchronizedTransaction> {
    FBSceneManager *_sceneManager;
    FBSSceneDefinition *_definition;
    FBSSceneParameters *_parameters;
    FBWaitForSceneDestructionTransaction *_destructionTransaction;
    unsigned long long _transactionID;
    BOOL _readyToCommit;
    BOOL _didCommit;
}

@property (readonly, nonatomic) FBScene *scene;
@property (readonly, nonatomic) NSString *sceneIdentifier;
@property (readonly, nonatomic) FBSSceneSettings *settings;
@property (readonly, nonatomic) FBSSceneSpecification *specification;
@property (readonly, nonatomic) FBSSceneTransitionContext *transitionContext;
@property (readonly, nonatomic) BOOL destroyed;
@property (nonatomic) BOOL waitsForSceneCommit;
@property (readonly, nonatomic) FBSSceneSettings *newSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<FBSynchronizedTransactionDelegate> synchronizationDelegate;

- (BOOL)_canBeInterrupted;
- (void)_begin;
- (id)_customizedDescriptionProperties;
- (void)_didComplete;
- (void)_childTransactionDidComplete:(id)a0;
- (void)performSynchronizedCommit;
- (BOOL)isReadyForSynchronizedCommit;
- (void)_noteWillUpdate;
- (void)_commitSceneUpdate:(id /* block */)a0;
- (id)_initWithSceneDefinition:(id)a0 parameters:(id)a1 transitionContext:(id)a2;
- (void)sceneDidInvalidate:(id)a0;
- (void)_performCommit;
- (id)settings;
- (void)_commitSceneOrWait;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)_noteDidCreate;
- (void)_noteDidCommit:(BOOL)a0;
- (id)specification;
- (void).cxx_destruct;
- (id)scene;
- (id)newSettings;
- (void)_createScene;
- (id)initWithSceneIdentifier:(id)a0 process:(id)a1 parameters:(id)a2 transitionContext:(id)a3;
- (id)initWithSceneToUpdate:(id)a0 newSettings:(id)a1 transitionContext:(id)a2;
- (void)dealloc;
- (void)_noteWillCommit;
- (void)_updateScene;
- (id)initWithSceneDefinition:(id)a0 parameters:(id)a1 transitionContext:(id)a2;

@end
