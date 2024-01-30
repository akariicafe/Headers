@class NSArray, HKHealthStore, HKKeyValueDomain;

@interface WDAtrialFibrillationInternalSettingsViewController : HKTableViewController

@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly, nonatomic) HKKeyValueDomain *keyValueDomain;
@property (nonatomic) BOOL deletingSamples;
@property (retain, nonatomic) NSArray *sections;

- (id)initWithHealthStore:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForFooterInSection:(long long)a1;
- (void)_addNewSample;
- (id)_buttonCellForTableView:(id)a0 text:(id)a1;
- (void)_deleteAllNotifications;
- (void)_deleteAllNotificationsAndTachograms;
- (void)_fakeNewAnalyzedSample;
- (id)_featureAvailabilityStatusString;
- (id)_featureAvailabilityStringForFeatureName:(id)a0 onboardedCountryCodeSupportedState:(id)a1;
- (void)_resetOnboarding;
- (void)_showFeatureStateViewControllerForFeatureIdentifier:(id)a0;
- (id)makeFeatureStateViewControllerForFeatureIdentifier:(id)a0;

@end
