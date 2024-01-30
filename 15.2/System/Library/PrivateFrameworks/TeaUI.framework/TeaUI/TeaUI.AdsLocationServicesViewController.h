@interface TeaUI.AdsLocationServicesViewController : OBWelcomeController {
    void /* unknown type, empty encoding */ iconView;
    void /* unknown type, empty encoding */ continueCallback;
    void /* unknown type, empty encoding */ manageCallback;
    void /* unknown type, empty encoding */ onboardingFlowDelegate;
}

- (void)didTapContinue;
- (void)didTapManage;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentLayout:(long long)a3;

@end
