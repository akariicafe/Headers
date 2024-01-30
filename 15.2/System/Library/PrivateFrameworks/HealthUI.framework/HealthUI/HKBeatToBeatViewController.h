@class NSArray, HKHealthStore, HKDisplayTypeController, HKUnitPreferenceController;

@interface HKBeatToBeatViewController : HKTableViewController

@property (retain, nonatomic) HKHealthStore *healthStore;
@property (retain, nonatomic) HKDisplayTypeController *displayTypeController;
@property (retain, nonatomic) HKUnitPreferenceController *unitController;
@property (retain, nonatomic) NSArray *bpmPoints;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)initWithHeartbeatSeriesSample:(id)a0 healthStore:(id)a1 displayTypeController:(id)a2 unitController:(id)a3;
- (id)initWithHRVSample:(id)a0 healthStore:(id)a1 displayTypeController:(id)a2 unitController:(id)a3;
- (id)_initWithHealthStore:(id)a0 displayTypeController:(id)a1 unitController:(id)a2;
- (void)_addHeartbeatSeriesSample:(id)a0;
- (id)_displayStringForInstantaneousBPM:(double)a0;
- (id)_displayStringForTime:(double)a0;

@end
