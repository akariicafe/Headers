@class AMSUIUpdateMultiUserTokenTask, NAFuture, HFItemManager, _HUUserAvatarHeaderView, NSString, NSAttributedString, HMHome;
@protocol HUUserItemManager;

@interface HUUserTableViewController : HUItemTableViewController <HUMediaAccountDelegate, HFUserObserver>

@property (readonly, nonatomic) HFItemManager<HUUserItemManager> *userItemManager;
@property (retain, nonatomic) NSAttributedString *headerMessage;
@property (retain, nonatomic) _HUUserAvatarHeaderView *userAvatarHeaderView;
@property (retain, nonatomic) HMHome *home;
@property (retain, nonatomic) NAFuture *mediaAccountFuture;
@property (retain, nonatomic) AMSUIUpdateMultiUserTokenTask *multiUserTokenFixTask;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)user:(id)a0 didUpdateNeedsiTunesMultiUserRepair:(BOOL)a1;
- (void)dealloc;
- (void)applicationDidEnterBackground;
- (id)userHandle;
- (void)applicationWillEnterForeground;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (id)itemTableHeaderView;
- (id)initWithUserItemManager:(id)a0 home:(id)a1;
- (void)performRemovalAction:(id)a0;
- (void)_presentMediaAccountErrorsIfNeeded:(BOOL)a0;
- (id)_fetchAccountsForHome:(id)a0 forceCloudKitFetch:(BOOL)a1;
- (void)_presentMultiUserTokenFixUIForAccount:(id)a0;
- (void)_refreshSplitAccountsHeaderViewIfNeeded:(BOOL)a0;
- (void)setAMSiTunesAccount:(id)a0 forHome:(id)a1;
- (void)signIniTunesAccount:(id)a0 forHome:(id)a1;

@end
