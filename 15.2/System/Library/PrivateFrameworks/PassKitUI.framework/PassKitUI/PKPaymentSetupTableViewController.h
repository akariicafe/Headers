@class UIView, NSString, UITableViewController, PKPaymentSetupDockView, _PKUIKVisibilityBackdropView, UITableView, UILabel, NSIndexPath;

@interface PKPaymentSetupTableViewController : UIViewController <_PKUIKVisibilityBackdropViewDelegate, UITableViewDataSource, UITableViewDelegate> {
    UILabel *_footerLabel;
    UITableViewController *_tableViewController;
    UIView *_containerView;
    long long _style;
    PKPaymentSetupDockView *_dockView;
    _PKUIKVisibilityBackdropView *_backdropView;
    double _backdropWeight;
}

@property (nonatomic) long long context;
@property (readonly, nonatomic) UITableView *tableView;
@property (readonly, nonatomic) UILabel *footerLabel;
@property (readonly, nonatomic) PKPaymentSetupDockView *dockView;
@property (nonatomic) BOOL clearsSelectionOnViewWillAppear;
@property (readonly, copy, nonatomic) NSIndexPath *selectedIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (id)initWithContext:(long long)a0;
- (void)loadView;
- (unsigned long long)edgesForExtendedLayout;
- (BOOL)extendedLayoutIncludesOpaqueBars;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)tableViewDidFinishReload:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)visibilityBackdropView:(id)a0 preferredStyleForTraitCollection:(id)a1;
- (id)initWithStyle:(long long)a0 context:(long long)a1;

@end
