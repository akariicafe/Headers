@class NSArray, NSString, NSLayoutConstraint;

@interface OBPrivacyCombinedController_iOS : OBPrivacyCombinedController <OBNavigationBarTitleTransistor, UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) NSLayoutConstraint *tableViewHeightConstraint;
@property (retain, nonatomic) NSArray *identifiers;
@property (retain) NSArray *privacyFlows;
@property BOOL isUnifiedAbout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIdentifiers:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)showPrivacyGateway:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)updateTableViewFrameToMatchContentSize;
- (void)viewDidDisappear:(BOOL)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)traitCollectionDidChange:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;

@end
