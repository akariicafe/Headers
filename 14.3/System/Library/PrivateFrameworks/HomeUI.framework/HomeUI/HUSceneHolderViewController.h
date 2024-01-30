@class FBScene, NSString, RBSProcessIdentity, HUDashboardNavigationButton, FBSSceneIdentity, FBApplicationUpdateScenesTransaction;
@protocol UIScenePresenter;

@interface HUSceneHolderViewController : UIViewController <FBSceneObserver> {
    RBSProcessIdentity *_processIdentity;
    FBSSceneIdentity *_sceneIdentity;
    BOOL _visible;
    FBApplicationUpdateScenesTransaction *_transaction;
    FBScene *_scene;
    id<UIScenePresenter> _scenePresenter;
}

@property (retain, nonatomic) HUDashboardNavigationButton *closeButton;
@property (readonly, nonatomic) NSString *bundleId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)close:(id)a0;
- (void).cxx_destruct;
- (void)sceneDidInvalidate:(id)a0;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)didMoveToParentViewController:(id)a0;
- (id)initWithBundleIdentifier:(id)a0;
- (void)_updateScene;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)viewDidLoad;
- (void)_lookupScene;

@end
