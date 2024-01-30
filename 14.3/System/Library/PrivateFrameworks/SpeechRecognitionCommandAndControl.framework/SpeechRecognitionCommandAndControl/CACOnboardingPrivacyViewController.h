@class OBBoldTrayButton;

@interface CACOnboardingPrivacyViewController : OBWelcomeController

@property (retain, nonatomic) OBBoldTrayButton *acceptButton;

+ (id)defaultController;

- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)isModalInPresentation;
- (BOOL)_canShowWhileLocked;
- (void)dismiss;
- (void)viewDidLoad;
- (id)_defaultController;
- (void)allowDataCollection;
- (void)disallowDataCollection;
- (void)showPrivacy;

@end
