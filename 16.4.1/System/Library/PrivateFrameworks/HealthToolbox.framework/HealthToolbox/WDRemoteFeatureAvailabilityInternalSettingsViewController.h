@class NSSet, NSDictionary, NSArray, NSUserDefaults;

@interface WDRemoteFeatureAvailabilityInternalSettingsViewController : HKTableViewController

@property (retain, nonatomic) NSSet *conditions;
@property (nonatomic) int featureAvailabilityConditionsDidUpdateNotificationToken;
@property (readonly, nonatomic) NSUserDefaults *userDefaults;
@property (retain, nonatomic) NSDictionary *userDefaultsContent;
@property (retain, nonatomic) NSArray *userDefaultsContentKeys;

- (void)_registerForNotifications;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (id)initWithConditions:(id)a0;
- (void)_unregisterForNotifications;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)_featureAvailabilityConditionsDidUpdate;
- (id)currentlocaleCountryCode;
- (id)evaluateRulesForCondition:(id)a0;
- (id)jsonStringFromDictionary:(id)a0;
- (void)reloadUserDefaultsContent;

@end
