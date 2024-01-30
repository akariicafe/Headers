@class UIProgressHUD, HKHealthStore, HKCloudSyncControl;

@interface HKHealthManageStorageViewController : PSListController {
    long long _status;
    UIProgressHUD *_spinnerView;
    HKCloudSyncControl *_cloudSyncControl;
}

@property (readonly, nonatomic) HKHealthStore *healthStore;

- (id)init;
- (void).cxx_destruct;
- (id)specifiers;
- (void)viewWillAppear:(BOOL)a0;
- (void)hideSpinner;
- (void)showSpinnerMessage:(id)a0;
- (void)_loadCloudSyncStorageStatus;
- (void)confirmDisable:(id)a0;
- (void)_disableAndDelete:(id)a0;

@end
