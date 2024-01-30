@class HKSplashScreenView, NSString, NSMutableArray, UIButton;

@interface HKSplashScreenViewController : HKViewController <UITableViewDelegate, UITableViewDataSource>

@property (readonly, nonatomic) HKSplashScreenView *splashScreenView;
@property (retain, nonatomic) NSMutableArray *splashItems;
@property (nonatomic) long long splashVersion;
@property (readonly) UIButton *continueButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)markSplashScreenAtVersion:(long long)a0;
+ (id)splashScreenForSplashScreenVersion:(long long)a0;

- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)loadView;
- (void).cxx_destruct;
- (void)viewDidAppear:(BOOL)a0;
- (id)initForSplashScreenVersion:(long long)a0;
- (void)addSplashScreenViewControllerItem:(id)a0;

@end
