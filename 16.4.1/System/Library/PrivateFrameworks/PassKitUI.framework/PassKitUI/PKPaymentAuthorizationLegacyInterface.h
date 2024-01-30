@class NSString, PKPaymentAuthorizationServiceNavigationController, PKPaymentAuthorizationServiceCompactNavigationContainerController, PKPaymentAuthorizationContext, PKPaymentAuthorizationInterfaceConfiguration;
@protocol PKPaymentAuthorizationServiceProtocol, BSInvalidatable;

@interface PKPaymentAuthorizationLegacyInterface : NSObject <PKCompactNavigationContainerControllerDelegate, PKPaymentAuthorizationServiceViewControllerDelegate, SBSHardwareButtonEventConsuming, PKPaymentAuthorizationInterface> {
    PKPaymentAuthorizationContext *_context;
    PKPaymentAuthorizationInterfaceConfiguration *_configuration;
    PKPaymentAuthorizationServiceNavigationController *_navigationController;
    id<BSInvalidatable> _lockButtonObserver;
}

@property (retain, nonatomic) PKPaymentAuthorizationServiceCompactNavigationContainerController *primaryViewController;
@property (nonatomic) long long coachingState;
@property (readonly, nonatomic) id<PKPaymentAuthorizationServiceProtocol> serviceDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)invalidate;
- (void)consumeSinglePressUpForButtonKind:(long long)a0;
- (void).cxx_destruct;
- (void)consumeDoublePressUpForButtonKind:(long long)a0;
- (void)_stopObservingLockButtonPresses;
- (void)_startObservingLockButtonPresses;
- (void)_updatePearlViews;
- (void)_updatePhysicalButtonViews;
- (void)authorizationViewControllerDidChangeCoachingState:(id)a0;
- (void)authorizationViewControllerDidChangePhysicalButtonState:(id)a0;
- (void)authorizationViewControllerDidRequestPaymentSetup;
- (void)compactNavigationContainerControllerReceivedExternalTap:(id)a0;
- (id)initWithContext:(id)a0 configuration:(id)a1 error:(id *)a2;
- (BOOL)shouldBlockHardwareCancels;
- (void)willAppear;

@end
