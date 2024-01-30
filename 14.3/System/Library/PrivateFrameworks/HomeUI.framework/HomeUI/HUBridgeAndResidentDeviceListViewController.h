@class NSString, HUBridgeAndResidentDeviceListItemManager;

@interface HUBridgeAndResidentDeviceListViewController : HUItemTableViewController <HUPresentationDelegate>

@property (readonly, nonatomic) HUBridgeAndResidentDeviceListItemManager *itemManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithHome:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (id)finishPresentation:(id)a0 animated:(BOOL)a1;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (id)initWithItemManager:(id)a0 tableViewStyle:(long long)a1;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (id)_presentBridgeSettingsForItem:(id)a0 animated:(BOOL)a1;
- (Class)_bridgeDetailsViewControllerClass;
- (id)presentBridgeSettingsForAccessory:(id)a0 animated:(BOOL)a1;

@end
