@class SUClientInterface, NSString, SURotationController, SUViewControllerScriptProperties, SUViewControllerContext, SUNavigationItem, NSMutableArray, UIViewController, UIBarButtonItem;

@interface SUViewController : UIViewController <SUScriptNativeObject, ISOperationDelegate> {
    BOOL _canBeWeakScriptReference;
    NSMutableArray *_cancelOnDeallocOperations;
    UIBarButtonItem *_exitStoreButton;
    SUViewControllerContext *_memoryPurgeContext;
    NSMutableArray *_operations;
    SURotationController *_rotationController;
    long long _rotationState;
    long long _transitionSafetyCount;
}

@property (readonly, nonatomic, getter=_cachedScriptProperties) SUViewControllerScriptProperties *_cachedScriptProperties;
@property (readonly, nonatomic, getter=_isEnteringForeground) BOOL _enteringForeground;
@property (readonly, nonatomic, getter=_pendingDialogs) NSMutableArray *_pendingDialogs;
@property (readonly, nonatomic, getter=_restoredContext) SUViewControllerContext *_restoredContext;
@property (retain, nonatomic) SUClientInterface *clientInterface;
@property (nonatomic, getter=isSkLoading) BOOL skLoading;
@property (readonly, nonatomic) UIViewController *footerViewController;
@property (retain, nonatomic) UIViewController *inputAccessoryViewController;
@property (nonatomic) BOOL shouldExcludeFromNavigationHistory;
@property (nonatomic) BOOL shouldAdjustContentOffsets;
@property (nonatomic) BOOL showsLibraryButton;
@property (nonatomic) BOOL shouldInvalidateForMemoryPurge;
@property (readonly, nonatomic, getter=isVisible) BOOL visible;
@property (readonly, nonatomic, getter=isVisibleAndFrontmost) BOOL visibleAndFrontmost;
@property (readonly, nonatomic) double defaultPNGExpirationTime;
@property (readonly, nonatomic) NSString *defaultPNGName;
@property (readonly, retain, nonatomic) SUNavigationItem *navigationItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (id)inputAccessoryView;
- (void)willMoveToParentViewController:(id)a0;
- (void)_applicationDidEnterBackgroundNotification:(id)a0;
- (BOOL)becomeFirstResponder;
- (void)_applicationWillEnterForegroundNotification:(id)a0;
- (void)willAnimateRotationToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (id)navigationController;
- (void)didReceiveMemoryWarning;
- (void)setSection:(id)a0;
- (id)tabBarItem;
- (void)willRotateToInterfaceOrientation:(long long)a0 duration:(double)a1;
- (void)didRotateFromInterfaceOrientation:(long long)a0;
- (void)remoteControlReceivedWithEvent:(id)a0;
- (void)reload;
- (long long)interfaceOrientation;
- (id)initWithSection:(id)a0;
- (void)applicationWillSuspend;
- (void)dealloc;
- (BOOL)canBecomeFirstResponder;
- (void)viewWillDisappear:(BOOL)a0;
- (id)init;
- (void)applicationDidResume;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)invalidate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)setTitle:(id)a0;
- (void).cxx_destruct;
- (void)loadView;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)_canReloadView;
- (id)_existingNavigationItem;
- (void)_setExistingNavigationItem:(id)a0;
- (id)moreListImage;
- (id)moreListSelectedImage;
- (id)navigationItem;
- (void)setParentViewController:(id)a0;
- (BOOL)window:(id)a0 shouldAutorotateToInterfaceOrientation:(long long)a1;
- (void)operationFinished:(id)a0;
- (void)operation:(id)a0 failedWithError:(id)a1;
- (void)_keyboardDidHideNotification:(id)a0;
- (void)_keyboardWillShowNotification:(id)a0;
- (id)viewControllerFactory;
- (void)_keyboardWillHideNotification:(id)a0;
- (id)copyScriptProperties;
- (BOOL)presentDialogForError:(id)a0 pendUntilVisible:(BOOL)a1;
- (void)setScriptProperties:(id)a0;
- (void)cancelOperations;
- (void)_keyboardDidShowNotification:(id)a0;
- (void)_dismissFooterAnimationDidStop:(id)a0;
- (void)trackOperation:(id)a0 cancelOnDealloc:(BOOL)a1;
- (long long)ITunesStoreUIBarStyle;
- (BOOL)presentDialog:(id)a0 pendUntilVisible:(BOOL)a1;
- (void)_exitStoreButtonAction:(id)a0;
- (void)_exitStoreButtonDidChangeNotification:(id)a0;
- (void)_invalidateForMemoryPurge;
- (void)_presentFooterAnimationDidStop;
- (void)_reloadExitStoreButtonWithParentViewController:(id)a0;
- (void)_reloadLibraryButton;
- (id)_rotationController;
- (BOOL)clearsWeakScriptReferences;
- (id)copyArchivableContext;
- (id)copyChildViewControllersForReason:(long long)a0;
- (id)copyDefaultScriptProperties;
- (void)dismissFooterViewControllerAnimated:(BOOL)a0;
- (void)enqueueOperation:(id)a0 cancelOnDealloc:(BOOL)a1;
- (void)handleApplicationURL:(id)a0;
- (void)handleApplicationURL:(id)a0 withSourceApplication:(id)a1 sourceURL:(id)a2;
- (void)invalidateForMemoryPurge;
- (id)newRotationController;
- (void)presentFooterViewController:(id)a0 animated:(BOOL)a1;
- (void)reloadContentSizeForViewInPopover;
- (void)resetRestoredContext;
- (void)restoreArchivableContext:(id)a0;
- (void)setTitle:(id)a0 changeTabBarItem:(BOOL)a1;
- (void)storePageProtocolDidChange;

@end
