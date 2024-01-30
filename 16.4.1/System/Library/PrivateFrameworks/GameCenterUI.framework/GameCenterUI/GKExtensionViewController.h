@class NSString, UIVisualEffectView, NSLayoutConstraint, UIViewController;

@interface GKExtensionViewController : UINavigationController <GKDaemonProxyDataUpdateDelegate, GKExtensionProtocol, GKExtensionHostProtocol, GKDashboardServiceInterface>

@property (nonatomic) BOOL hasInitialData;
@property (retain, nonatomic) UIVisualEffectView *effectView;
@property (retain, nonatomic) NSLayoutConstraint *effectBottomConstraint;
@property (retain, nonatomic) NSLayoutConstraint *effectTopConstraint;
@property (nonatomic) BOOL alwaysShowDoneButton;
@property (nonatomic) double statusBarHeight;
@property (retain, nonatomic) UIViewController *contentViewController;
@property (nonatomic) int hostPID;
@property (nonatomic) long long hostUserInterfaceIdiom;
@property (nonatomic) BOOL adjustTopConstraint;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)finish;
- (void)willTransitionToTraitCollection:(id)a0 withTransitionCoordinator:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)setViewControllers:(id)a0 animated:(BOOL)a1;
- (void)viewDidLoad;
- (BOOL)canBecomeFirstResponder;
- (void)pushViewController:(id)a0 animated:(BOOL)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)refreshContentsForDataType:(unsigned int)a0 userInfo:(id)a1;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)didShowViewController:(id)a0 animated:(BOOL)a1;
- (double)_statusBarHeightForCurrentInterfaceOrientation;
- (void)clientDidCancel;
- (void)clientDidFinish;
- (id)hostObjectProxy;
- (BOOL)_useBackdropViewForWindowBackground;
- (void)addDoneButtonToViewController:(id)a0;
- (void)addVisualEffectViewForView:(id)a0;
- (void)clientWillTerminate;
- (void)configureContentViewController;
- (void)constructContentViewController;
- (void)donePressed:(id)a0;
- (void)extensionIsCanceling;
- (void)extensionIsFinishing;
- (void)logOnceGameControllerUsedInGameLayer;
- (void)messageFromClient:(id)a0;
- (void)messageFromExtension:(id)a0;
- (void)sendMessageToClient:(id)a0;
- (void)setInitialState:(id)a0 withReply:(id /* block */)a1;
- (void)setToDarkBackground;
- (void)setToLightBackground;
- (void)setupVisualEffects;

@end
