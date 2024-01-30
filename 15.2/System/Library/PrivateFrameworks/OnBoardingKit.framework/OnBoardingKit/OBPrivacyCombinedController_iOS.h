@class NSArray, NSString;

@interface OBPrivacyCombinedController_iOS : OBPrivacyCombinedController <OBNavigationBarTitleTransistor, UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) NSArray *identifiers;
@property (retain) NSArray *privacyFlows;
@property BOOL isUnifiedAbout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithIdentifiers:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)setCustomTintColor:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (BOOL)_canShowWhileLocked;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (void)showPrivacyGateway:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;

@end
