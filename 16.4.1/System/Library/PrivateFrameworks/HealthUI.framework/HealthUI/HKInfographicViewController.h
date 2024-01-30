@class NSArray, NSString, UITableView;

@interface HKInfographicViewController : UIViewController <UITableViewDataSource> {
    long long _tableViewStyle;
}

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContentItems:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (id)initWithItems:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;
- (void)_updateTableViewTopPadding;
- (id)initWithItems:(id)a0 tableViewStyle:(long long)a1;
- (id)initWithTextItems:(id)a0;

@end
