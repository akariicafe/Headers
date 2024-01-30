@class UIBarButtonItem, NSString, UIView, UINavigationItem, UITableView;

@interface CKAbstractReviewViewController : PSViewController <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIView *topLineView;
@property (retain, nonatomic) UINavigationItem *navItem;
@property (retain, nonatomic) UIBarButtonItem *cancelEditingBarButtonItem;
@property (retain, nonatomic) UIBarButtonItem *deleteBarButtonItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)navigationItem;
- (void)_applicationDidBecomeActive:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void).cxx_destruct;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)dealloc;
- (void)loadView;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)_updateNavigationItemState;
- (void)_handleCancel;
- (void)_handleDelete;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewWillLayoutSubviews;

@end
