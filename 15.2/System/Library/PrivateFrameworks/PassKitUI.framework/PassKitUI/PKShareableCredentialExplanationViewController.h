@class PKAddShareablePassConfiguration, NSArray, UIImage, PKShareableCredentialsMessageComposeViewController, NSMutableDictionary, NSString, PKSecureElement, NSObject, LAContext, PKAssertion, PKHeroCardExplainationHeaderView;
@protocol OS_dispatch_source, PKPaymentSetupViewControllerDelegate;

@interface PKShareableCredentialExplanationViewController : PKExplanationViewController <PKExplanationViewDelegate, PKExplanationViewControllerDelegate, PKShareableCredentialsMessageComposeViewControllerDelegate, PKPaymentSetupViewControllerDelegate, PKPaymentServiceDelegate, NFRemoteAdminEventListener> {
    BOOL _isUnifiedAccessPass;
    NSObject<OS_dispatch_source> *_lostModeTimeout;
    PKSecureElement *_secureElement;
    LAContext *_localAuthenticationContext;
}

@property (retain, nonatomic) UIImage *passThumbnailImage;
@property (retain, nonatomic) NSArray *credentials;
@property (retain, nonatomic) PKAddShareablePassConfiguration *configuration;
@property (weak, nonatomic) id<PKPaymentSetupViewControllerDelegate> setupDelegate;
@property (retain, nonatomic) PKShareableCredentialsMessageComposeViewController *messageComposeViewController;
@property (retain, nonatomic) PKHeroCardExplainationHeaderView *heroView;
@property (retain, nonatomic) PKAssertion *notificationSupressionAssertion;
@property (retain, nonatomic) PKAssertion *provisioningAssertion;
@property (retain, nonatomic) NSMutableDictionary *passToMoreItems;
@property (nonatomic) BOOL isRunningInForeground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)appletStateChange:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewControllerDidTerminateSetupFlow:(id)a0;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)explanationViewControllerDidSelectCancel:(id)a0;
- (void)viewController:(id)a0 didFinishWithPasses:(id)a1 error:(id)a2;
- (void)messageComposeViewControllerDidFinishWithResult:(BOOL)a0;
- (id)initWithContext:(long long)a0 setupDelegate:(id)a1 credentials:(id)a2 configuration:(id)a3;
- (void)_invalidateAssertions;
- (void)_showAddUI;
- (void)_confirmHSA2Enabled;
- (void)_confirmUserIsNotInLostMode;
- (void)_showLoadingUI;
- (void)_startProvisioning;
- (void)_showExitingLostModeUI;
- (void)_showProvisioningErrorWithNumberOfPassesFailed:(long long)a0;
- (void)_terminateSetupFlowWithPasses:(id)a0 error:(id)a1;
- (void)_provisionCredentials:(id)a0;
- (void)_acquireAssertions;
- (void)_finishProvisioningFlowWithAddedPasses:(id)a0 moreInfoItems:(id)a1;
- (void)_showMoreInfoViewControllerForPasses:(id)a0 withItems:(id)a1 showExpressEducationIfPresent:(BOOL)a2 completion:(id /* block */)a3;

@end
