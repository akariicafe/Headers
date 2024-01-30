@class HKSource, HKHealthStore, HKClinicalSourceAuthorizationController, HKSourceAuthorizationController, UIViewController;

@interface HKSourceAuthorizationFamilyViewController : HKTableViewController

@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly, copy, nonatomic) HKSource *source;
@property (retain, nonatomic) HKClinicalSourceAuthorizationController *clinicalAuthorizationController;
@property (retain, nonatomic) HKSourceAuthorizationController *healthDataAuthorizationController;
@property (retain, nonatomic) UIViewController *clinicalAuthorizationSettingsViewController;
@property (retain, nonatomic) UIViewController *healthDataAuthorizationSettingsViewController;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)initWithStyle:(long long)a0;
- (id)init;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)viewWillAppear:(BOOL)a0;
- (id)_createFamilyCell;
- (void)_reloadAuthorizationSettings;
- (id)_valueStringForAnyCategoryEnabled:(BOOL)a0;
- (id)initWithHealthStore:(id)a0 source:(id)a1;

@end
