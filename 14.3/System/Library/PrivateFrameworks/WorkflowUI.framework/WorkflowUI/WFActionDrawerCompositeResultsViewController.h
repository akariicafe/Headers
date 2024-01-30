@class UITableView, NSArray, WFActionDrawerResults, NSString, WFActionDrawerCoordinator;

@interface WFActionDrawerCompositeResultsViewController : UIViewController <WFActionDrawerResultsControlling>

@property (readonly, weak, nonatomic) WFActionDrawerCoordinator *coordinator;
@property (readonly, nonatomic) WFActionDrawerResults *results;
@property (readonly, nonatomic) NSArray *suggestionSections;
@property (readonly, nonatomic) NSArray *actionSections;
@property (readonly, nonatomic) NSArray *appSections;
@property (readonly, nonatomic) NSArray *userActivitySections;
@property (retain, nonatomic) UITableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (id)initWithCoordinator:(id)a0;
- (void)scrollViewWillEndDragging:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)a2;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)reloadViews;
- (void)setResults:(id)a0 animated:(BOOL)a1;
- (id)categorizeResults:(id)a0;
- (id)convertDonationsToActionsForSections:(id)a0;

@end
