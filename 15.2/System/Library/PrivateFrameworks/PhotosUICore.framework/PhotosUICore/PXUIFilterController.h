@class PXContentFilterState, NSString, NSArray;
@protocol PXFilterControllerDelegate;

@interface PXUIFilterController : UITableViewController <UITableViewDataSource, UITableViewDelegate, PXChangeObserver, PXFilterController> {
    NSArray *_contentFilterGroups;
}

@property (readonly, weak, nonatomic) id<PXFilterControllerDelegate> filterControllerDelegate;
@property (copy, nonatomic) PXContentFilterState *contentFilterState;
@property (nonatomic) BOOL showContentOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)numberOfSectionsInTableView:(id)a0;
- (void)_setupTableView;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)initWithDelegate:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)_contentSyndicationIsAvailable;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (id)_contentFilterGroups;
- (void)_tappedRowAtIndexPath:(id)a0;
- (long long)_adjustedContentFilterSection:(long long)a0;
- (id)initWithDelegate:(id)a0 initialContentFilterState:(id)a1;
- (void)_setupNavigationBar;
- (void).cxx_destruct;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)_getUpdatedContentFilterStateFromTappedCell:(id)a0;
- (BOOL)_selectCellWithContentFilterItemTag:(long long)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (BOOL)_isContentFilterSection:(long long)a0;
- (long long)_contentFilterGroupsCount;
- (void)_doneButtonPressed:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end
