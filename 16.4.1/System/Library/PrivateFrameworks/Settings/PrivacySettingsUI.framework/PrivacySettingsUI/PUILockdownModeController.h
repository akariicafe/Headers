@class NSArray;

@interface PUILockdownModeController : PSListController <PUIOnboardingCellDelegate>

@property (nonatomic) BOOL lockdownModeEnabled;
@property (retain, nonatomic) NSArray *_lockdownModeOptionsSpecifiers;

- (BOOL)shouldReloadSpecifiersOnResume;
- (id)specifiers;
- (id)init;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (void)presentErrorAlert;
- (void)didTapEnableLockdownModeButton:(id)a0;
- (void)setLockdownModeGloballyEnabled:(BOOL)a0;
- (void)dataDidChange;
- (void)didTapLockdownModeButton;
- (void)didTapOnboardingCellLink:(id)a0;
- (id)isSpecifierEnabled:(id)a0;
- (id)lockdownModeOptionsSpecifiers;
- (void)openLearnMorePage;
- (void)presentOnboardingController;
- (void)presentRebootAlert:(BOOL)a0;
- (void)refreshLinkStatusInParent;
- (void)updateSpecifiersForImposedSettings;

@end
