@class ASNavigationController, NSString, ASCAuthorizationPresentationContext, SFWirelessSettingsController, NSObject;
@protocol OS_os_activity, ASAuthorizationViewControllerDelegate;

@interface ASAuthorizationViewController : UIViewController <ASCredentialRequestPaneViewControllerDelegate, ASPasswordAuthenticationPaneViewControllerDelegate> {
    ASCAuthorizationPresentationContext *_presentationContext;
    ASNavigationController *_navigationController;
    NSObject<OS_os_activity> *_authorizationActivity;
    SFWirelessSettingsController *_wirelessSettingsController;
}

@property (weak, nonatomic) id<ASAuthorizationViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)modalPresentationStyle;
- (id)navigationController;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)_cancelBarButtonItem;
- (void)presentPINEntryInterface;
- (void)updateInterfaceWithLoginChoices:(id)a0;
- (void)_cancelButtonSelected:(id)a0;
- (id)_signInBarButtonItem;
- (id)_cableClientViewControllerWithLoginChoice:(id)a0;
- (void)_enableBluetoothAndShowCABLEClientViewControllerWithLoginChoice:(id)a0;
- (void)_enableBluetoothAndShowCABLEConnectingViewController;
- (id)_initialViewControllerForPresentationContext:(id)a0;
- (id)_initialViewControllerForPresentationContext:(id)a0 expandingOtherLoginChoices:(BOOL)a1;
- (void)_presentManualPasswordEntryInterface;
- (void)_presentPINEntryInterface;
- (void)_pushActivateSecurityKeyAgainViewController;
- (void)_pushCABLEAuthenticatingViewController;
- (void)_pushCABLEAuthenticatorCredentialPickerViewControllerWithPresentationContext:(id)a0;
- (void)_pushCABLEClientViewControllerForCABLELoginChoice:(id)a0;
- (void)_pushCABLEConnectingViewController;
- (void)_pushSecurityKeyViewController;
- (void)_pushSecurityKeyViewControllerWithOverrideSubtitle:(id)a0 overrideTitle:(id)a1;
- (id)_securityKeyRequestViewController;
- (id)_securityKeyRequestViewControllerWithOverrideSubtitle:(id)a0 overrideTitle:(id)a1;
- (id)_setUpContainerViewControllerWithCredentialRequestViewController:(id)a0;
- (id)_setUpInitialViewController;
- (BOOL)_shouldPresentCABLEAsInitialViewControllerForPresentationContext:(id)a0;
- (void)_showCABLEAuthenticatorError:(id)a0;
- (void)_showEnableBluetoothViewControllerForCABLEAuthenticator;
- (void)_showEnableBluetoothViewControllerForCABLEClientWithLoginChoice:(id)a0;
- (void)_startCABLEAuthenticator;
- (void)_startCABLEAuthenticatorOnInitialPresentationIfNeeded;
- (void)_startCABLEClientForSingleLoginChoiceIfNeeded;
- (void)_startCABLEClientWithLoginChoice:(id)a0;
- (void)_updateOrPushPlatformKeyViewControllerWithSubtitle:(id)a0;
- (void)cableClientWillAuthenticate;
- (void)cableClientWillConnect;
- (id)initWithPresentationContext:(id)a0 activity:(id)a1;
- (void)passwordAuthenticationViewController:(id)a0 completedWithManuallyEnteredPasswordCredential:(id)a1;
- (void)passwordAuthenticationViewController:(id)a0 completedWithUserEnteredPIN:(id)a1;
- (void)pushOrUpdateBasicPaneViewControllerWithError:(long long)a0;
- (void)requestPaneViewController:(id)a0 didRequestCredentialForLoginChoice:(id)a1 authenticatedContext:(id)a2 completionHandler:(id /* block */)a3;
- (void)requestPaneViewController:(id)a0 dismissWithCredential:(id)a1 error:(id)a2;
- (void)requestPaneViewControllerPresentExpandedLoginChoiceInterface:(id)a0;
- (void)requestPaneViewControllerPresentManualPasswordEntryInterface:(id)a0;
- (void)requestPaneViewControllerRequiresPINEntryInterface:(id)a0;
- (void)requestPaneViewControllerStartCABLEAuthentication:(id)a0;

@end
