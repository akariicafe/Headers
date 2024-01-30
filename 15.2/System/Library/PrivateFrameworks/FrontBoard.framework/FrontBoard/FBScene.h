@class FBSSceneIdentityToken, FBSSceneClientSettings, FBSceneWorkspace, FBProcess, FBSSceneSpecification, FBSceneClientHandle, FBSSceneSettings, FBSceneLayerManager, FBSSceneDefinition, NSString, FBSceneObserver, FBSceneRemnant, NSMutableOrderedSet, FBSSceneParameters;
@protocol FBSceneDelegate, BSInvalidatable, FBSceneClient, FBSceneClientProviderInternal;

@interface FBScene : NSObject <FBSceneHost, BSDescriptionProviding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    FBSceneObserver *_delegateProxy;
    NSMutableOrderedSet *_lock_observerProxies;
    id<BSInvalidatable> _stateCaptureAssertion;
    id<FBSceneClient> _client;
    id<FBSceneClientProviderInternal> _clientProvider;
    FBSceneRemnant *_remnant;
    unsigned long long _activationID;
    unsigned long long _lastForegroundingTransitionID;
    BOOL _contentStateIsChanging;
    BOOL _legacy;
    BOOL _invalidated;
    BOOL _everActivated;
    BOOL _inTransaction;
    FBSceneWorkspace *_workspace;
}

@property (readonly, nonatomic) unsigned long long _transactionID;
@property (readonly, nonatomic) FBProcess *clientProcess;
@property (weak, nonatomic) id<FBSceneDelegate> delegate;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *workspaceIdentifier;
@property (readonly, copy, nonatomic) FBSSceneDefinition *definition;
@property (readonly, copy, nonatomic) FBSSceneIdentityToken *identityToken;
@property (readonly, nonatomic) FBSSceneSettings *settings;
@property (readonly, nonatomic) FBSSceneClientSettings *clientSettings;
@property (readonly, copy, nonatomic) FBSSceneParameters *parameters;
@property (readonly, nonatomic) long long contentState;
@property (readonly, nonatomic) FBSceneLayerManager *layerManager;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) FBSceneClientHandle *clientHandle;
@property (readonly, copy, nonatomic) NSString *group;
@property (readonly, copy, nonatomic) FBSSceneSpecification *specification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)addObserver:(id)a0;
- (id)uiSettings;
- (void)removeObserver:(id)a0;
- (id)createSnapshot;
- (void)sendActions:(id)a0;
- (id)succinctDescription;
- (id)snapshotContext;
- (void).cxx_destruct;
- (id)createSnapshotWithContext:(id)a0;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (long long)currentInterfaceOrientation;
- (void)updateUISettingsWithTransitionBlock:(id /* block */)a0;
- (id)succinctDescriptionBuilder;
- (void)invalidate;
- (id)uiClientSettings;
- (void)dealloc;
- (void)updateSettingsWithBlock:(id /* block */)a0;
- (void)performUpdate:(id /* block */)a0;
- (id)display;
- (void)activateWithTransitionContext:(id)a0;
- (void)configureParameters:(id /* block */)a0;
- (void)client:(id)a0 didUpdateClientSettings:(id)a1 withDiff:(id)a2 transitionContext:(id)a3;
- (void)client:(id)a0 didReceiveActions:(id)a1;
- (void)updateSettingsWithTransitionBlock:(id /* block */)a0;
- (void)updateUISettingsWithBlock:(id /* block */)a0;
- (void)updateSettings:(id)a0 withTransitionContext:(id)a1 completion:(id /* block */)a2;
- (void)activateWithTransitionContext:(id)a0 completion:(id /* block */)a1;
- (void)deactivateWithTransitionContext:(id)a0;
- (void)performUpdate:(id /* block */)a0 withCompletion:(id /* block */)a1;
- (void)updateSettings:(id)a0 withTransitionContext:(id)a1;

@end
