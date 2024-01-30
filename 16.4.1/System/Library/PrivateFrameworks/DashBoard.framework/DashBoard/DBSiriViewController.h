@class NSString, SiriPresentationViewController, NSArray, DBWorkspaceStateChangeRequest, NSMutableSet, UILongPressGestureRecognizer;
@protocol SiriPresentationIntentUsageDelegate, DBEnvironment, BSInvalidatable;

@interface DBSiriViewController : UIViewController <SiriPresentationControllerDelegate, SiriPresentationIntentUsageDelegate, DBDashboardWorkspaceEntityPresenting>

@property (weak, nonatomic) id<DBEnvironment> environment;
@property (retain, nonatomic) SiriPresentationViewController *presentationViewController;
@property (copy, nonatomic) id /* block */ presentationRequestHandler;
@property (copy, nonatomic) NSString *activeIntentBundleID;
@property (retain, nonatomic) NSArray *constraints;
@property (retain, nonatomic) id screenBorrowToken;
@property (retain, nonatomic) DBWorkspaceStateChangeRequest *pendingChangeRequest;
@property (retain, nonatomic) id<BSInvalidatable> layoutElementAssertion;
@property (nonatomic, getter=isDismissed) BOOL dismissed;
@property (retain, nonatomic) NSMutableSet *touchToDismissEnabledReasons;
@property (retain, nonatomic) UILongPressGestureRecognizer *touchToDismissRecognizer;
@property (nonatomic, getter=isPaired) BOOL paired;
@property (weak, nonatomic) id<SiriPresentationIntentUsageDelegate> intentUsageDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *identifier;

- (id)initWithEnvironment:(id)a0;
- (void)handleEvent:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (BOOL)presentsFullScreen;
- (void)siriPresentation:(id)a0 isEnabledDidChange:(BOOL)a1;
- (void)siriPresentation:(id)a0 requestsDismissalWithOptions:(id)a1 withHandler:(id /* block */)a2;
- (void)siriPresentation:(id)a0 requestsPresentationWithOptions:(id)a1 withHandler:(id /* block */)a2;
- (void)siriPresentation:(id)a0 requestsPunchout:(id)a1 withHandler:(id /* block */)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_hostedPresentationFrame;
- (void)_updateHostedPresentationFrame;
- (void)activeIntentWithBundleId:(id)a0;
- (id)presentationViewWithIdentifier:(id)a0;
- (void)_addPresentationView;
- (void)_handleBackgroundURLRequest:(id)a0 applicationInfo:(id)a1;
- (void)_handleHomeEventType:(unsigned long long)a0;
- (void)_handlePunchoutRequest:(id)a0;
- (void)_removePresentationView;
- (void)_requestDismissalWithReason:(unsigned long long)a0;
- (void)_safeDismissAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)_telephonyDropTapped:(id)a0;
- (void)_touchedDisplayToDismiss:(id)a0;
- (void)_updateTouchToDismiss;
- (void)activateSceneWithSettings:(id)a0 completion:(id /* block */)a1;
- (void)backgroundSceneWithCompletion:(id /* block */)a0;
- (void)deactivateSceneWithReasonMask:(unsigned long long)a0;
- (void)foregroundSceneWithSettings:(id)a0 completion:(id /* block */)a1;
- (void)handleTransitionToFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidatePresentationViewForIdentifier:(id)a0;
- (BOOL)presentsUnderStatusBar;
- (void)setTouchToDismissEnabled:(BOOL)a0 forRequester:(id)a1;

@end
