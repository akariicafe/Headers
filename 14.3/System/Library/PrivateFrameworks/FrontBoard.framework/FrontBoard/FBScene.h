@class FBSSceneIdentityToken, FBSSceneParameters, FBProcess, FBSSceneSpecification, FBSSceneSettings, FBSMutableSceneSettings, FBSceneLayerManager, FBSceneObserver, NSString, FBSSceneDefinition, NSMutableOrderedSet, NSArray, FBSSceneClientSettings;
@protocol BSInvalidatable, FBSceneClientProvider, FBSceneManagerSceneDelegate, FBSceneClient, FBSceneDelegate;

@interface FBScene : NSObject <FBSceneHost, BSDescriptionProviding> {
    FBSceneObserver *_delegateProxy;
    NSMutableOrderedSet *_observerProxies;
    BOOL _contentStateIsChanging;
    id<BSInvalidatable> _stateCaptureAssertion;
    unsigned long long _lastForegroundingTransitionID;
}

@property (readonly, nonatomic) id<FBSceneClient> client;
@property (readonly, nonatomic) id<FBSceneClientProvider> clientProvider;
@property (weak, nonatomic) id<FBSceneManagerSceneDelegate> sceneManagerSceneDelegate;
@property (retain, nonatomic) FBSMutableSceneSettings *mutableSettings;
@property (readonly, nonatomic) FBSceneObserver *delegateProxy;
@property (readonly, copy, nonatomic) NSArray *observerProxies;
@property (readonly, nonatomic) unsigned long long _transactionID;
@property (readonly, nonatomic, getter=_isInTransaction) BOOL _inTransaction;
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
@property (readonly, nonatomic) FBProcess *clientProcess;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly, copy, nonatomic) NSString *group;
@property (readonly, copy, nonatomic) FBSSceneSpecification *specification;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (void)sendActions:(id)a0;
- (void)dealloc;
- (id)display;
- (void)addObserver:(id)a0;
- (id)uiSettings;
- (id)succinctDescription;
- (unsigned long long)_beginTransaction;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (long long)currentInterfaceOrientation;
- (id)createSnapshot;
- (id)succinctDescriptionBuilder;
- (id)uiClientSettings;
- (void)clientWillInvalidate:(id)a0;
- (void)updateUISettingsWithTransitionBlock:(id /* block */)a0;
- (id)snapshotContext;
- (id)createSnapshotWithContext:(id)a0;
- (void)updateSettingsWithBlock:(id /* block */)a0;
- (void)updateSettingsWithTransitionBlock:(id /* block */)a0;
- (void)client:(id)a0 didUpdateClientSettings:(id)a1 withDiff:(id)a2 transitionContext:(id)a3;
- (void)client:(id)a0 didReceiveActions:(id)a1;
- (void)updateUISettingsWithBlock:(id /* block */)a0;
- (void)updateSettings:(id)a0 withTransitionContext:(id)a1 completion:(id /* block */)a2;
- (id)initWithDefiniton:(id)a0 remnant:(id)a1 specification:(id)a2 settings:(id)a3 initialClientSettings:(id)a4 clientProvider:(id)a5;
- (void)_applyUpdateWithContext:(id)a0 completion:(id /* block */)a1;
- (void)_endTransaction:(unsigned long long)a0;
- (void)_adjustInitialSettings:(id)a0;
- (void)_invalidateWithTransitionContext:(id)a0;
- (void)_setContentState:(long long)a0;
- (void)_dispatchClientMessageWithBlock:(id /* block */)a0;
- (void)updateSettings:(id)a0 withTransitionContext:(id)a1;

@end
