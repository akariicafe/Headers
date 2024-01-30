@class NSString, VTUIEnrollTrainingViewController;

@interface BFFFinishSetupAssistantOptInController : NSObject <VTUIEnrollTrainingViewControllerDelegate, BFFFinishSetupFlowControlling> {
    BFFFinishSetupAssistantOptInController *_selfReference;
    VTUIEnrollTrainingViewController *_enrollmentController;
    BOOL _willOfferVoiceTrigger;
}

@property (copy, nonatomic) id /* block */ completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)finishSetupAssistantOptInController;

- (void).cxx_destruct;
- (id)init;
- (void)skipSetup;
- (void)continueSetup;
- (void)showLearnMore;
- (id)viewControllerWithCompletion:(id /* block */)a0;
- (void)performExtendedInitializationWithCompletion:(id /* block */)a0;

@end
