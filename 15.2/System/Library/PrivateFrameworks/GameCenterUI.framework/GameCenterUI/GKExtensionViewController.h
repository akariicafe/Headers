@class GKGame, UIVisualEffectView, NSString, NSLayoutConstraint, UIViewController;

@interface GKExtensionViewController : UINavigationController <GKDaemonProxyDataUpdateDelegate, GKExtensionProtocol, GKExtensionHostProtocol, GKDashboardServiceInterface>

@property (nonatomic) BOOL hasInitialData;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) NSLayoutConstraint *effectBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *effectTopConstraint;
@property (nonatomic) BOOL alwaysShowDoneButton;
@property (nonatomic) double statusBarHeight;
@property (retain, nonatomic) UIViewController *contentViewController;
@property (retain, nonatomic) GKGame *game;
@property (nonatomic) int hostPID;
@property (nonatomic) BOOL adjustTopConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setViewControllers:(id)a0 animated:(BOOL)a1;
- (void)finish;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (void)willTransitionToTraitCollection:(id)a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (double)_statusBarHeightForCurrentInterfaceOrientation;
- (void)didBecomeActive:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)willResignActive:(id)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)canBecomeFirstResponder;
- (void)refreshContentsForDataType:(unsigned int)a0 userInfo:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)didShowViewController:(id)a0 animated:(BOOL)a1;
- (void)donePressed:(id)a0;
- (void)setInitialState:(id)a0 withReply:(id /* block */)a1;
- (void)messageFromExtension:(id)a0;
- (BOOL)_useBackdropViewForWindowBackground;
- (id)blurEffectForTraitCollection:(id)a0;
- (void)extensionIsCanceling;
- (void)addVisualEffectViewForView:(id)a0;
- (void)messageFromClient:(id)a0;
- (void)extensionIsFinishing;
- (void)setToLightBackground;
- (void)setToDarkBackground;
- (void)setupVisualEffects;
- (void)constructContentViewController;
- (void)configureContentViewController;
- (void)addDoneButtonToViewController:(id)a0;
- (id)hostObjectProxy;
- (void)sendMessageToClient:(id)a0;
- (void)clientDidFinish;
- (void)clientDidCancel;
- (void)clientWillTerminate;
- (void)logOnceGameControllerUsedInGameLayer;

@end
