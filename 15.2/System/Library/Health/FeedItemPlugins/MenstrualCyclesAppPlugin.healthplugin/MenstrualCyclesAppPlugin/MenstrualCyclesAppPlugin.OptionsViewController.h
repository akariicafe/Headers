@interface MenstrualCyclesAppPlugin.OptionsViewController : UITableViewController <HKSwitchTableViewCellDelegate, HKMCAnalysisProviderObserver> {
    void /* unknown type, empty encoding */ settingsManager;
    void /* unknown type, empty encoding */ hasHeartRateDataFromAppleWatch;
    void /* unknown type, empty encoding */ selectedIndexPath;
    void /* unknown type, empty encoding */ sections;
    void /* unknown type, empty encoding */ periodAndCycleLengthRows;
    void /* unknown type, empty encoding */ periodLengthDataSource;
    void /* unknown type, empty encoding */ cycleLengthDataSource;
    void /* unknown type, empty encoding */ manualEntryItemPeriodLength;
    void /* unknown type, empty encoding */ manualEntryItemCycleLength;
    void /* unknown type, empty encoding */ analysisProvider;
    void /* unknown type, empty encoding */ availability;
    void /* unknown type, empty encoding */ analysis;
    void /* unknown type, empty encoding */ predictionStatus;
    void /* unknown type, empty encoding */ heartRateFeatureStatusManager;
    void /* unknown type, empty encoding */ subscriptions;
    void /* unknown type, empty encoding */ heartRateFeatureStatus;
    void /* unknown type, empty encoding */ anyHeartRateFromWatchQuery;
}

- (void)switchCellValueChanged:(id)a0 value:(BOOL)a1;
- (void)analysisProvider:(id)a0 didUpdateAnalysis:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end
