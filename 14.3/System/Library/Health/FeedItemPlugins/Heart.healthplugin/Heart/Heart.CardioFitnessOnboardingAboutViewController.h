@interface Heart.CardioFitnessOnboardingAboutViewController : OBWelcomeController {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ levelsData;
    void /* unknown type, empty encoding */ aboutContentView;
    void /* unknown type, empty encoding */ cancellationToken;
    void /* unknown type, empty encoding */ textSupport;
}

- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 contentLayout:(long long)a3;
- (void)cancelButtonTapped;
- (void)viewDidLoad;
- (void)primaryFooterButtonTapped;

@end
