@class NSArray, NSString, UITableView;
@protocol MSDStoreInfoListViewControllerDelegate;

@interface MSDStoreInfoListViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) id<MSDStoreInfoListViewControllerDelegate> delegate;
@property (retain, nonatomic) NSArray *storeList;
@property (retain, nonatomic) UITableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_close:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)initWithStoreInfoList:(id)a0 andDelegate:(id)a1;

@end
