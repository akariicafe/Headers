@class NSTimer, UIView, WFDialogRequest, WFCompactStatusViewController, NSString, WFCompactUnlockService, WFDialogAttribution, WFActionUserInterfaceListener, NSProgress, MTMaterialView, WFWorkflowRunningContext, WFDebouncer;

@interface WFCompactHostingViewController : UIViewController <WFActionUserInterfaceListenerDelegate, WFCompactDialogViewControllerDelegate>

@property (readonly, nonatomic) BOOL screenIsLocked;
@property (retain, nonatomic) WFWorkflowRunningContext *runningContext;
@property (retain, nonatomic) WFDialogAttribution *runningAttribution;
@property (retain, nonatomic) NSProgress *progress;
@property (retain, nonatomic) id progressSubscriber;
@property (nonatomic) BOOL hasViewAppeared;
@property (retain, nonatomic) UIView *dimmingView;
@property (retain, nonatomic) MTMaterialView *materialView;
@property (retain, nonatomic) WFCompactStatusViewController *statusViewController;
@property (retain, nonatomic) NSTimer *statusViewTimer;
@property (retain, nonatomic) WFDialogRequest *pendingRequest;
@property (nonatomic) BOOL handlingRequest;
@property (nonatomic) BOOL preparingToPresentDialog;
@property (copy, nonatomic) id /* block */ requestCompletionHandler;
@property (retain, nonatomic) WFActionUserInterfaceListener *actionInterfaceListener;
@property (readonly, nonatomic) WFCompactUnlockService *unlockService;
@property (retain, nonatomic) WFDebouncer *singleStepShortcutCompletionDialogDebouncer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissPresentedContentWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)loadView;
- (void)viewDidAppear:(BOOL)a0;
- (void)handleTapGesture:(id)a0;
- (void)handleRequest:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)_canShowWhileLocked;
- (void)viewWillLayoutSubviews;
- (void)cancelAndDismiss;
- (void)dismissPersistentChromeWithSuccess:(BOOL)a0 customAttribution:(id)a1 completionHandler:(id /* block */)a2;
- (void)preparePersistentChromeWithContext:(id)a0 attribution:(id)a1;
- (void)actionUserInterfaceListener:(id)a0 showViewInPlatter:(id)a1 attribution:(id)a2;
- (void)keyboardWillChange;
- (void)dialogViewController:(id)a0 didFinishWithResponse:(id)a1 waitForFollowUpRequest:(BOOL)a2;
- (id)initWithScreenLocked:(BOOL)a0;
- (void)presentChromeIfPossible;
- (void)updateChromeVisibilityWithCompletionHandler:(id /* block */)a0;
- (void)presentStatusViewController;
- (void)scheduleStatusViewToAppear;
- (void)clearStatusViewTimer;
- (void)setTouchPassthrough:(BOOL)a0;
- (void)handlePendingRequest;
- (void)dismissPlatterViewControllerIfNecessaryAnimated:(BOOL)a0 completionHandler:(id /* block */)a1;
- (void)dismissPlatterViewControllerAndUpdateChromeAnimated:(BOOL)a0 completionHandler:(id /* block */)a1;

@end
