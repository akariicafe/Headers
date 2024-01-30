@class NPSManager, HKHealthStore, HKFeatureAvailabilityInternalSettingsConfiguration, NSUserDefaults;

@interface HKFeatureAvailabilityInternalSettingsViewController : HKTableViewController

@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly, nonatomic) HKFeatureAvailabilityInternalSettingsConfiguration *configuration;
@property (readonly, nonatomic) NPSManager *syncManager;
@property (readonly, nonatomic) NSUserDefaults *userDefaults;
@property (nonatomic, getter=isDeletingSamples) BOOL deletingSamples;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (BOOL)_featureEnabled;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void).cxx_destruct;
- (id)initWithHealthStore:(id)a0 configuration:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)_offsetSectionForSection:(long long)a0;
- (id)_buttonCellForTableView:(id)a0;
- (BOOL)_disabledOverriden;
- (void)_enableFeature:(BOOL)a0;
- (void)_disableOverride:(BOOL)a0;

@end
