@class NSString, PXContentFilterState, NSArray;
@protocol PXContentFilterControllerDelegate;

@interface PXUIContentFilterController : UITableViewController <UITableViewDataSource, UITableViewDelegate, PXContentFilterController> {
    NSArray *_contentFilterGroups;
}

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, weak, nonatomic) id<PXContentFilterControllerDelegate> contentFilterDelegate;
@property (copy, nonatomic) PXContentFilterState *filterState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL filteringIsActive;
@property (readonly, nonatomic) NSString *filteringLocalizedCaption;
@property (readonly, nonatomic) NSString *filteringLocalizedTitle;

- (void)_enumerateExistingCellsUsingBlock:(id /* block */)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 delegate:(id)a1;
- (void)_setupTableView;
- (id)_existingCellForFilterItemTag:(long long)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)_filterItemTagForExistingCellForRowAtIndexPath:(id)a0;
- (void)tableView:(id)a0 didDeselectRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (id)_existingCellForRowAtIndexPath:(id)a0;
- (id)_contentFilterGroups;
- (void)_setupNavigationBar;
- (void)_clickedRowAtIndexPath:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)_getUpdatedFilterState;
- (void)_updateFilterState:(id)a0;
- (BOOL)_selectCellWithFilterItemTag:(long long)a0;
- (void)_clickedContentFilterCell:(id)a0;
- (void)_doneButtonPressed:(id)a0;
- (void)viewDidLoad;

@end
