@class UIFont, NSString, HKNavigationController, NSDate, NSSet, HKDisplayType, HKTimeScopeControl, WDProfile, HKInteractiveChartViewController, NSMutableArray, HKDisplayCategory, _UINavigationControllerPalette;

@interface WDDisplayTypeDetailViewController : HKTableViewController <UITableViewDataSource, UITableViewDelegate, HKInteractiveChartViewObserver, WDSourceOrderObserver, WDUserActivityResponder> {
    HKDisplayType *_displayType;
    HKDisplayCategory *_displayCategory;
    HKNavigationController *_monthNavController;
    NSDate *_selectedDate;
    _UINavigationControllerPalette *_palette;
    HKTimeScopeControl *_timeSpanControl;
    NSSet *_availableUnits;
    BOOL _inLandscapeMode;
}

@property (retain, nonatomic) UIFont *bodyFont;
@property (readonly, nonatomic) HKInteractiveChartViewController *interactiveChartViewController;
@property (retain, nonatomic) WDProfile *profile;
@property (retain, nonatomic) NSMutableArray *sections;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_contentSizeCategoryDidChange:(id)a0;
- (id)initWithStyle:(long long)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)applyChangeActivity:(id)a0;
- (id)applyTransitionActivity:(id)a0;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (void)_localeDidChange:(id)a0;
- (void)_setupObservers;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)_unitPreferencesDidUpdate:(id)a0;
- (void)_updateActivityForViewDidAppear;
- (void)_addActivityForAction:(long long)a0 newResponder:(id)a1;
- (void)_displayTypeStringsChanged:(id)a0;
- (BOOL)_canSelectUnitsRow;
- (id)_selectedUnitCellText;
- (void)_timeFrameForChartsChanged:(id)a0;
- (id)_showAddDataVC:(id)a0;
- (void)calculateSections;
- (void)addSectionWithItems:(id)a0;
- (void)addSectionWithItem:(id)a0;
- (BOOL)_shouldShowUnitsRow;
- (void)_detachPaletteIfNecessary;
- (void)_configureCell:(id)a0 forTableView:(id)a1;
- (id)_showAllDataVC:(id)a0;
- (void)_changeTimeScope:(long long)a0;
- (void)sourceOrderUpdatedWithOrder:(id)a0 dataType:(id)a1;
- (id)initWithDisplayType:(id)a0 displayCategory:(id)a1 profile:(id)a2 displayDate:(id)a3;
- (void)_attachPaletteIfNecessary;

@end
