@class NSData, AAUIRemoteUIController, NSString, UINavigationController, ICQAlertController, ICQOffer, NSDictionary, ICQUpgradeFlowOptions, NSMutableArray, ICQUpgradeOfferViewController, AAUIServerUIHookHandler;
@protocol ICQUpgradeFlowManagerDelegate;

@interface ICQUpgradeFlowManager : NSObject <UINavigationControllerDelegate, ICQPageDelegate, RemoteUIControllerDelegate, ICQServerHookDelegate> {
    id /* block */ _didComplete;
    BOOL _didReceiveiTunesCode;
    BOOL _didCompleteICQAction;
    ICQUpgradeOfferViewController *_busyOfferViewController;
    int _renewCredentialsCount;
    AAUIServerUIHookHandler *_serverHookHandler;
}

@property (class, readonly, nonatomic) NSMutableArray *activeFlowManagers;

@property (nonatomic) BOOL completedFamilySetup;
@property (retain, nonatomic) AAUIRemoteUIController *remoteUIController;
@property (copy, nonatomic) NSString *closeURL;
@property (readonly, nonatomic) ICQOffer *offer;
@property (retain, nonatomic) NSDictionary *bindings;
@property (copy, nonatomic) ICQUpgradeFlowOptions *flowOptions;
@property (retain, nonatomic) NSData *preloadedRemoteUIData;
@property (weak, nonatomic) id<ICQUpgradeFlowManagerDelegate> delegate;
@property (nonatomic) BOOL shouldNavigationControllerBeDismissed;
@property (retain, nonatomic) UINavigationController *hostingNavigationController;
@property (retain, nonatomic) ICQAlertController *upgradeAlertController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldShowForPremiumOffer:(id)a0;
+ (BOOL)shouldShowForOffer:(id)a0;
+ (void)addHeadersForRequest:(id)a0 withCompletion:(id /* block */)a1;
+ (Class)subclassForOfferType:(long long)a0;
+ (BOOL)shouldSubclassShowForOffer:(id)a0;
+ (void)addActiveFlowManager:(id)a0;
+ (void)removeActiveFlowManager:(id)a0;
+ (void)flowManagerWithJourneyId:(id)a0 params:(id)a1 completion:(id /* block */)a2;
+ (void)needsToRunWithCompletion:(id /* block */)a0;

- (id)initWithOffer:(id)a0;
- (void)navigationController:(id)a0 willShowViewController:(id)a1 animated:(BOOL)a2;
- (void)remoteUIController:(id)a0 shouldLoadRequest:(id)a1 redirectResponse:(id)a2 withCompletionHandler:(id /* block */)a3;
- (void)remoteUIController:(id)a0 didFinishLoadWithError:(id)a1;
- (void)remoteUIControllerDidDismiss:(id)a0;
- (void)remoteUIController:(id)a0 willPresentModalNavigationController:(id)a1;
- (void)remoteUIController:(id)a0 didDismissModalNavigationWithObjectModels:(id)a1;
- (void)remoteUIController:(id)a0 didReceiveObjectModel:(id)a1 actionSignal:(unsigned long long *)a2;
- (unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_openURL:(id)a0 completion:(id /* block */)a1;
- (void)beginFlowWithPresentingViewController:(id)a0;
- (id)_whitelistedInProcessClients;
- (id)initSubclassWithOffer:(id)a0;
- (void)_performPageButtonActionWithParameters:(id)a0 completion:(id /* block */)a1;
- (void)_sendDelegateCancel;
- (void)_sendDelegateComplete;
- (void)_tappedAlertLink:(id)a0;
- (void)_beginRemoteFlow;
- (BOOL)_shouldPresentRemoteFlow;
- (void)_configurePresentingViewController:(id)a0;
- (void)_configurePresentingViewController:(id)a0 preloadedRemoteUIData:(id)a1;
- (void)_presentRemoteUIUsingViewController:(id)a0 withData:(id)a1;
- (id)_ICQNavigationControllerWithRootViewController:(id)a0;
- (void)_addBlurEffectToNavigationController:(id)a0;
- (void)presentRemoteViewWithData:(id)a0 andURL:(id)a1;
- (void)_sendDelegateDidPresentViewController:(id)a0;
- (void)_addAlertActionForAlertSpec:(id)a0 buttonIndex:(long long)a1;
- (id)initBaseclassWithOffer:(id)a0;
- (void)sender:(id)a0 action:(long long)a1 parameters:(id)a2;
- (void)_presentPageWithSpecification:(id)a0;
- (void)shouldNotSignalDelegateOnDismiss;
- (void)_setBusyOfferViewController:(id)a0;
- (BOOL)needsNetwork;
- (void)_clearBusyOfferViewController;
- (void)_initiateFamilySetupFlow;
- (void)dismissUpgradeFlowWithSuccess:(BOOL)a0;
- (void)showUpgradeFailurePage;
- (void)showNetworkFailurePage;
- (void)_cancelFlow;
- (void)_simulateDoneButton;
- (id)addParams:(id)a0 toJourneyURL:(id)a1;
- (id)initWithJourneyId:(id)a0 params:(id)a1;
- (void)_beginRemoteFlowWithURL:(id)a0;
- (void)_presentRemoteUIUsingViewController:(id)a0;
- (void)_presentUpgradeComplete;
- (id)initWithJourneyId:(id)a0;
- (void)beginJourney;
- (void)presentFlowHostedInNavigationController:(id)a0;

@end
