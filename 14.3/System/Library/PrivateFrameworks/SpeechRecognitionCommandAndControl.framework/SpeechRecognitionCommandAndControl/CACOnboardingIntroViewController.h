@class CACOnboardingCommandsTableViewController, OBTrayButton;

@interface CACOnboardingIntroViewController : OBWelcomeController

@property (retain, nonatomic) OBTrayButton *mainButton;
@property (retain, nonatomic) OBTrayButton *linkButton;
@property (retain, nonatomic) CACOnboardingCommandsTableViewController *onboardingTVC;
@property (nonatomic) unsigned long long style;

+ (id)defaultControllerWithStyle:(unsigned long long)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)shouldInlineButtonTray;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void)dismissWelcomeController;
- (void)languageDidChange;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2 style:(unsigned long long)a3;
- (void)enableVoiceControlAndMoveToCommandsOverview;
- (void)presentLanguageSelection;
- (void)configureLanguageButton;
- (void)configureDownloadCaption;

@end
