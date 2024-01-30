@class DBSceneUpdate, NSString, NSMutableDictionary, UIView, FBScene, DBApplicationInfo;
@protocol UIScenePresenter, DBEnvironment, UIScenePresentation;

@interface DBWallpaperViewController : UIViewController <FBSceneManagerObserver, FBSceneObserver, BSInvalidatable>

@property (nonatomic, getter=isInvalidated) BOOL invalidated;
@property (weak, nonatomic) id<DBEnvironment> environment;
@property (retain, nonatomic) DBApplicationInfo *wallpaperAppInfo;
@property (copy, nonatomic) NSString *sceneID;
@property (retain, nonatomic) FBScene *scene;
@property (retain, nonatomic) id<UIScenePresenter> scenePresenter;
@property (retain, nonatomic) NSMutableDictionary *scenePresentersByIdentifier;
@property (retain, nonatomic) UIView<UIScenePresentation> *sceneHostView;
@property (copy, nonatomic) NSString *requester;
@property (retain, nonatomic) DBSceneUpdate *currentSceneUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sceneManager:(id)a0 didDestroyScene:(id)a1;
- (void)sceneManager:(id)a0 didCreateScene:(id)a1;
- (id)initWithEnvironment:(id)a0;
- (void)sceneManager:(id)a0 updateForScene:(id)a1 appliedWithContext:(id)a2;
- (void)viewDidLoad;
- (void)invalidate;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)_sendSceneUpdate;
- (void)updateAppearanceForWallpaper;

@end
