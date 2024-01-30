@interface SeymourUI.NotificationSettingsViewController : UIViewController <UITableViewDataSource> {
    void /* unknown type, empty encoding */ accountProvider;
    void /* unknown type, empty encoding */ browsingStringBuilder;
    void /* unknown type, empty encoding */ contentAvailabilityClient;
    void /* unknown type, empty encoding */ eventHub;
    void /* unknown type, empty encoding */ fitnessModeObserver;
    void /* unknown type, empty encoding */ networkEvaluator;
    void /* unknown type, empty encoding */ notificationSettingsProvider;
    void /* unknown type, empty encoding */ storefrontLocalizer;
    void /* unknown type, empty encoding */ subscriptionToken;
    void /* unknown type, empty encoding */ syncManager;
    void /* unknown type, empty encoding */ tableView;
    void /* unknown type, empty encoding */ platform;
    void /* unknown type, empty encoding */ contentUnavailableView;
    void /* unknown type, empty encoding */ loadingView;
    void /* unknown type, empty encoding */ spinnerView;
    void /* unknown type, empty encoding */ fitnessPlusSettingsResult;
    void /* unknown type, empty encoding */ notifyToken;
    void /* unknown type, empty encoding */ _fitnessPlusNotificationSettingsEnabled;
}

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)updateSettings;
- (void)switchTappedWithCellSwitch:(id)a0;

@end
