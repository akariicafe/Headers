@class NUPageViewController, NUArticleBarButtonItemManager, NSString, NUInterstitialAdManager, NUArticleNavigationController;
@protocol NURouter, NUPaging, NUPagingFactory, NUArticleContainerViewControllerDelegate;

@interface NUArticleContainerViewController : UIViewController <UIPageViewControllerDelegate, UIPageViewControllerDataSource, NUPageViewControllerDelegate, NUPageViewControllerDataSource, NUArticleBarButtonItemManagerDelegate, NUInterstitialAdManagerDelegate, NUNavigationControl, NULoadingDelegate>

@property (readonly, nonatomic) NUArticleNavigationController *navigationController;
@property (readonly, nonatomic) NUPageViewController *pageViewController;
@property (readonly, nonatomic) id<NUPagingFactory> pagingFactory;
@property (readonly, nonatomic) NUInterstitialAdManager *interstitialAdManager;
@property (retain, nonatomic) id<NUPaging> paging;
@property (readonly, nonatomic) NUArticleBarButtonItemManager *barButtonItemManager;
@property (readonly, nonatomic) id<NURouter> router;
@property (weak, nonatomic) id<NUArticleContainerViewControllerDelegate> delegate;
@property (nonatomic, getter=isLinkPreviewing) BOOL linkPreviewing;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)childViewControllerForStatusBarHidden;
- (id)init;
- (void).cxx_destruct;
- (id)pageViewController:(id)a0 viewControllerBeforeViewController:(id)a1;
- (id)pageViewController:(id)a0 viewControllerAfterViewController:(id)a1;
- (void)viewDidLayoutSubviews;
- (void)pageViewController:(id)a0 didChangeVisibleViewControllerFromViewController:(id)a1 direction:(unsigned long long)a2;
- (void)didReceiveMemoryWarning;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (void)loadingDidFinishWithError:(id)a0;
- (void)loadingWillStart;
- (void)enableNavigation:(BOOL)a0;
- (id)viewControllerPageableForViewController:(id)a0;
- (void)styleNavigationForPage:(id)a0;
- (void)pageViewController:(id)a0 viewController:(id)a1 changedVisibilityFactor:(double)a2;
- (void)articleBarButtonItemManager:(id)a0 performDoneActionForBarButtonItem:(id)a1;
- (void)articleBarButtonItemManager:(id)a0 performNextActionForBarButtonItem:(id)a1;
- (void)articleBarButtonItemManager:(id)a0 performShareActionForBarButtonItem:(id)a1;
- (void)articleBarButtonItemManagerDidLayoutBarButtonItems:(id)a0;
- (void)interstitialAdManager:(id)a0 didLoadInterstitialPage:(id)a1;
- (void)interstitialAdManager:(id)a0 didUnloadInterstitialPage:(id)a1;
- (id)interstitialAdManager:(id)a0 pageAfterPage:(id)a1;
- (id)initWithPagingFactory:(id)a0 interstitialAdManager:(id)a1 router:(id)a2;
- (void)loadWithArticleIDs:(id)a0;

@end
