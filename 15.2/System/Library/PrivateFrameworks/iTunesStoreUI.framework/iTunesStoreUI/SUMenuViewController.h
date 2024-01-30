@class NSString, UITableView;
@protocol SUMenuViewControllerDelegate;

@interface SUMenuViewController : SUViewController <UITableViewDataSource, UITableViewDelegate> {
    UITableView *_tableView;
}

@property (nonatomic) id<SUMenuViewControllerDelegate> delegate;
@property (nonatomic) long long selectedIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)reload;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)_tableView;
- (void)loadView;
- (long long)numberOfMenuItems;
- (id)init;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)_sendDidCancel;
- (struct CGSize { double x0; double x1; })maximumViewSize;
- (struct CGSize { double x0; double x1; })minimumViewSize;
- (void)performActionForMenuItemAtIndex:(long long)a0;
- (id)titleOfMenuItemAtIndex:(long long)a0;
- (BOOL)isMenuItemEnabledAtIndex:(long long)a0;

@end
