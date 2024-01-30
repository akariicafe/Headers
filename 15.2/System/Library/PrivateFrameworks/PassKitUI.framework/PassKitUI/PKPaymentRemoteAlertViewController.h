@class NSString, NSArray, SBSAssertion, PKFieldProperties, PKPassGroupsViewController, CLInUseAssertion, NSObject, PKAssertion, PKPaymentService;
@protocol OS_dispatch_group, BSInvalidatable;

@interface PKPaymentRemoteAlertViewController : SBUIRemoteAlertServiceViewController <PKPaymentServiceDelegate, SBSHardwareButtonEventConsuming> {
    PKPassGroupsViewController *_passGroupsViewController;
    id _staticGlyphResources;
    PKPaymentService *_paymentService;
    PKFieldProperties *_fieldProperties;
    NSArray *_fieldPassUniqueIdentifiers;
    NSString *_passUniqueIdentifier;
    CLInUseAssertion *_passbookForegroundAssertion;
    id<BSInvalidatable> _lockButtonObserver;
    SBSAssertion *_lockButtonAssertion;
    PKAssertion *_notificationSuppressionAssertion;
    NSObject<OS_dispatch_group> *_fieldPropertiesLookupGroup;
    long long _presentationSource;
    long long _standAloneTransactionType;
    unsigned long long _presentationStartTime;
    BOOL _backlightActive;
    BOOL _isLockScreenPresented;
    BOOL _processHomeButtonEvents;
    BOOL _brightnessRampingAllowed;
    BOOL _appearedOnce;
    BOOL _insertedGroupsVC;
    BOOL _shouldInsertGroupsVC;
    long long _invalidationStatus;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_shouldForwardViewWillTransitionToSize;
+ (BOOL)_isSecureForRemoteViewService;
+ (id)groupsControllerWithSource:(long long)a0 isLockScreenPresented:(BOOL)a1;

- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidMoveToWindow:(id)a0 shouldAppearOrDisappear:(BOOL)a1;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)_canShowWhileLocked;
- (void)_invalidate;
- (void)loadView;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (id)init;
- (void)consumeDoublePressUpForButtonKind:(long long)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (BOOL)shouldAutorotate;
- (void)handleButtonActions:(id)a0;
- (void)configureWithContext:(id)a0 completion:(id /* block */)a1;
- (void)didInvalidateForRemoteAlert;
- (void)openApplication:(id)a0;
- (void)_invalidateForType:(long long)a0;
- (void)_paymentDidReceiveSuccessfulTransactionNotification:(id)a0;
- (void)_contactlessInterfaceSessionDidAuthorize:(id)a0;
- (void)_contactlessInterfaceSessionFinishTransaction:(id)a0;
- (void)_appearIfNecessary;
- (void)_dismissIfRestricted;
- (void)_insertGroupController;
- (void)_presentHomeButtonDoubleTapAlertIfNecessary;
- (void)_presentPassAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)_setupGroupController;
- (void)_dismissForSource:(unsigned long long)a0 completion:(id /* block */)a1;
- (BOOL)_isInGroup;
- (BOOL)_notificationIsFromChildViewController:(id)a0;

@end
