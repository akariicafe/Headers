@class HUEditOutgoingInvitationItemManager;

@interface HUEditOutgoingInvitationViewController : HUUserTableViewController

@property (readonly, nonatomic) HUEditOutgoingInvitationItemManager *editOutgoingInvitationItemManager;

- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)userHandle;
- (void)itemManager:(id)a0 didUpdateResultsForSourceItem:(id)a1;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (id)initWithItem:(id)a0 home:(id)a1;
- (id)_messageForInvitationState:(long long)a0;
- (void)_cancelOutgoingInvitation:(BOOL)a0;

@end
