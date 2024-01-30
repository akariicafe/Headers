@class NSString, UILabel, UIView;

@interface NCDigestOnboardingIntroductionViewController : NCOnboardingViewController {
    NSString *_deferButtonText;
    UIView *_explainer1Container;
    UILabel *_explainer1Title;
    UILabel *_explainer1Label;
    UIView *_explainer2Container;
    UILabel *_explainer2Title;
    UILabel *_explainer2Label;
    UILabel *_clockLabel;
}

+ (id)introductionViewControllerWithDeferButtonText:(id)a0;

- (id)customContentView;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)_deferButtonPressed:(id)a0;
- (id)initWithDeferButtonText:(id)a0;
- (id)secondaryCustomContentView;

@end
