@class PKAddShareablePassConfiguration, NSArray, UIImage, PKShareableCredentialsMessageComposeViewController, NSMutableDictionary, NSString, PKSecureElement, NSObject, LAContext, PKSharingPushProvisioningInvitation, PKAssertion, PKPaymentService;
@protocol OS_dispatch_source, PKPaymentSetupViewControllerDelegate;

@interface PKShareableCredentialExplanationViewController : PKPassShareRedemptionViewController <PKExplanationViewDelegate, PKExplanationViewControllerDelegate, PKShareableCredentialsMessageComposeViewControllerDelegate, PKPaymentSetupViewControllerDelegate, PKPaymentServiceDelegate, NFRemoteAdminEventListener> {
    long long _context;
    BOOL _isUnifiedAccessPass;
    NSObject<OS_dispatch_source> *_lostModeTimeout;
    PKSecureElement *_secureElement;
    NSString *_provisioningTemplateIdentifier;
    PKPaymentService *_paymentService;
    LAContext *_localAuthenticationContext;
}

@property (retain, nonatomic) UIImage *passThumbnailImage;
@property (retain, nonatomic) NSArray *credentials;
@property (retain, nonatomic) PKAddShareablePassConfiguration *configuration;
@property (weak, nonatomic) id<PKPaymentSetupViewControllerDelegate> setupDelegate;
@property (retain, nonatomic) PKShareableCredentialsMessageComposeViewController *messageComposeViewController;
@property (retain, nonatomic) PKAssertion *notificationSupressionAssertion;
@property (retain, nonatomic) PKAssertion *provisioningAssertion;
@property (retain, nonatomic) NSMutableDictionary *passToMoreItems;
@property (nonatomic) BOOL isRunningInForeground;
@property (retain, nonatomic) PKSharingPushProvisioningInvitation *invitation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_invalidateAssertions;
- (void)cancelButtonPressed;
- (void)dealloc;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)appletStateChange:(id)a0;
- (void)_acquireAssertions;
- (void)_confirmSecurityCapabilities;
- (void)_confirmUserIsNotInLostMode;
- (void)_finishProvisioningFlowWithAddedPasses:(id)a0 moreInfoItems:(id)a1;
- (void)_handleProvisioningFailureWithError:(id)a0;
- (void)_loadPassThumbnail;
- (void)_provisionCredentials:(id)a0;
- (BOOL)_shouldRelinquishShareInvitationForError:(id)a0;
- (void)_showExitingLostModeUI;
- (void)_showMoreInfoViewControllerForPasses:(id)a0 withItems:(id)a1 showExpressEducationIfPresent:(BOOL)a2 completion:(id /* block */)a3;
- (BOOL)_showProvisioningErrorWithNumberOfPassesFailed:(long long)a0 error:(id)a1;
- (void)_startProvisioning;
- (void)_terminateSetupFlowWithPasses:(id)a0 error:(id)a1;
- (void)activationCodeDidChangeToCode:(id)a0;
- (void)continueButtonPressed;
- (id)initWithContext:(long long)a0 setupDelegate:(id)a1 credentials:(id)a2 configuration:(id)a3;
- (void)messageComposeViewControllerDidFinishWithResult:(BOOL)a0;
- (void)showLoadingUI;
- (void)showStartingUI;
- (void)viewController:(id)a0 didFinishWithPasses:(id)a1 error:(id)a2;
- (void)viewControllerDidTerminateSetupFlow:(id)a0;

@end
