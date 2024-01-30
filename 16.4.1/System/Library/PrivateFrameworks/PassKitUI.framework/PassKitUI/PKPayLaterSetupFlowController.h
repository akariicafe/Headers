@class PKPayLaterFinancingOption, NSString, PKSecurityCapabilitiesController, PKPayLaterFinancingController, PKPassSnapshotter, PKPayLaterPreliminaryAssessment, PKApplyController, NSBundle, PKAccountFlowController, UIViewController, PKPaymentPass;
@protocol PKPayLaterSetupFlowControllerDelegate, PKPaymentSetupViewControllerDelegate;

@interface PKPayLaterSetupFlowController : NSObject <PKSetupFlowControllerProtocol, PKAccountFlowControllerDelegate, PKPaymentSetupViewControllerDelegate> {
    PKApplyController *_applyController;
    PKPassSnapshotter *_snapshotter;
    NSBundle *_localizedBundle;
    NSString *_preferredLanguage;
    PKPaymentPass *_payLaterPass;
    PKAccountFlowController *_accountFlowController;
    PKSecurityCapabilitiesController *_securityCapabiltiesController;
    UIViewController *_parentViewController;
    BOOL _meetsSecurityCheck;
    BOOL _didBeginAnalyticsReporter;
    unsigned long long _lastFeatureApplicationState;
    id /* block */ _nextViewControllerCompletion;
}

@property (weak, nonatomic) id<PKPayLaterSetupFlowControllerDelegate> delegate;
@property (readonly, nonatomic) PKPayLaterFinancingController *financingController;
@property (readonly, nonatomic) long long setupContext;
@property (readonly, nonatomic) long long controllerContext;
@property (readonly, copy, nonatomic) NSString *referrerIdentifier;
@property (weak, nonatomic) id<PKPaymentSetupViewControllerDelegate> setupViewControllerDelegate;
@property (retain, nonatomic) PKPayLaterFinancingOption *selectedFinancingOption;
@property (nonatomic) PKPayLaterPreliminaryAssessment *selectedPreliminaryAssessment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)defaultPayLaterSetupFlowControllerForAccount:(id)a0 controllerContext:(long long)a1 referrerIdentifier:(id)a2;
+ (id)payLaterSetupFlowControllerForAccount:(id)a0 controllerContext:(long long)a1 referrerIdentifier:(id)a2 paymentWebService:(id)a3 accountService:(id)a4 peerPaymentService:(id)a5 paymentService:(id)a6 passLibrary:(id)a7;

- (id)preferredLanguage;
- (void).cxx_destruct;
- (BOOL)hasPayLaterPass;
- (id)_genericError;
- (id)localizedBundle;
- (void)_acceptTermsIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)_callNextViewControllerCompletionBlockWithError:(id)a0;
- (void)_checkSecurityCapabiltiesWithCompletion:(id /* block */)a0;
- (BOOL)_didStartPayLaterPassProvisioning;
- (id)_firstViewControllerWithoutNavController;
- (void)_nextApplyViewControllerWithCompletion:(id /* block */)a0;
- (void)_updatePayLaterPass;
- (void)_viewControllerForState:(long long)a0 completion:(id /* block */)a1;
- (void)accountFlowController:(id)a0 requestsPresentationOfDisplayableError:(id)a1;
- (void)accountFlowController:(id)a0 requestsPresentationOfViewController:(id)a1;
- (void)endSetupFlowFromViewController:(id)a0 shouldDismiss:(BOOL)a1;
- (void)fetchPayLaterDynamicContentWithCompletion:(id /* block */)a0;
- (id)firstViewController;
- (id)initWithFinancingController:(id)a0 controllerContext:(long long)a1 selectedFinancingOption:(id)a2 selectedPreliminaryAssessment:(id)a3 referrerIdentifier:(id)a4;
- (void)nextViewControllerFromState:(long long)a0 parentViewController:(id)a1 completion:(id /* block */)a2;
- (void)nextViewControllerWithCompletion:(id /* block */)a0;
- (id)payLaterPassUniqueIdentifier;
- (void)provisionPayLaterPassWithCompletion:(id /* block */)a0;
- (void)reportAnalyticsEvent:(id)a0;
- (void)reportAnalyticsEventForPageTag:(id)a0 dictionary:(id)a1;
- (unsigned long long)selectedProductType;
- (id)snapshotForPass:(id)a0 completion:(id /* block */)a1;
- (void)termsViewControllerForTermsIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)viewControllerDidTerminateSetupFlow:(id)a0;

@end
