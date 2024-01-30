@interface MenstrualCyclesAppPlugin.MenstrualCyclesOnboardingCycleTimelineViewController : OBWelcomeController {
    void /* unknown type, empty encoding */ userInfo;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ currentStep;
    void /* unknown type, empty encoding */ needsAppearanceAnimation;
    void /* unknown type, empty encoding */ animatingStep;
    void /* unknown type, empty encoding */ infoViews;
    void /* unknown type, empty encoding */ infoViewBottomConstraints;
    void /* unknown type, empty encoding */ stepLabel;
    void /* unknown type, empty encoding */ numberFormatter;
    void /* unknown type, empty encoding */ cycleTimelineDataProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cycleTimelineViewController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_boldButton;
}

- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentLayout:(long long)a3;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2 contentLayout:(long long)a3;
- (void)boldButtonTapped:(id)a0;

@end
