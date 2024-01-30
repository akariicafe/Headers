@class NSString, UIView, FBScene, CSBackgroundContentView;
@protocol UIScenePresenter, UIScenePresentation, CSWallpaperView;

@interface CSBackgroundContentViewController : CSCoverSheetViewControllerBase <SBFBacklightSceneHostEnvironmentProviding>

@property (readonly, nonatomic) FBScene *scene;
@property (readonly, nonatomic) id<UIScenePresenter> scenePresenter;
@property (readonly, nonatomic) UIView<UIScenePresentation> *presentationView;
@property (readonly, nonatomic, getter=isScreenOff) BOOL screenOff;
@property (readonly, nonatomic) CSBackgroundContentView *backgroundContentView;
@property (readonly, nonatomic) UIView<CSWallpaperView> *wallpaperView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithScene:(id)a0;
- (BOOL)_canShowWhileLocked;
- (id)sceneHostEnvironmentEntriesForBacklightSession;
- (void)dealloc;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)_updateForegroundState;
- (void)tapGestureRecognizerAction:(id)a0;

@end
