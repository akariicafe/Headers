@class HFUserItem, HURemoteAccessItemManager, NSString;

@interface HURemoteAccessTableViewController : HUItemTableViewController <HUSwitchCellDelegate>

@property (readonly, copy, nonatomic) HFUserItem *userItem;
@property (readonly, copy, nonatomic) HURemoteAccessItemManager *remoteAccessItemManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)user;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (id)initWithItem:(id)a0 home:(id)a1;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (BOOL)shouldHideFooterBelowSection:(long long)a0;
- (BOOL)shouldHideHeaderAboveSection:(long long)a0;
- (BOOL)shouldHideSeparatorsForCell:(id)a0 indexPath:(id)a1;
- (void)switchCell:(id)a0 didTurnOn:(BOOL)a1;

@end
