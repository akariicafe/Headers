@class FBSceneWorkspace;
@protocol FBSceneManagerDelegate;

@interface FBSceneManager : NSObject {
    FBSceneWorkspace *_workspace;
}

@property (nonatomic, setter=_setSuppressConnectionHandshakes:) BOOL _suppressConnectionHandshakes;
@property (weak, nonatomic) id<FBSceneManagerDelegate> delegate;

+ (id)sharedInstance;
+ (id)keyboardScene;
+ (void)_clearKeyboardScene;
+ (void)setKeyboardScene:(id)a0;
+ (id)observeKeyboardSceneAvailability:(id /* block */)a0;
+ (void)synchronizeChanges:(id /* block */)a0;

- (id)sceneFromIdentityToken:(id)a0;
- (void)enumerateScenesWithBlock:(id /* block */)a0;
- (id)newSceneIdentityTokenForIdentity:(id)a0;
- (void)addObserver:(id)a0;
- (id)sceneWithIdentifier:(id)a0;
- (id)scenesPassingTest:(id /* block */)a0;
- (void)destroyScene:(id)a0 withTransitionContext:(id)a1;
- (id)createSceneWithDefinition:(id)a0 initialParameters:(id)a1;
- (id)debugDescription;
- (id)sceneFromIdentityTokenStringRepresentation:(id)a0;
- (void)removeObserver:(id)a0;
- (id)createSceneFromRemnant:(id)a0 withSettings:(id)a1 transitionContext:(id)a2;
- (id)createSceneWithIdentifier:(id)a0 settings:(id)a1 initialClientSettings:(id)a2 clientProvider:(id)a3 transitionContext:(id)a4;
- (id)createSceneWithIdentifier:(id)a0 parameters:(id)a1 clientProvider:(id)a2 transitionContext:(id)a3;
- (BOOL)_isSynchronizingSceneUpdates;
- (id)init;
- (id)_createSceneWithDefinition:(id)a0 settings:(id)a1 initialClientSettings:(id)a2 transitionContext:(id)a3 fromRemnant:(id)a4 usingClientProvider:(id)a5 completion:(id /* block */)a6;
- (id)description;
- (id)createLegacySceneFromRemnant:(id)a0 withSettings:(id)a1 transitionContext:(id)a2;
- (void).cxx_destruct;
- (id)createSceneWithDefinition:(id)a0;

@end
