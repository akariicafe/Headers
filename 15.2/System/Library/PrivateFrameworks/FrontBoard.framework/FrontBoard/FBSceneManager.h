@class NSString, FBSceneWorkspace;
@protocol FBSceneManagerDelegate;

@interface FBSceneManager : NSObject <FBWorkspaceEventDispatcherTarget> {
    FBSceneWorkspace *_workspace;
}

@property (nonatomic, setter=_setSuppressConnectionHandshakes:) BOOL _suppressConnectionHandshakes;
@property (weak, nonatomic) id<FBSceneManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (id)observeKeyboardSceneAvailability:(id /* block */)a0;
+ (void)setKeyboardScene:(id)a0;
+ (id)keyboardScene;
+ (void)_clearKeyboardScene;
+ (void)synchronizeChanges:(id /* block */)a0;

- (id)sceneWithIdentifier:(id)a0;
- (id)_createSceneWithDefinition:(id)a0 settings:(id)a1 initialClientSettings:(id)a2 transitionContext:(id)a3 fromRemnant:(id)a4 usingClientProvider:(id)a5 completion:(id /* block */)a6;
- (id)createSceneFromRemnant:(id)a0 withSettings:(id)a1 transitionContext:(id)a2;
- (id)createSceneWithDefinition:(id)a0;
- (id)sceneFromIdentityTokenStringRepresentation:(id)a0;
- (void)didReceiveHandshake:(id)a0;
- (void)addObserver:(id)a0;
- (id)createSceneWithIdentifier:(id)a0 parameters:(id)a1 clientProvider:(id)a2 transitionContext:(id)a3;
- (void)removeObserver:(id)a0;
- (BOOL)_isSynchronizingSceneUpdates;
- (void)enumerateScenesWithBlock:(id /* block */)a0;
- (id)scenesPassingTest:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (id)createSceneWithDefinition:(id)a0 initialParameters:(id)a1;
- (id)createSceneWithIdentifier:(id)a0 settings:(id)a1 initialClientSettings:(id)a2 clientProvider:(id)a3 transitionContext:(id)a4;
- (void)destroyScene:(id)a0 withTransitionContext:(id)a1;
- (id)sceneFromIdentityToken:(id)a0;
- (id)newSceneIdentityTokenForIdentity:(id)a0;

@end
