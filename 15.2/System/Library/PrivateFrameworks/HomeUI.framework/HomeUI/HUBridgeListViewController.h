@class NSString, HUBridgeListItemManager;

@interface HUBridgeListViewController : HUItemTableViewController <HUPresentationDelegate>

@property (readonly, nonatomic) HUBridgeListItemManager *itemManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)initWithHome:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)finishPresentation:(id)a0 animated:(BOOL)a1;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (id)initWithItemManager:(id)a0 tableViewStyle:(long long)a1;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (id)_presentBridgeSettingsForItem:(id)a0 animated:(BOOL)a1;
- (Class)_bridgeDetailsViewControllerClass;
- (id)presentBridgeSettingsForAccessory:(id)a0 animated:(BOOL)a1;
- (unsigned long long)automaticDisablingReasonsForItem:(id)a0;

@end
