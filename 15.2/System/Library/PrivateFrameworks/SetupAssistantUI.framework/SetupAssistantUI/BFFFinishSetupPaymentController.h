@class NSString, PKPaymentSetupAssistantRegistrationViewController, NSObject;
@protocol BFFFinishSetupFlowHosting;

@interface BFFFinishSetupPaymentController : NSObject <PKPaymentSetupViewControllerDelegate, BFFFinishSetupFlowControlling> {
    NSObject<BFFFinishSetupFlowHosting> *_host;
    PKPaymentSetupAssistantRegistrationViewController *_registrationController;
}

@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)registrationViewControllerOutstandingRequirements;
+ (BOOL)hasPrimaryiCloudAccount;
+ (id)finishSetupPaymentControllerWithHost:(id)a0;

- (void).cxx_destruct;
- (void)_completeWithResult:(unsigned long long)a0;
- (id)initWithHost:(id)a0;
- (void)viewControllerDidTerminateSetupFlow:(id)a0;
- (BOOL)controllerNeedsToRun;
- (void)_userDidTapCancelButton:(id)a0;
- (id)viewControllerWithCompletion:(id /* block */)a0;
- (id)prerequisiteFlowIdentifier;
- (void)performExtendedInitializationWithCompletion:(id /* block */)a0;
- (BOOL)canCompleteExtendedInitializationQuickly;

@end
