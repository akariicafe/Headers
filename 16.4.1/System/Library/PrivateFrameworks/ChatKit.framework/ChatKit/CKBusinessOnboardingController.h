@interface CKBusinessOnboardingController : OBWelcomeController

@property (copy, nonatomic) id /* block */ completionHandler;

+ (BOOL)shouldShowBusinessOnboarding;

- (id)initWithCompletionHandler:(id /* block */)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)continueButtonTapped:(id)a0;

@end
