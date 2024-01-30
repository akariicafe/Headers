@class NSArray, OBTrayButton;

@interface CACOnboardingCommandsDetailViewController : OBTextWelcomeController

@property (retain, nonatomic) NSArray *commandGroups;
@property (nonatomic) BOOL hideTrayButtons;
@property (nonatomic) BOOL skipAnalytics;
@property (readonly, nonatomic) OBTrayButton *mainButton;
@property (readonly, nonatomic) OBTrayButton *secondaryButton;
@property (retain, nonatomic) CACOnboardingCommandsDetailViewController *nextCommandGroupVC;

- (void)viewDidLoad;
- (BOOL)shouldInlineButtonTray;
- (void)dismiss;
- (BOOL)_canShowWhileLocked;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 detailText:(id)a1 commandGroups:(id)a2;

@end
