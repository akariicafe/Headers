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

- (void)_begin;
- (id)settings;
- (id)_customizedDescriptionProperties;
- (void)_childTransactionDidComplete:(id)a0;
- (void)_noteDidCommit:(BOOL)a0;
- (void)performSynchronizedCommit;
- (BOOL)isReadyForSynchronizedCommit;
- (void)_didComplete;
- (void)sceneDidInvalidate:(id)a0;
- (void)addObserver:(id)a0;
- (BOOL)_canBeInterrupted;
- (void)_performCommit;
- (id)newSettings;
- (void)_commitSceneUpdate:(id /* block */)a0;
- (void)_noteDidCreate;
- (id)_initWithSceneDefinition:(id)a0 parameters:(id)a1 transitionContext:(id)a2;
- (void)dealloc;
- (void)removeObserver:(id)a0;
- (id)initWithSceneDefinition:(id)a0 parameters:(id)a1 transitionContext:(id)a2;
- (void)_updateScene;
- (id)specification;
- (void)_noteWillUpdate;
- (id)initWithSceneIdentifier:(id)a0 process:(id)a1 parameters:(id)a2 transitionContext:(id)a3;
- (id)scene;
- (id)initWithSceneToUpdate:(id)a0 newSettings:(id)a1 transitionContext:(id)a2;
- (void).cxx_destruct;
- (void)_noteWillCommit;
- (void)_commitSceneOrWait;
- (void)_createScene;

@end
