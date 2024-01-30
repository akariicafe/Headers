@interface MenstrualCyclesAppPlugin.CycleHistoryTableViewController : UITableViewController <HKMCAnalysisProviderObserver, UITableViewDelegatePrivate> {
    void /* unknown type, empty encoding */ maxCyclesInSectionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_yearDateFormatter;
    void /* unknown type, empty encoding */ viewIsSection;
    void /* unknown type, empty encoding */ cycles;
    void /* unknown type, empty encoding */ $__lazy_storage_$_healthStore;
    void /* unknown type, empty encoding */ viewModelProviders;
    void /* unknown type, empty encoding */ sectionedCycles;
    void /* unknown type, empty encoding */ years;
    void /* unknown type, empty encoding */ selectedFilter;
    void /* unknown type, empty encoding */ calendarCache;
    void /* unknown type, empty encoding */ today;
    void /* unknown type, empty encoding */ analysisProvider;
    void /* unknown type, empty encoding */ providedHealthStore;
}

@property (nonatomic, readonly) BOOL axFilterSelected;

- (BOOL)tableView:(id)a0 shouldDrawBottomSeparatorForSection:(long long)a1;
- (void)analysisProvider:(id)a0 didUpdateAnalysis:(id)a1;
- (id)initWithStyle:(long long)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (void)pushFilterView;

@end
