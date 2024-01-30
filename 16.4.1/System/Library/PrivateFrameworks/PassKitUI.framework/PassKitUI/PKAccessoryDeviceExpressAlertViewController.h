@class PKAccessoryDeviceView, NSString, PKAccessoryDevice, SBSAssertion, PKFieldProperties, NSMutableDictionary, PKAccessoryDeviceMonitor, CLInUseAssertion, NSArray, PKAssertion;
@protocol BSInvalidatable;

@interface PKAccessoryDeviceExpressAlertViewController : SBUIRemoteAlertServiceViewController <SBSHardwareButtonEventConsuming, PKAccessoryDeviceMonitorDelegate, PKAccessoryDeviceViewDelegate> {
    BOOL _deviceUILocked;
    long long _presentationSource;
    NSString *_passUniqueIdentifier;
    id _staticGlyphResources;
    id<BSInvalidatable> _lockButtonObserver;
    SBSAssertion *_lockButtonAssertion;
    PKAssertion *_notificationSuppressionAssertion;
    BOOL _brightnessRampingAllowed;
    BOOL _backlightActive;
    BOOL _processHomeButtonEvents;
    CLInUseAssertion *_passbookForegroundAssertion;
    BOOL _appeared;
    NSMutableDictionary *_registeredExpressObservers;
    BOOL _hasMultiple;
    long long _accessoryDeviceViewState;
    BOOL _presentedOnView;
    PKAccessoryDeviceView *_accessoryDeviceView;
    PKAccessoryDevice *_accessoryDevice;
    PKAccessoryDeviceMonitor *_accessoryDeviceMonitor;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _windowedAccessoryCutoutFrameInScreen;
    PKFieldProperties *_fieldProperties;
    NSArray *_fieldPassUniqueIdentifiers;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_shouldForwardViewWillTransitionToSize;
+ (BOOL)_isSecureForRemoteViewService;

- (id)childViewControllerForStatusBarHidden;
- (BOOL)prefersStatusBarHidden;
- (BOOL)_canShowWhileLocked;
- (id)childViewControllerForStatusBarStyle;
- (void)dealloc;
- (void)_dismiss;
- (id)init;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (struct CGSize { double x0; double x1; })sizeForChildContentContainer:(id)a0 withParentContainerSize:(struct CGSize { double x0; double x1; })a1;
- (void)viewWillLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_invalidate;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)didAttachSleeveAccessory:(id)a0;
- (void)didDetachSleeveAccessory;
- (void)_appearIfNecessary;
- (void)_changeStateIfNecessaryTo:(long long)a0;
- (void)_contactlessInterfaceSessionDidAuthorize:(id)a0;
- (void)_contactlessInterfaceSessionFinishTransaction:(id)a0;
- (void)_dismissIfRestricted;
- (void)_dismissImmediately:(BOOL)a0;
- (id)_expressNotificationNames;
- (void)_handleExpressNotification:(id)a0;
- (void)_paymentDidReceiveSuccessfulTransactionNotification:(id)a0;
- (void)_registerForExpressTransactionNotifications:(BOOL)a0;
- (void)_registerObserverForNotificationName:(id)a0 center:(id)a1 handler:(id /* block */)a2;
- (void)accessoryDeviceDidChangeStateTo:(long long)a0;
- (void)accessoryDeviceDidReachHardTimeout;
- (void)configureWithContext:(id)a0 completion:(id /* block */)a1;
- (void)didInvalidateForRemoteAlert;
- (void)didTransitionToAttachedToWindowedAccessory:(BOOL)a0 windowedAccessoryCutoutFrameInScreen:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)handleButtonActions:(id)a0;

@end
