@interface MenstrualCyclesAppPlugin.EditableDaySummaryViewController : UITableViewController <HKMCAnalysisProviderObserver, TPKContentControllerDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ cycleDay;
    void /* unknown type, empty encoding */ unhiddenSupplementaryDisplayTypes;
    void /* unknown type, empty encoding */ unhiddenDailySupplementaryDisplayTypes;
    void /* unknown type, empty encoding */ analysisProvider;
    void /* unknown type, empty encoding */ viewModelProvider;
    void /* unknown type, empty encoding */ analysis;
    void /* unknown type, empty encoding */ availability;
    void /* unknown type, empty encoding */ miniBuddyViewController;
    void /* unknown type, empty encoding */ lastCompletedStep;
    void /* unknown type, empty encoding */ calendarCache;
    void /* unknown type, empty encoding */ userPreferredUnit;
    void /* unknown type, empty encoding */ tipContentController;
    void /* unknown type, empty encoding */ tipContent;
    void /* unknown type, empty encoding */ temperatureFormatter;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ sections;
    void /* unknown type, empty encoding */ needsInitialReloadData;
}

- (void)contentController:(id)a0 contentDidBecomeAvailable:(id)a1 animated:(BOOL)a2;
- (void)contentController:(id)a0 didFinishWithContent:(id)a1 animated:(BOOL)a2;
- (id)contentController:(id)a0 contentView:(id)a1 iconForCustomizationID:(long long)a2;
- (void)analysisProvider:(id)a0 didUpdateAnalysis:(id)a1;
- (id)initWithStyle:(long long)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)userPreferredUnitChanged;

@end
