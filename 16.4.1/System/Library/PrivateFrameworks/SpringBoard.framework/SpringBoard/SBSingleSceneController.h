@class NSString, FBSDisplayConfiguration, FBScene, RBSProcessIdentity, UISceneRequestOptions, SBFSceneWorkspaceController, SBSceneSettingsUpdater, SBSystemUISceneDefaultPresenter, SBTraitsSceneParticipantDelegate, SBTraitsOrientedContentViewController, SBSingleSceneWindow;
@protocol UIScenePresenter, SBScenePresenting, BSInvalidatable;

@interface SBSingleSceneController : NSObject <FBSceneObserver, SBSceneSettingsUpdaterObserver, BSInvalidatable, BSDescriptionProviding> {
    RBSProcessIdentity *_clientIdentity;
    id<BSInvalidatable> _settingsUpdaterObserverInvalidatable;
    SBSceneSettingsUpdater *_sceneSettingsUpdater;
    SBSystemUISceneDefaultPresenter *_defaultPresenter;
    id<UIScenePresenter> _uiScenePresenter;
    SBTraitsSceneParticipantDelegate *_lastSceneTraitsParticipantDelegate;
    SBTraitsOrientedContentViewController *_orientedSceneViewController;
}

@property (nonatomic) BOOL visible;
@property (nonatomic) BOOL shouldForegroundForDisplayConfiguration;
@property (nonatomic) BOOL shouldActivateForDisplayConfiguration;
@property (nonatomic) BOOL shouldActivateUponClientConnection;
@property (nonatomic) BOOL shouldBeKeptActiveWhileForeground;
@property (weak, nonatomic) id<SBScenePresenting> presenter;
@property (nonatomic, getter=isSceneActive) BOOL sceneActive;
@property (nonatomic, getter=usesWindowHosting) BOOL windowHosting;
@property (nonatomic, getter=isSceneContentVisible) BOOL sceneContentVisible;
@property (retain, nonatomic) FBSDisplayConfiguration *targetDisplayConfiguration;
@property (readonly, nonatomic) SBFSceneWorkspaceController *sceneWorkspaceController;
@property (readonly, nonatomic) UISceneRequestOptions *sceneOptions;
@property (readonly, nonatomic) NSString *scenePersistentIdentifier;
@property (readonly, nonatomic) NSString *traitsRole;
@property (readonly, nonatomic) SBSingleSceneWindow *hostingWindow;
@property (readonly, nonatomic) FBScene *scene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (void)sceneDidInvalidate:(id)a0;
- (void)sceneContentStateDidChange:(id)a0;
- (void)_setVisible:(BOOL)a0;
- (BOOL)_isClientProcessRunning;
- (id)initWithTargetDisplayConfiguration:(id)a0 sceneWorkspaceController:(id)a1 sceneRequestOptions:(id)a2 clientIdentity:(id)a3 traitsRole:(id)a4 level:(double)a5;
- (void)_evaluateSceneForegroundState;
- (void)dealloc;
- (void)_presentScene;
- (id)succinctDescription;
- (void)_evaluateSceneActivationState;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void)didUpdateSceneTraitsDelegate:(id)a0;
- (void)invalidate;
- (id)_sceneTraitsViewController;
- (void).cxx_destruct;
- (id)_newActivationContext;
- (void)_dismissScene;

@end
