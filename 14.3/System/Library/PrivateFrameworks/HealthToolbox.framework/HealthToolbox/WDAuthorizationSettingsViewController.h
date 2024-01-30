@class WDProfile;

@interface WDAuthorizationSettingsViewController : HKAuthorizationSettingsViewController

@property (retain, nonatomic) WDProfile *profile;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)_applicationWillEnterForeground;
- (id)sectionsForAuthController:(id)a0;
- (id)initWithProfile:(id)a0 style:(long long)a1;
- (id)specialCellWithIdentifier:(id)a0 textLabelText:(id)a1;

@end
