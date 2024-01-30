@protocol WCOnboardingObserver;

@interface WCOnboardingViewController_iOS : OBNavigationController

@property (weak, nonatomic) id<WCOnboardingObserver> onboardingObserver;

- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_tryItOut;
- (void)_turnOn;
- (void)_cancelOnboarding;

@end
