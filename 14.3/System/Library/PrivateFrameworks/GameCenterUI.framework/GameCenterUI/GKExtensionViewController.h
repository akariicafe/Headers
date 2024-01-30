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

- (void)finish;
- (void).cxx_destruct;
- (void)setupVisualEffects;
- (void)constructContentViewController;
- (void)configureContentViewController;
- (void)addDoneButtonToViewController:(id)a0;
- (id)hostObjectProxy;
- (void)willTransitionToTraitCollection:(id)a0 withTransitionCoordinator:(id)a1;
- (void)sendMessageToClient:(id)a0;
- (void)clientDidFinish;
- (void)clientDidCancel;
- (void)clientWillTerminate;
- (void)messageFromClient:(id)a0;
- (void)extensionIsFinishing;
- (void)dealloc;
- (double)_statusBarHeightForCurrentInterfaceOrientation;
- (id)initWithCoder:(id)a0;
- (void)addVisualEffectViewForView:(id)a0;
- (void)didBecomeActive:(id)a0;
- (void)extensionIsCanceling;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)_useBackdropViewForWindowBackground;
- (void)didShowViewController:(id)a0 animated:(BOOL)a1;
- (void)willResignActive:(id)a0;
- (void)setToLightBackground;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setToDarkBackground;
- (void)donePressed:(id)a0;
- (void)refreshContentsForDataType:(unsigned int)a0 userInfo:(id)a1;
- (void)setInitialState:(id)a0 withReply:(id /* block */)a1;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (void)setViewControllers:(id)a0 animated:(BOOL)a1;
- (void)traitCollectionDidChange:(id)a0;
- (void)messageFromExtension:(id)a0;
- (id)blurEffectForTraitCollection:(id)a0;
- (void)viewDidLoad;

@end
