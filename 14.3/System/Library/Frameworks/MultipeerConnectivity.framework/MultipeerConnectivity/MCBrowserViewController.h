@class UINavigationBar, NSObject, MCNearbyServiceBrowser, NSString, NSMutableDictionary, UITableView, MCSession, NSMutableArray, MCPeerID, UIBarButtonItem, NSBundle;
@protocol OS_dispatch_queue, MCBrowserViewControllerDelegate;

@interface MCBrowserViewController : UIViewController <MCSessionPrivateDelegate, UITableViewDataSource, UITableViewDelegate, UINavigationBarDelegate, MCNearbyServiceBrowserDelegate> {
    id<MCBrowserViewControllerDelegate> _delegate;
}

@property (copy, nonatomic) MCPeerID *myPeerID;
@property (retain, nonatomic) MCNearbyServiceBrowser *browser;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) NSMutableArray *nearbyPeersSection;
@property (retain, nonatomic) NSMutableArray *invitedPeersSection;
@property (retain, nonatomic) NSMutableDictionary *invitedPeersState;
@property (retain, nonatomic) NSMutableArray *foundPeers;
@property (retain, nonatomic) MCSession *session;
@property (retain, nonatomic) UIBarButtonItem *doneButton;
@property (retain, nonatomic) UIBarButtonItem *cancelButton;
@property (retain, nonatomic) UINavigationBar *navigationBar;
@property (retain, nonatomic) NSBundle *frameworkBundle;
@property (nonatomic) unsigned long long declinedPeersCount;
@property (readonly, nonatomic) BOOL maximumNumberOfPeersReached;
@property (readonly, nonatomic) BOOL minimumNumberOfPeersReached;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (weak, nonatomic) id<MCBrowserViewControllerDelegate> delegate;
@property (nonatomic) unsigned long long minimumNumberOfPeers;
@property (nonatomic) unsigned long long maximumNumberOfPeers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)init;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)positionForBar:(id)a0;
- (id)tableView:(id)a0 titleForHeaderInSection:(long long)a1;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (BOOL)isVisible;
- (void)viewWillAppear:(BOOL)a0;
- (void)didReceiveMemoryWarning;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)cancelTapped:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)doneTapped:(id)a0;
- (void)viewDidLoad;
- (void)browser:(id)a0 foundPeer:(id)a1 withDiscoveryInfo:(id)a2;
- (void)browser:(id)a0 lostPeer:(id)a1;
- (void)applicationDidEnterBackgroundNotification:(id)a0;
- (void)applicationWillEnterForegroundNotification:(id)a0;
- (void)session:(id)a0 didFinishReceivingResourceWithName:(id)a1 fromPeer:(id)a2 atURL:(id)a3 withError:(id)a4 propagate:(BOOL *)a5;
- (void)session:(id)a0 peer:(id)a1 didChangeState:(long long)a2 propagate:(BOOL *)a3;
- (void)session:(id)a0 didReceiveData:(id)a1 fromPeer:(id)a2 propagate:(BOOL *)a3;
- (void)session:(id)a0 didStartReceivingResourceWithName:(id)a1 fromPeer:(id)a2 withProgress:(id)a3 propagate:(BOOL *)a4;
- (void)session:(id)a0 didReceiveStream:(id)a1 withName:(id)a2 fromPeer:(id)a3 propagate:(BOOL *)a4;
- (id)initWithBrowser:(id)a0 session:(id)a1;
- (void)peer:(id)a0 changedStateTo:(int)a1;
- (void)handleViewWillAppear;
- (void)handleViewDidDisappear;
- (void)peerJoinedSession;
- (id)nearbySectionTitle;
- (id)detailStringForPeerState:(int)a0;
- (void)verifyPeerIsAccountedFor:(id)a0;
- (id)initWithServiceType:(id)a0 session:(id)a1;

@end
