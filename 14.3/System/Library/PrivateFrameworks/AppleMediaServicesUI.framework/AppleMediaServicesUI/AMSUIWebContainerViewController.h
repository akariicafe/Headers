@class UIViewController, NSString, AMSUIWebClientContext, NSDictionary, AMSUIWebAppearance, AMSUIWebNavigationBarModel;
@protocol AMSUIWebPresentationDelegate, AMSUIWebPagePresenter;

@interface AMSUIWebContainerViewController : AMSUICommonViewController <UIViewControllerTransitioningDelegate, AMSUIWebPresentationDelegate, UIAdaptivePresentationControllerDelegate>

@property (weak, nonatomic) AMSUIWebClientContext *context;
@property (nonatomic) BOOL dismissCalled;
@property (nonatomic) BOOL hasAppeared;
@property (retain, nonatomic) UIViewController *hiddenViewController;
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

- (id)navigationItem;
- (void).cxx_destruct;
- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)presentationControllerDidDismiss:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)_applyAppearance;
- (void)handleModalDismissal;
- (void)_postEvent:(id)a0;
- (void)_handlePushDismissal;
- (unsigned long long)_determineActivePresentationType;
- (void)_refreshForInitialAppear;
- (void)applyNavigationModel:(id)a0;
- (void)_setupNavBarAnimated:(BOOL)a0;
- (void)didDismissController:(id)a0;
- (void)_adjustWebViewScrollFor:(id)a0 completion:(id /* block */)a1;
- (void)_prepareToMoveWebViewToVC:(id)a0 completion:(id /* block */)a1;
- (void)replaceContentWithViewController:(id)a0 animated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_scrollTo:(struct CGPoint { double x0; double x1; })a0 webView:(id)a1 completion:(id /* block */)a2;
- (void)_handleSelectedNavigationButton:(id)a0;
- (id)_barButtonItemFromModel:(id)a0 navModel:(id)a1;
- (id)initWithViewController:(id)a0 appearance:(id)a1 navigationBar:(id)a2 context:(id)a3;
- (void)cacheScrollViewPositionFor:(id)a0;

@end
