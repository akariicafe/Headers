@class UIBarButtonItem, NSArray, NSString, UIMoreListCellLayoutManager, UITableView;

@interface UIMoreListController : UIViewController <UITableViewDelegate, UITableViewDataSource> {
    UITableView *_table;
    BOOL _allowsCustomizing;
    BOOL _disableCustomizing;
    BOOL _hideNavigationBar;
    NSArray *_moreViewControllers;
    UIMoreListCellLayoutManager *_layoutManager;
    UIBarButtonItem *_moreEditButtonItem;
    BOOL _moreViewControllersChanged;
}

@property (retain, nonatomic) NSArray *moreViewControllers;
@property (nonatomic) BOOL allowsCustomizing;
@property (nonatomic) BOOL moreViewControllersChanged;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)encodeRestorableStateWithCoder:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)decodeRestorableStateWithCoder:(id)a0;
- (id)tabBarItem;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (id)table;
- (void)traitCollectionDidChange:(id)a0;
- (id)init;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (BOOL)_isSupportedInterfaceOrientation:(long long)a0;
- (void)_layoutCells;
- (id)_targetNavigationController;
- (void)_updateEditButton;
- (BOOL)_viewControllerWasSelected;
- (void)_willChangeToIdiom:(long long)a0 onScreen:(id)a1;

@end
