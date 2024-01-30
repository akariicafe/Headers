@interface NewsArticles.InterstitialAdvertisementViewController : UIViewController <ADInterstitialAdDelegate> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ advertisementModel;
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ eventHandler;
    void /* unknown type, empty encoding */ interstitialAdvertisementView;
    void /* unknown type, empty encoding */ hasPresentedInterstitial;
}

@property (nonatomic, readonly) BOOL canBecomeFirstResponder;

- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)a0;
- (void)interstitialAdDidUnload:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)interstitialAd:(id)a0 didFailWithError:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)viewDidLoad;
- (BOOL)interstitialAdActionShouldBegin:(id)a0 willLeaveApplication:(BOOL)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;

@end
