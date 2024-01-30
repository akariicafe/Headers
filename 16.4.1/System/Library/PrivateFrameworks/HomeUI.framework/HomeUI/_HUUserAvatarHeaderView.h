@class NSAttributedString, HUSplitAccountHeaderTableView, NSArray, HUMultiUserTokenFixTableView, HUContactView, ACAccountStore, NAFuture;
@protocol HUMediaAccountDelegate;

@interface _HUUserAvatarHeaderView : UITableViewHeaderFooterView

@property (readonly, nonatomic) HUContactView *contactView;
@property (retain, nonatomic) HUSplitAccountHeaderTableView *splitAccountHeaderView;
@property (retain, nonatomic) HUMultiUserTokenFixTableView *multiUserTokenFixHeaderView;
@property (retain, nonatomic) ACAccountStore *accountStore;
@property (retain, nonatomic) NSArray *layoutConstraints;
@property (weak, nonatomic) id<HUMediaAccountDelegate> mediaAccountDelegate;
@property (retain, nonatomic) NAFuture *mediaAccountFuture;
@property (retain, nonatomic) NSAttributedString *message;

- (void)dealloc;
- (void).cxx_destruct;
- (id)_keyDescriptors;
- (void)dismissMultiUserTokenFixUI;
- (void)dismissSplitAccountView;
- (id)initWithUser:(id)a0 home:(id)a1 delegate:(id)a2;
- (void)presentMultiUserTokenFixUIForMediaAccount:(id)a0 inHome:(id)a1;
- (void)setAccounts:(id)a0 forHome:(id)a1;
- (void)showSplitAccountViewIfNeeded;

@end
