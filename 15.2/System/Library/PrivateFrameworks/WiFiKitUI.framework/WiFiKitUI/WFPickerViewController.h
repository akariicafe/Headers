@class NSArray, NSString, UITableView;
@protocol WFNetworkListRecord, WFNetworkListDelegate;

@interface WFPickerViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, WFNetworkListing>

@property (weak, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSArray *sortedNetworks;
@property (weak) id<WFNetworkListDelegate> listDelegate;
@property (nonatomic) BOOL showCurrentNetworkTop;
@property (nonatomic) BOOL dismissed;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL showOtherNetwork;
@property float currentNetworkScaledRSSI;
@property (retain) id<WFNetworkListRecord> currentNetwork;
@property long long currentNetworkState;
@property unsigned long long currentNetworkSignalBars;
@property (nonatomic) long long deviceCapability;
@property (copy, nonatomic) NSString *currentNetworkSubtitle;
@property (nonatomic) BOOL disabled;
@property (nonatomic) BOOL userAutoJoinEnabled;

- (long long)numberOfSectionsInTableView:(id)a0;
- (void)didReceiveMemoryWarning;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)powerStateDidChange:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)loadView;
- (void)viewDidDisappear:(BOOL)a0;
- (void).cxx_destruct;
- (id)init;
- (void)refresh;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)setNetworks:(id)a0;
- (BOOL)shouldPromptWhenPersonalHotspotIsEnabled;
- (BOOL)shouldPromptWhenCarPlaySessionIsActive;
- (id)_cellForNetworkRecord:(id)a0 tableView:(id)a1 indexPath:(id)a2;

@end
