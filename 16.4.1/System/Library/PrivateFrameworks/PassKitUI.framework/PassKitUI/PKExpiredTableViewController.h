@class PKGroupsController, NSString, UITableView;
@protocol PKExpiredTableViewControllerCachingDelegate;

@interface PKExpiredTableViewController : UITableViewController <UITableViewDataSourcePrefetching> {
    UITableView *_tableView;
    BOOL _isAccessibilityCategory;
}

@property (weak, nonatomic) id<PKExpiredTableViewControllerCachingDelegate> cachingDelegate;
@property (retain, nonatomic) PKGroupsController *existingGroupsController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 willSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)initWithStyle:(long long)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didEndEditingRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 prefetchRowsAtIndexPaths:(id)a1;
- (void)tableView:(id)a0 willBeginEditingRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 willDeselectRowAtIndexPath:(id)a1;
- (id)mostRecentPass;
- (id)tableView:(id)a0 cellWithReuseIdentifier:(id)a1;

@end
