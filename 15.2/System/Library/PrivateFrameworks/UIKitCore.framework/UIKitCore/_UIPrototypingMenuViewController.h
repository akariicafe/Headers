@class _UIContentUnavailableView, NSString, NSArray, UITableView;

@interface _UIPrototypingMenuViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UIDebuggingInformationViewController>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) NSArray *allSettings;
@property (retain, nonatomic) _UIContentUnavailableView *noContentView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)loadView;
- (void)_reloadSettings:(id)a0;
- (void)_resetSettings:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;

@end
