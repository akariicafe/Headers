@class PXSettingsConfigurationsSource, UITextField, UIAlertAction, PXSettings;

@interface PXSettingsConfigurationsViewController : UITableViewController <PXSettingsConfigurationsSourceObserver>

@property (readonly, nonatomic) PXSettingsConfigurationsSource *source;
@property (nonatomic) BOOL areAllActionsAvailable;
@property (retain, nonatomic) UITextField *promptTextField;
@property (retain, nonatomic) UIAlertAction *promptConfirmAction;
@property (readonly, nonatomic) PXSettings *settings;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)initWithSettings:(id)a0;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 accessoryButtonTappedForRowWithIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)settingsConfigurationSource:(id)a0 performChanges:(id /* block */)a1;
- (void)settingsConfigurationSource:(id)a0 didChange:(id)a1;
- (void)_handleDone:(id)a0;
- (void)_updateAvailableActions;
- (void)_promptNameWithAlertTitle:(id)a0 message:(id)a1 proposedNamed:(id)a2 confirmationButtonTitle:(id)a3 completionHandler:(id /* block */)a4;
- (void)_promptedNameDidChange:(id)a0;
- (id)_titleForSettings:(id)a0;
- (id)_untitledName;
- (void)_shareConfigurations:(id)a0;

@end
