@class PPLPeopleAppSceneManager, NSString, NSURL, UIView, FBScene, PPLPeopleEntityMetadata;
@protocol UIScenePresenter, UIScenePresentation, PPLPeopleEntityViewControllerDelegate;

@interface PPLPeopleEntityViewController : UIViewController <PPLPeopleAppSceneRequester>

@property (retain, nonatomic) FBScene *scene;
@property (retain, nonatomic) UIView<UIScenePresentation> *hostView;
@property (retain, nonatomic) id<UIScenePresenter> presenter;
@property (retain, nonatomic) PPLPeopleEntityMetadata *metadata;
@property (readonly, nonatomic) PPLPeopleAppSceneManager *sceneManager;
@property (weak, nonatomic) id<PPLPeopleEntityViewControllerDelegate> delegate;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } initialSceneFrame;
@property (readonly, nonatomic) NSURL *personURL;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } sceneSafeAreaInsetPortrait;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithMetadata:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })sceneSettingsFrameFromRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithMetadata:(id)a0 sceneManager:(id)a1;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })safeAreaInsetFromSceneSettings:(id)a0;
- (void)sceneManager:(id)a0 didGrantOwnershipOfScene:(id)a1;
- (void)sceneManager:(id)a0 didRevokeOwnershipOfScene:(id)a1;
- (void)sceneManager:(id)a0 sceneDidRequestDismissal:(id)a1;

@end
