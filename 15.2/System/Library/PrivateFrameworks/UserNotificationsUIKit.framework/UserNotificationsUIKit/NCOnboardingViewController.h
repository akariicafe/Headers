@class NSString, OBTrayButton;
@protocol NCOnboardingViewControllerDelegate;

@interface NCOnboardingViewController : OBWelcomeController {
    OBTrayButton *_nextButton;
}

@property (weak, nonatomic) id<NCOnboardingViewControllerDelegate> delegate;
@property (retain, nonatomic) NSString *nextButtonText;
@property (nonatomic) BOOL nextButtonEnabled;

- (void)viewDidLoad;
- (id)initWithTitle:(id)a0 detailText:(id)a1 contentLayout:(long long)a2;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (void)_nextButtonPressed:(id)a0;

@end
