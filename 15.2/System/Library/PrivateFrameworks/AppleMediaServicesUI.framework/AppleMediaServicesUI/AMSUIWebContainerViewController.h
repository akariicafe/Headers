@class AMSUIWebNavigationBarModel, UINavigationItem, AMSUIWebAppearance, NSString, NSDictionary, AMSUIWebClientContext, UIViewController;
@protocol AMSUIWebPresentationDelegate, AMSUIWebPagePresenter;

@interface AMSUIWebContainerViewController : AMSUICommonViewController <UIViewControllerTransitioningDelegate, AMSUIWebPresentationDelegate, UIAdaptivePresentationControllerDelegate>

@property (weak, nonatomic) AMSUIWebClientContext *context;
@property (nonatomic) BOOL dismissCalled;
@property (nonatomic) BOOL hasAppeared;
@property (retain, nonatomic) UIViewController *hiddenViewController;
@property (weak, nonatomic) UINavigationItem *lastNavigationItem;
@property (nonatomic) long long lastNavigationStyle;
@property (retain, nonatomic) AMSUIWebNavigationBarModel *navigationBarModel;
@property (nonatomic) struct CGPoint { double x; double y; } scrollPosition;
@property (readonly, nonatomic) unsigned long long activePresentationType;
@property (retain, nonatomic) AMSUIWebAppearance *appearance;
@property (nonatomic) long long containerIndex;
@property (retain, nonatomic) UIViewController<AMSUIWebPagePresenter> *containedViewController;
@property (nonatomic) long long disableReappearPlaceholder;
@property (weak, nonatomic) AMSUIWebContainerViewController<AMSUIWebPresentationDelegate> *modalPresentationDelegate;
@property (weak, nonatomic) AMSUIWebContainerViewController *nextContainer;
@property (retain, nonatomic) NSDictionary *pageInfo;
@property (weak, nonatomic) AMSUIWebContainerViewController<AMSUIWebPresentationDelegate> *pushPresentationDelegate;
@property (nonatomic) BOOL shouldSkipInitialRefresh;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)presentationControllerDidDismiss:(id)a0;
- (void)loadView;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)navigationItem;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)_applyAppearance;
- (void)applyNavigationModel:(id)a0;
- (void)handleModalDismissal;
- (void)_postEvent:(id)a0;
- (void)_handlePushDismissal;
- (unsigned long long)_determineActivePresentationType;
- (void)_refreshForInitialAppear;
- (void)_setupNavBarAnimated:(BOOL)a0;
- (void)didDismissController:(id)a0;
- (void)_adjustWebViewScrollFor:(id)a0 completion:(id /* block */)a1;
- (void)_prepareToMoveWebViewToVC:(id)a0 completion:(id /* block */)a1;
- (void)replaceContentWithViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_scrollTo:(struct CGPoint { double x0; double x1; })a0 webView:(id)a1 completion:(id /* block */)a2;
- (id)_rightButtonModel;
- (void)_handleRightNavigationButton:(id)a0;
- (id)_customBarButtonItemWithModel:(id)a0 target:(id)a1 selector:(SEL)a2;
- (id)_barButtonItemForButtonModel:(id)a0;
- (id)_barButtonItemForAppViewModel:(id)a0;
- (id)_leftButtonModel;
- (id)_buttonModelForConditionalButtons:(id)a0;
- (void)_handleLeftNavigationButton:(id)a0;
- (id)_rightBarButtonItemWithNavigationModel:(id)a0;
- (id)_makeCustomNavigationBarAppearanceWithModel:(id)a0;
- (id)initWithViewController:(id)a0 appearance:(id)a1 navigationBar:(id)a2 context:(id)a3;
- (void)cacheScrollViewPositionFor:(id)a0;

@end
