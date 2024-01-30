@interface HealthMobilityUI.WalkingSteadinessOnboardingNotificationsViewController : OBWelcomeController {
    void /* unknown type, empty encoding */ $__lazy_storage_$_iconWithShadow;
    void /* unknown type, empty encoding */ stage;
    void /* unknown type, empty encoding */ delegate;
}

- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentLayout:(long long)a3;
- (id)initWithTitle:(id)a0 detailText:(id)a1 symbolName:(id)a2 contentLayout:(long long)a3;
- (void)cancelButtonTapped;
- (void)primaryFooterButtonTapped;
- (void)secondaryFooterButtonTapped;

@end
