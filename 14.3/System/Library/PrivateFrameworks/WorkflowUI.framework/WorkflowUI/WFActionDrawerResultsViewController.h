@class UITableView, NSString, WFActionDrawerResults, UILabel, WFActionDrawerState, WFActionDrawerCoordinator;

@interface WFActionDrawerResultsViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, WFActionDrawerStateRepresentable, WFActionDrawerStateConfigurable, WFActionDrawerResultsControlling>

@property (weak, nonatomic) UITableView *tableView;
@property (weak, nonatomic) UILabel *emptyLabel;
@property (readonly, weak, nonatomic) WFActionDrawerCoordinator *coordinator;
@property (readonly, nonatomic) WFActionDrawerResults *results;
@property (copy, nonatomic) NSString *emptyText;
@property (nonatomic) BOOL scrollsToTop;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) WFActionDrawerState *state;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)loadView;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)scrollToTop;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (BOOL)moveToState:(id)a0 animated:(BOOL)a1;
- (void)setResults:(id)a0 animated:(BOOL)a1;
- (id)initWithTitle:(id)a0 coordinator:(id)a1;
- (void)updateEmptyLabelVisibility;

@end
