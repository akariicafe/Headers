@class NSString, WFActionDrawerState;

@interface WFActionDrawerAppsDetailViewController : WFActionDrawerCompositeResultsViewController <UITableViewDataSource, UITableViewDelegate, WFActionDrawerStateRepresentable, WFActionDrawerStateConfigurable>

@property (readonly, nonatomic) NSString *bundleIdentifier;
@property (nonatomic) BOOL loading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) WFActionDrawerState *state;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)loadView;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)reloadViews;
- (BOOL)moveToState:(id)a0 animated:(BOOL)a1;
- (id)initWithCoordinator:(id)a0 bundleIdentifier:(id)a1;
- (unsigned long long)detailSectionForSection:(long long)a0;
- (long long)detailSectionIndexForIndexPath:(long long)a0;

@end
