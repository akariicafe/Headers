@interface HealthExperienceUI.OnboardingViewControllerWithNextButton : OBWelcomeController {
    void /* unknown type, empty encoding */ $__lazy_storage_$_nextButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_doneButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cancelButton;
}

- (void).cxx_destruct;
- (void)cancelButtonTapped:(id)a0;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentLayout:(long long)a3;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2 contentLayout:(long long)a3;
- (void)nextButtonTapped:(id)a0;

@end
