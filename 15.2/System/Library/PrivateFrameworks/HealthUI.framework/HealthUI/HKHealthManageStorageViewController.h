@class UIProgressHUD, HKHealthStore, HKCloudSyncControl;

@interface HKHealthManageStorageViewController : PSListController {
    long long _status;
    UIProgressHUD *_spinnerView;
    HKCloudSyncControl *_cloudSyncControl;
}

@property (readonly, nonatomic) HKHealthStore *healthStore;

- (id)specifiers;
- (void)hideSpinner;
- (void)showSpinnerMessage:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_loadCloudSyncStorageStatus;
- (void)confirmDisable:(id)a0;
- (void)_disableAndDelete:(id)a0;

@end
