@class GKMatchRequest, UIAlertController, NSString, GKTurnBasedMatchmakerHostViewController;
@protocol GKTurnBasedMatchmakerViewControllerDelegate;

@interface GKTurnBasedMatchmakerViewController : UINavigationController <GKLocalPlayerListener, GKTurnBasedEventListener, GKExtensionParentViewControllerProtocol>

@property (retain, nonatomic) GKTurnBasedMatchmakerHostViewController *remoteViewController;
@property (retain, nonatomic) GKMatchRequest *matchRequest;
@property (retain, nonatomic) UIAlertController *alertController;
@property (weak, nonatomic) id<GKTurnBasedMatchmakerViewControllerDelegate> turnBasedMatchmakerDelegate;
@property (nonatomic) BOOL showExistingMatches;
@property (nonatomic) long long matchmakingMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_preventsAppearanceProxyCustomization;

- (void)finishWithError:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)loadView;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)cancel;
- (id)initWithMatchRequest:(id)a0;
- (void)_setupChildViewController;
- (void)authenticationChanged:(id)a0;
- (void)_setupRemoteViewController;
- (void)extensionDidFinishWithError:(id)a0;
- (BOOL)shouldShowPlayForTurnBasedMatch;
- (BOOL)shouldShowQuitForTurnBasedMatch;
- (void)player:(id)a0 receivedTurnEventForMatch:(id)a1 didBecomeActive:(BOOL)a2;
- (void)finishWithMatch:(id)a0;
- (void)playerQuitMatch:(id)a0;

@end
