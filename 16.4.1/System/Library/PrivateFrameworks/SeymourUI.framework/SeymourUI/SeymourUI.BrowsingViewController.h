@interface SeymourUI.BrowsingViewController : UINavigationController {
    void /* unknown type, empty encoding */ bag;
    void /* unknown type, empty encoding */ dependencies;
    void /* unknown type, empty encoding */ eventHub;
    void /* unknown type, empty encoding */ rootViewController;
    void /* unknown type, empty encoding */ navigationRouter;
    void /* unknown type, empty encoding */ pictureInPicturePresenter;
    void /* unknown type, empty encoding */ siriUserActivityHandler;
    void /* unknown type, empty encoding */ purchaseHandler;
    void /* unknown type, empty encoding */ dynamicOfferCoordinator;
    void /* unknown type, empty encoding */ webUserInterfaceCoordinator;
    void /* unknown type, empty encoding */ subscriptionToken;
    void /* unknown type, empty encoding */ browsingBeganEventState;
    void /* unknown type, empty encoding */ presentingAnalyticsConsent;
    void /* unknown type, empty encoding */ _welcomeAcknowledgementShowingEnabled;
    void /* unknown type, empty encoding */ _analyticsConsentShowingEnabled;
    void /* unknown type, empty encoding */ _forceAnalayticsConsentAcknowledgement;
}

@property (nonatomic, readonly) long long preferredStatusBarStyle;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)scrollToTop;
- (id)initWithRootViewController:(id)a0;
- (void)viewDidLoad;
- (id)initWithNavigationBarClass:(Class)a0 toolbarClass:(Class)a1;
- (void).cxx_destruct;

@end
