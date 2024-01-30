@class HFUserItem, HUUserCamerasAccessLevelItemManager, NSIndexPath;

@interface HUUserCamerasAccessLevelViewController : HUItemTableViewController

@property (readonly, copy, nonatomic) HFUserItem *userItem;
@property (readonly, copy, nonatomic) HUUserCamerasAccessLevelItemManager *camerasAccessLevelItemManager;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (id)initWithUserItem:(id)a0 home:(id)a1;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;

@end
