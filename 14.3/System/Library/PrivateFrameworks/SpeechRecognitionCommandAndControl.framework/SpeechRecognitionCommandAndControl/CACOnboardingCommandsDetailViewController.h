@class NSArray, OBTrayButton;

@interface CACOnboardingCommandsDetailViewController : OBTextWelcomeController

@property (retain, nonatomic) NSArray *commandGroups;
@property (nonatomic) BOOL hideTrayButtons;
@property (nonatomic) BOOL skipAnalytics;
@property (readonly, nonatomic) OBTrayButton *mainButton;
@property (readonly, nonatomic) OBTrayButton *secondaryButton;
@property (retain, nonatomic) CACOnboardingCommandsDetailViewController *nextCommandGroupVC;

- (void).cxx_destruct;
- (BOOL)shouldInlineButtonTray;
- (BOOL)_canShowWhileLocked;
- (void)dismiss;
- (void)viewDidLoad;
- (BOOL)_shouldShowAnalytics;
- (void)showPrivacyIfPossible;
- (id)initWithTitle:(id)a0 detailText:(id)a1 commandGroups:(id)a2;
- (BOOL)_isDataCollectionAvailable;

@end
