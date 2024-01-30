@class HKKeyValueDomain, HKHealthStore, HKHeartRhythmAvailability, NPSManager;

@interface WDAtrialFibrillationInternalSettingsViewController : HKTableViewController

@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly, nonatomic) HKHeartRhythmAvailability *heartRhythmAvailability;
@property (readonly, nonatomic) HKKeyValueDomain *keyValueDomain;
@property (readonly, nonatomic) NPSManager *nanoPreferenceSyncManager;
@property (nonatomic) BOOL deletingSamples;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)initWithHealthStore:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)_buttonCellForTableView:(id)a0 text:(id)a1;
- (void)_resetOnboarding;
- (void)_deleteAllSamples;
- (void)_fakeNewAnalyzedSample;
- (void)_addNewSample;

@end
