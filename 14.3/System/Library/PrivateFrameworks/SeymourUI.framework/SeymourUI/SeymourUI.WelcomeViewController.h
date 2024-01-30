@interface SeymourUI.WelcomeViewController : SMUOBWelcomeController {
    void /* unknown type, empty encoding */ privacyPreferenceClient;
    void /* unknown type, empty encoding */ storefrontLocalizer;
    void /* unknown type, empty encoding */ version;
    void /* unknown type, empty encoding */ dismissHandler;
}

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentLayout:(long long)a3;
- (void)viewDidLoad;
- (void)didTapContinueButton;

@end
