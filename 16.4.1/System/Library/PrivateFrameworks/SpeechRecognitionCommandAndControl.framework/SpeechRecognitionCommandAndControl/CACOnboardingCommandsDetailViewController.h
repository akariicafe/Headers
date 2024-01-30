@class NSArray, OBTrayButton;

@interface CACOnboardingCommandsDetailViewController : OBTextWelcomeController

@property (retain, nonatomic) NSArray *commandGroups;
@property (nonatomic) BOOL hideTrayButtons;
@property (nonatomic) BOOL skipAnalytics;
@property (readonly, nonatomic) OBTrayButton *mainButton;
@property (readonly, nonatomic) OBTrayButton *secondaryButton;
@property (retain, nonatomic) CACOnboardingCommandsDetailViewController *nextCommandGroupVC;

- (void)dismiss;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)shouldInlineButtonTray;
- (id)initWithTitle:(id)a0 detailText:(id)a1 commandGroups:(id)a2;

@end
