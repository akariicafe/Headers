@class BRKSettings;

@interface BRKDataCollectionOnboardingViewController : OBTextWelcomeController {
    BRKSettings *_settings;
}

+ (BOOL)shouldPresentOnboarding;
+ (void)presentInViewController:(id)a0;

- (void)viewDidLoad;
- (void)openSettings;
- (void).cxx_destruct;
- (void)tappedLearnMore;
- (void)tappedDisable;
- (void)tappedEnable;

@end
