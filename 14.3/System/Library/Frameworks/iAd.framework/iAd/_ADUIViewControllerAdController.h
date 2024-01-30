@class ADBannerView, NSString, NSURL, ADInterstitialAd, UIViewController;

@interface _ADUIViewControllerAdController : NSObject <_UIViewControllerContentViewEmbedding, ADBannerViewDelegate, ADInterstitialAdDelegate>

@property (weak, nonatomic) UIViewController *contentViewController;
@property (nonatomic) long long interstitialPresentationPolicy;
@property (nonatomic) BOOL canDisplayBannerAds;
@property (nonatomic) BOOL canOwnSharedBanner;
@property (nonatomic, getter=isPresentingFullScreenAd) BOOL presentingFullScreenAd;
@property (readonly, nonatomic, getter=isDisplayingBannerAd) BOOL displayingBannerAd;
@property (retain, nonatomic) ADBannerView *bannerView;
@property (retain, nonatomic) ADInterstitialAd *interstitialAd;
@property (copy, nonatomic) NSURL *bannerServerURL;
@property (copy, nonatomic) NSString *bannerAdSection;
@property (copy, nonatomic) NSString *bannerAuthUserName;
@property (copy, nonatomic) NSURL *interstitialServerURL;
@property (copy, nonatomic) NSString *interstitialAdSection;
@property (copy, nonatomic) NSString *interstitialAuthUserName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)prepareInterstitialAds;
+ (id)_sharedBannerView;

- (void).cxx_destruct;
- (void)bannerViewActionDidFinish:(id)a0;
- (BOOL)bannerViewActionShouldBegin:(id)a0 willLeaveApplication:(BOOL)a1;
- (id)initWithContentViewController:(id)a0;
- (void)bannerView:(id)a0 didFailToReceiveAdWithError:(id)a1;
- (void)interstitialAdDidUnload:(id)a0;
- (void)viewControllerViewWillLayoutSubviews:(id)a0;
- (void)viewControllerViewDidLayoutSubviews:(id)a0;
- (void)viewController:(id)a0 viewWillAppear:(BOOL)a1;
- (void)viewController:(id)a0 viewDidAppear:(BOOL)a1;
- (void)bannerViewDidLoadAd:(id)a0;
- (void)viewController:(id)a0 viewWillDisappear:(BOOL)a1;
- (void)viewController:(id)a0 viewDidDisappear:(BOOL)a1;
- (void)interstitialAd:(id)a0 didFailWithError:(id)a1;
- (BOOL)interstitialAdActionShouldBegin:(id)a0 willLeaveApplication:(BOOL)a1;
- (void)interstitialAdActionDidFinish:(id)a0;
- (BOOL)requestInterstitialAdPresentation;
- (void)_layoutContentAndBannerViewAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)_considerTakingBannerViewAnimated:(BOOL)a0;
- (BOOL)_presentInterstitialIfReady;
- (void)_hideBannerView;
- (void)_setEmbeddedFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
