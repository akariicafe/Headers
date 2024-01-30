@class NSString, AVTToolBar, AVTAvatarAttributeEditorViewController, AVTUIEnvironment, AVTViewSessionProvider, AVTAvatarRecord, UIBarButtonItem, AVTSplashScreenViewController;
@protocol AVTAvatarEditorViewControllerDelegate, AVTAvatarStoreInternal, AVTUILogger;

@interface AVTAvatarEditorViewController : UIViewController <AVTSplashScreenViewControllerDelegate, AVTAvatarAttributeEditorViewControllerDelegate, UIAdaptivePresentationControllerDelegate, AVTToolBarDelegate>

@property (retain, nonatomic) AVTAvatarRecord *initialAvatarRecord;
@property (readonly, nonatomic) id<AVTAvatarStoreInternal> store;
@property (readonly, nonatomic) AVTViewSessionProvider *avtViewSessionProvider;
@property (readonly, nonatomic) AVTUIEnvironment *environment;
@property (readonly, nonatomic) id<AVTUILogger> logger;
@property (readonly, nonatomic) BOOL isCreating;
@property (retain, nonatomic) UIBarButtonItem *cancelButtonItem;
@property (retain, nonatomic) UIBarButtonItem *doneButtonItem;
@property (retain, nonatomic) AVTToolBar *toolbar;
@property (nonatomic) BOOL hasChanges;
@property (readonly, nonatomic) AVTSplashScreenViewController *splashScreenViewController;
@property (readonly, nonatomic) AVTAvatarAttributeEditorViewController *attributeEditorViewController;
@property (weak, nonatomic) id<AVTAvatarEditorViewControllerDelegate> delegate;
@property (nonatomic) BOOL shouldHideUserInfoView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)viewControllerForCreatingAvatarInStore:(id)a0;
+ (id)viewControllerForCreatingAvatarInStore:(id)a0 avtViewSessionProvider:(id)a1;
+ (id)viewControllerForEditingAvatar:(id)a0 avtViewSessionProvider:(id)a1 store:(id)a2;
+ (id)defaultSessionProvider;
+ (BOOL)shouldShowSplashScreen;
+ (id)viewControllerForEditingAvatar:(id)a0 store:(id)a1;

- (BOOL)presentationControllerShouldDismiss:(id)a0;
- (void)cancel:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)presentationControllerDidAttemptToDismiss:(id)a0;
- (id)keyCommands;
- (void)finish:(id)a0;
- (void)applyLayout:(id)a0;
- (void).cxx_destruct;
- (BOOL)canBecomeFirstResponder;
- (BOOL)isModalInPresentation;
- (void)viewDidAppear:(BOOL)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })additionalSafeAreaInsets;
- (void)splashScreenViewControllerDidFinish:(id)a0;
- (void)controllerPresentationWillObstructView:(id)a0;
- (void)setDisableAvatarSnapshotting:(BOOL)a0;
- (void)returnPressed:(id)a0;
- (void)prepareForAnimatedTransitionWithLayout:(id)a0 completionBlock:(id /* block */)a1;
- (id)initWithAvatarRecord:(id)a0 avtViewSessionProvider:(id)a1 store:(id)a2 enviroment:(id)a3 isCreating:(BOOL)a4;
- (void)setupInitialViewState;
- (id)visibleLayout;
- (void)updateToolBarForLayout:(id)a0;
- (id)appropriatePresentationController;
- (BOOL)disableAvatarSnapshotting;
- (void)loadSplashScreen;
- (void)loadAttributeEditorViewWithAvatarRecord:(id)a0;
- (void)configureNavigationItems;
- (void)enableDoneButton:(BOOL)a0;
- (void)escPressed:(id)a0;
- (void)confirmCancel:(id)a0;
- (void)handleDiscardAttempt;
- (void)attributeEditorDidMakeFirstSelection:(id)a0;
- (void)attributeEditor:(id)a0 didUpdateVisibleLayout:(id)a1;
- (void)toolbar:(id)a0 didSelectButton:(id)a1 atIndex:(unsigned long long)a2;
- (void)prepareForPresetsScrollTestOnCategory:(id)a0 readyHandler:(id /* block */)a1;
- (void)configurePPTMemoji;

@end
