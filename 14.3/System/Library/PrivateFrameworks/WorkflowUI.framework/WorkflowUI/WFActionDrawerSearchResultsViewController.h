@class NSArray, NSString, WFActionDrawerState;

@interface WFActionDrawerSearchResultsViewController : WFActionDrawerCompositeResultsViewController <UITableViewDelegate, UITableViewDataSource, WFActionDrawerStateRepresentable, WFActionDrawerStateConfigurable>

@property (retain, nonatomic) NSArray *combinedActionActivitySections;
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
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)reloadViews;
- (BOOL)moveToState:(id)a0 animated:(BOOL)a1;

@end
