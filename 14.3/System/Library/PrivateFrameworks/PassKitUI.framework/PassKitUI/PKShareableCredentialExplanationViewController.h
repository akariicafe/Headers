@class PKAddShareablePassConfiguration, NSArray, UIImage, PKShareableCredentialsMessageComposeViewController, NSMutableDictionary, NSString, PKAssertion, PKHeroCardExplainationHeaderView;
@protocol PKPaymentSetupViewControllerDelegate;

@interface PKShareableCredentialExplanationViewController : PKExplanationViewController <PKExplanationViewDelegate, PKExplanationViewControllerDelegate, PKShareableCredentialsMessageComposeViewControllerDelegate, PKPaymentSetupViewControllerDelegate>

@property (retain, nonatomic) UIImage *passThumbnailImage;
@property (retain, nonatomic) NSArray *credentials;
@property (retain, nonatomic) PKAddShareablePassConfiguration *configuration;
@property (weak, nonatomic) id<PKPaymentSetupViewControllerDelegate> setupDelegate;
@property (retain, nonatomic) PKShareableCredentialsMessageComposeViewController *messageComposeViewController;
@property (retain, nonatomic) PKHeroCardExplainationHeaderView *heroView;
@property (retain, nonatomic) PKAssertion *notificationSupressionAssertion;
@property (retain, nonatomic) PKAssertion *provisioningAssertion;
@property (retain, nonatomic) NSMutableDictionary *passToMoreItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)messageComposeViewControllerDidFinishWithResult:(BOOL)a0;
- (void)dealloc;
- (id)initWithContext:(long long)a0 setupDelegate:(id)a1 credentials:(id)a2 configuration:(id)a3;
- (void)viewControllerDidTerminateSetupFlow:(id)a0;
- (void)explanationViewDidSelectContinue:(id)a0;
- (void)viewController:(id)a0 didFinishWithPasses:(id)a1 error:(id)a2;
- (void)explanationViewControllerDidSelectCancel:(id)a0;
- (void)_invalidateAssertions;
- (void)_acquireAssertions;
- (void)_showProvisioningFlowWithCredentials:(id)a0;
- (void)_terminateSetupFlowWithPasses:(id)a0 error:(id)a1;
- (void)_finishProvisioningFlowWithAddedPasses:(id)a0 moreInfoItems:(id)a1;
- (void)_showProvisioningErrorWithNumberOfPassesFailed:(long long)a0;
- (void)_showMoreInfoViewControllerForPasses:(id)a0 withItems:(id)a1 showExpressEducationIfPresent:(BOOL)a2 completion:(id /* block */)a3;
- (void)_handleNextStep;
- (void)viewDidLoad;

@end
