@class GKMatchRequest, UIAlertController, NSString, GKTurnBasedMatchmakerHostViewController;
@protocol GKTurnBasedMatchmakerViewControllerDelegate;

@interface GKTurnBasedMatchmakerViewController : UINavigationController <GKLocalPlayerListener, GKTurnBasedEventListener, GKExtensionParentViewControllerProtocol>

@property (retain, nonatomic) GKTurnBasedMatchmakerHostViewController *remoteViewController;
@property (retain, nonatomic) GKMatchRequest *matchRequest;
@property (retain, nonatomic) UIAlertController *alertController;
@property (weak, nonatomic) id<GKTurnBasedMatchmakerViewControllerDelegate> turnBasedMatchmakerDelegate;
@property (nonatomic) BOOL showExistingMatches;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_preventsAppearanceProxyCustomization;

- (void)cancel;
- (BOOL)shouldShowPlayForTurnBasedMatch;
- (BOOL)shouldShowQuitForTurnBasedMatch;
- (void)player:(id)a0 receivedTurnEventForMatch:(id)a1 didBecomeActive:(BOOL)a2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)_setupRemoteViewController;
- (void)finishWithError:(id)a0;
- (id)init;
- (void)finishWithMatch:(id)a0;
- (void).cxx_destruct;
- (id)initWithMatchRequest:(id)a0;
- (void)playerQuitMatch:(id)a0;
- (void)dealloc;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)_setupChildViewController;
- (void)authenticationChanged:(id)a0;
- (void)extensionDidFinishWithError:(id)a0;

@end
