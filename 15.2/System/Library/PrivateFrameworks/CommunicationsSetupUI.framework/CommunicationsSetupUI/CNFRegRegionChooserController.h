@class UIViewController, NSArray, NSString, PSRootController, PSSpecifier, UISearchController;
@protocol PSController, CNFRegRegionChooserDelegate;

@interface CNFRegRegionChooserController : UITableViewController <UISearchResultsUpdating, UISearchControllerDelegate, UISearchBarDelegate, CNFRegRegionChooserDelegate, PSController> {
    UIViewController<PSController> *_parentController;
    PSRootController *_rootController;
    PSSpecifier *_specifier;
}

@property (retain, nonatomic) NSArray *regionList;
@property (retain, nonatomic) NSArray *filteredRegionList;
@property (retain, nonatomic) NSString *selectedRegionID;
@property (retain, nonatomic) UISearchController *searchController;
@property (nonatomic) id<CNFRegRegionChooserDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleURL:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)willResignActive;
- (void)willPresentSearchController:(id)a0;
- (void)didLock;
- (BOOL)canBeShownFromSuspendedState;
- (id)readPreferenceValue:(id)a0;
- (void)setPreferenceValue:(id)a0 specifier:(id)a1;
- (void)statusBarWillAnimateByHeight:(double)a0;
- (void)viewDidLoad;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (id)rootController;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)specifier;
- (void)didWake;
- (void)setSpecifier:(id)a0;
- (void)updateSearchResultsForSearchController:(id)a0;
- (void)willBecomeActive;
- (void)loadView;
- (void)didPresentSearchController:(id)a0;
- (void)didUnlock;
- (id)initWithStyle:(long long)a0;
- (void)setParentController:(id)a0;
- (void)setRootController:(id)a0;
- (void)viewDidUnload;
- (void).cxx_destruct;
- (void)willUnlock;
- (void)suspend;
- (void)dealloc;
- (id)parentController;
- (void)showController:(id)a0;
- (void)showController:(id)a0 animate:(BOOL)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithRegionList:(id)a0 selectedRegionID:(id)a1;
- (id)drillDownControllerList;
- (void)regionChooser:(id)a0 selectedRegionID:(id)a1;
- (void)_drillDownControllersWithArray:(id)a0;
- (void)_selectRegionID:(id)a0;
- (void)_selectRegionList:(id)a0;
- (void)_hideTableViewCells;
- (void)_showTableViewCells;

@end
