@class UIColor, NSMutableDictionary, GKHostedViewController, GKGame, NSString;

@interface GKRemoteViewServiceController : _UIRemoteViewController <GKExtensionHostProtocol>

@property (retain, nonatomic) NSMutableDictionary *dirtyProperties;
@property (weak, nonatomic) GKHostedViewController *managingViewController;
@property (retain, nonatomic) UIColor *previousStatusBarColor;
@property (copy, nonatomic) id /* block */ blockToPerformAfterViewDidAppear;
@property (nonatomic) BOOL didSetRemoteGame;
@property (nonatomic) BOOL viewDidAppear;
@property (readonly, nonatomic) BOOL serviceNeedsCurrentGame;
@property (readonly, nonatomic) BOOL serviceNeedsLocalPlayer;
@property (retain, nonatomic) GKGame *game;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)serviceViewControllerInterface;
+ (BOOL)shouldPropagateAppearanceCustomizations;
+ (id)exportedInterface;

- (void)viewServiceDidTerminateWithError:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (void)nudge;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setValue:(id)a0 forKeyPath:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (id)observedKeyPaths;
- (BOOL)serviceNeedsFriendCode;
- (void)populateInitialStateForRemoteView:(id)a0;
- (void)setupRemoteView;
- (long long)_desiredStatusBarStyle;
- (void)_performBlockAfterViewDidAppearIfNeeded;
- (BOOL)_dismissSelfAfterGettingShouldFinish;
- (void)remoteViewControllerIsFinishing;
- (void)_performSelectorAfterAppearingOrTimeOut:(SEL)a0;
- (void)remoteViewControllerIsCanceling;
- (BOOL)_dismissSelfAfterGettingShouldCancel;
- (void)messageFromExtension:(id)a0;
- (void)readyToPresentInController:(id)a0;

@end
