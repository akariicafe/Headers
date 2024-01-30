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

- (void)refresh;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)powerStateDidChange:(BOOL)a0;
- (void)didReceiveMemoryWarning;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (id)init;
- (void)viewDidDisappear:(BOOL)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (void)loadView;
- (void)setNetworks:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)_cellForNetworkRecord:(id)a0 tableView:(id)a1 indexPath:(id)a2;
- (BOOL)shouldPromptWhenCarPlaySessionIsActive;
- (BOOL)shouldPromptWhenPersonalHotspotIsEnabled;

@end
