@interface HealthExperienceUI.SummarySharingOnboardingSettingUpViewController : OBWelcomeController {
    void /* unknown type, empty encoding */ selectionFlowContext;
    void /* unknown type, empty encoding */ healthExperienceStore;
    void /* unknown type, empty encoding */ healthStore;
    void /* unknown type, empty encoding */ hasRunningGeneration;
}

- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentLayout:(long long)a3;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2 contentLayout:(long long)a3;
- (void)onCancelTapped;

@end
