@class BRKSettings;

@interface BRKDataCollectionOnboardingViewController : OBTextWelcomeController {
    BRKSettings *_settings;
}

+ (BOOL)shouldPresentOnboarding;
+ (void)presentInViewController:(id)a0;

- (void).cxx_destruct;
- (void)openSettings;
- (void)viewDidLoad;
- (void)tappedDisable;
- (void)tappedLearnMore;
- (void)tappedEnable;

@end
