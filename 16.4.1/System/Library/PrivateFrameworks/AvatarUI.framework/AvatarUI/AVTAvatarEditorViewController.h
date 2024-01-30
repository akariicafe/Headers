@class NSString, AVTToolBar, AVTAvatarAttributeEditorViewController, AVTUIEnvironment, AVTViewSessionProvider, AVTAvatarRecord, UIBarButtonItem, AVTSplashScreenViewController;
@protocol AVTAvatarEditorViewControllerDelegate, AVTAvatarStoreInternal, AVTUILogger;

@interface AVTAvatarEditorViewController : UIViewController <AVTSplashScreenViewControllerDelegate, AVTAvatarAttributeEditorViewControllerDelegate, UIAdaptivePresentationControllerDelegate, AVTToolBarDelegate, AVTUIControllerPresentationDelegate>

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
@property (nonatomic) BOOL disableAvatarSnapshotting;
@property (weak, nonatomic) id<AVTAvatarEditorViewControllerDelegate> delegate;
@property (nonatomic) BOOL shouldHideUserInfoView;
@property (nonatomic) unsigned long long editorPresentationContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)viewControllerForCreatingAvatarInStore:(id)a0;
+ (id)defaultSessionProvider;
+ (BOOL)shouldShowSplashScreen;
+ (id)viewControllerForCreatingAvatarInStore:(id)a0 avtViewSessionProvider:(id)a1;
+ (id)viewControllerForEditingAvatar:(id)a0 avtViewSessionProvider:(id)a1 store:(id)a2;
+ (id)viewControllerForEditingAvatar:(id)a0 store:(id)a1;

- (void)finish:(id)a0;
- (void)presentationControllerDidAttemptToDismiss:(id)a0;
- (void)cancel:(id)a0;
- (void)viewDidLoad;
- (BOOL)canBecomeFirstResponder;
- (id)keyCommands;
- (void)viewDidAppear:(BOOL)a0;
- (BOOL)presentationControllerShouldDismiss:(id)a0;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })additionalSafeAreaInsets;
- (BOOL)isModalInPresentation;
- (void)applyLayout:(id)a0;
- (id)appropriatePresentationController;
- (void)attributeEditor:(id)a0 didUpdateVisibleLayout:(id)a1;
- (void)attributeEditorDidMakeFirstSelection:(id)a0;
- (void)configureEditorNavigationItems;
- (void)configurePPTMemoji;
- (void)configureSplashNavigationItems;
- (void)confirmCancel:(id)a0;
- (void)controllerPresentationWillObstructView:(id)a0;
- (void)enableDoneButton:(BOOL)a0;
- (void)escPressed:(id)a0;
- (void)handleDiscardAttempt;
- (id)initWithAvatarRecord:(id)a0 avtViewSessionProvider:(id)a1 store:(id)a2 enviroment:(id)a3 isCreating:(BOOL)a4;
- (void)loadAttributeEditorViewWithAvatarRecord:(id)a0;
- (void)loadSplashScreen;
- (void)prepareForAnimatedTransitionWithLayout:(id)a0 completionBlock:(id /* block */)a1;
- (void)prepareForPresetsScrollTestOnCategory:(id)a0 readyHandler:(id /* block */)a1;
- (void)returnPressed:(id)a0;
- (void)setupInitialViewState;
- (void)splashScreenViewControllerDidCancel:(id)a0;
- (void)splashScreenViewControllerDidFinish:(id)a0;
- (void)toolbar:(id)a0 didSelectButton:(id)a1 atIndex:(unsigned long long)a2;
- (void)updateToolBarForLayout:(id)a0;
- (id)visibleLayout;

@end
