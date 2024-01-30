@class ADInterstitialAd, ADCountdownButton;

@interface ADInterstitialAdPresentationViewController : UIViewController

@property (weak, nonatomic) ADInterstitialAd *interstitialAd;
@property (retain, nonatomic) ADCountdownButton *closeButton;

- (BOOL)prefersStatusBarHidden;
- (void).cxx_destruct;
- (BOOL)wantsFullScreenLayout;
- (void)viewDidLayoutSubviews;
- (id)initForInterstitialAd:(id)a0;
- (void)loadView;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)shouldTestVisibilityAtPoint:(struct CGPoint { double x0; double x1; })a0;

@end
