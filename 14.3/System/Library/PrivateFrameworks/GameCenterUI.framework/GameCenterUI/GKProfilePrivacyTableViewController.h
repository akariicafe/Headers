@class GKLocalPlayer, NSMutableArray;
@protocol GKProfilePrivacyTableViewControllerDelegate;

@interface GKProfilePrivacyTableViewController : UITableViewController

@property (nonatomic) int currentPrivacySettings;
@property (nonatomic) int initialPrivacySettings;
@property (retain, nonatomic) NSMutableArray *availblePrivacySettings;
@property (nonatomic) BOOL isSendingRequest;
@property (retain, nonatomic) GKLocalPlayer *localPlayer;
@property (weak, nonatomic) id<GKProfilePrivacyTableViewControllerDelegate> delegate;

- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void).cxx_destruct;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)traitCollectionDidChange:(id)a0;
- (int)getLocalPlayerProfilePrivacy;
- (void)updateTableViewLayoutMargins;
- (id)titleForPrivacy:(int)a0;
- (id)tableFooterForPrivacy:(int)a0;
- (void)viewDidLoad;

@end
