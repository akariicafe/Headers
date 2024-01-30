@class RespiratoryHealthHeroView, HKRPOxygenSaturationSettings, HKRPOxygenSaturationOnboardingManager;
@protocol BPSSetupMiniFlowControllerDelegate;

@interface HKRPOnboardingPairViewController : BPSWelcomeOptinViewController <BPSMiniFlowStepController> {
    RespiratoryHealthHeroView *_heroView;
}

@property (readonly, nonatomic) HKRPOxygenSaturationSettings *settings;
@property (readonly, nonatomic) HKRPOxygenSaturationOnboardingManager *onboardingManager;
@property (weak, nonatomic) id<BPSSetupMiniFlowControllerDelegate> miniFlowDelegate;

- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)alternateButtonTitle;
- (void).cxx_destruct;
- (id)_localizedStringForKey:(id)a0;
- (id)detailString;
- (id)titleString;
- (id)captionText;
- (id)suggestedButtonTitle;
- (void)suggestedButtonPressed:(id)a0;
- (void)alternateButtonPressed:(id)a0;
- (void)_makeHeroView;
- (void)_onboardWithCompletion:(id /* block */)a0;
- (void)_presentOnboardingError:(id)a0 completion:(id /* block */)a1;
- (id)initWithSettings:(id)a0 onboardingManager:(id)a1;

@end
