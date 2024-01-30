@class UIView, NSString, AMSUIWebAppearance, AMSUILoadingView, AMSUIWebLoadingPageModel, AMSBinaryPromise, AMSUIWebClientContext, UIViewController;
@protocol AMSUIWebPagePresenter;

@interface AMSUIWebPlaceholderViewController : AMSUICommonViewController <AMSUIWebPagePresenter>

@property (retain, nonatomic) AMSUIWebClientContext *context;
@property (nonatomic) BOOL hasAppeared;
@property (nonatomic) BOOL isVisible;
@property (retain, nonatomic) AMSUILoadingView *loadingView;
@property (nonatomic) BOOL shouldSnapshot;
@property (retain, nonatomic) AMSBinaryPromise *snapshotPromise;
@property (retain, nonatomic) UIView *snapshotView;
@property (retain, nonatomic) UIView *visibleView;
@property (nonatomic) BOOL animateFadeIn;
@property (retain, nonatomic) AMSUIWebAppearance *appearance;
@property (retain, nonatomic) AMSUIWebLoadingPageModel *model;
@property (retain, nonatomic) UIViewController<AMSUIWebPagePresenter> *originalViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithContext:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)_applyAppearance;
- (void)_replacePrimaryViewWithView:(id)a0 animated:(BOOL)a1;
- (void)_startReappearTransitionTimerAnimated:(BOOL)a0;
- (void)_transitionToLoadingAnimated:(BOOL)a0;
- (void)_transitionToSnapshot;
- (void)awaitSnapshotWithCompletion:(id /* block */)a0;
- (id)initWithModel:(id)a0 context:(id)a1 appearance:(id)a2;
- (id)initWithSnapshot:(id)a0 context:(id)a1 appearance:(id)a2;
- (void)willAppearAfterDismiss;
- (void)willPresentPageModel:(id)a0 appearance:(id)a1;

@end
