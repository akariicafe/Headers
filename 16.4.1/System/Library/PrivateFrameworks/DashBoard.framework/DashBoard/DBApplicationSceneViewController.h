@class DBSceneUpdate, NSString, NSMutableDictionary, UIViewController, UIView, FBScene, DBApplicationInfo;
@protocol UIScenePresentation, DBEnvironment, BSInvalidatable, UIScenePresenter;

@interface DBApplicationSceneViewController : UIViewController <FBSceneManagerObserver, FBSceneObserver, DBDashboardWorkspaceEntityPresenting>

@property (retain, nonatomic) DBApplicationInfo *applicationInfo;
@property (retain, nonatomic) DBApplicationInfo *proxyApplicationInfo;
@property (weak, nonatomic) id<DBEnvironment> environment;
@property (copy, nonatomic) NSString *sceneID;
@property (retain, nonatomic) FBScene *scene;
@property (retain, nonatomic) id<UIScenePresenter> scenePresenter;
@property (retain, nonatomic) NSMutableDictionary *scenePresentersByIdentifier;
@property (retain, nonatomic) UIView<UIScenePresentation> *sceneHostView;
@property (copy, nonatomic) NSString *requester;
@property (retain, nonatomic) DBSceneUpdate *currentSceneUpdate;
@property (retain, nonatomic) id<BSInvalidatable> layoutElementAssertion;
@property (retain, nonatomic) UIViewController *alertViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *identifier;

- (void)sceneManager:(id)a0 didDestroyScene:(id)a1;
- (void)sceneManager:(id)a0 didCreateScene:(id)a1;
- (void)sceneManager:(id)a0 updateForScene:(id)a1 appliedWithContext:(id)a2;
- (void)handleEvent:(id)a0;
- (void)sceneContentStateDidChange:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)presentsFullScreen;
- (void)_requestDismissal;
- (id)_displayLayoutElementIdentifier;
- (void)_requestDestroy;
- (id)presentationViewWithIdentifier:(id)a0;
- (void)_addAlertSubviewIfReady;
- (id)_initWithApplicationInfo:(id)a0 proxyApplicationInfo:(id)a1 environment:(id)a2;
- (void)_removeAlertSubviewIfNecessary;
- (void)_updateSceneUI;
- (void)activateSceneWithSettings:(id)a0 completion:(id /* block */)a1;
- (void)backgroundSceneWithCompletion:(id /* block */)a0;
- (void)deactivateSceneWithReasonMask:(unsigned long long)a0;
- (void)foregroundSceneWithSettings:(id)a0 completion:(id /* block */)a1;
- (id)initWithApplicationInfo:(id)a0 environment:(id)a1;
- (id)initWithApplicationInfo:(id)a0 proxyApplicationInfo:(id)a1 environment:(id)a2;
- (void)invalidatePresentationViewForIdentifier:(id)a0;
- (BOOL)presentsUnderStatusBar;

@end
