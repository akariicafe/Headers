@class HUNetworkConfigurationItemListModuleController, NSString, HUNetworkRouterSettingsItemManager;

@interface HUNetworkRouterSettingsViewController : HUItemTableViewController <HUPresentationDelegate, HUSwitchCellDelegate>

@property (readonly, nonatomic) HUNetworkRouterSettingsItemManager *itemManager;
@property (retain, nonatomic) HUNetworkConfigurationItemListModuleController *networkConfigurationItemListModuleController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (BOOL)tableView:(id)a0 shouldHighlightRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (id)initWithHome:(id)a0;
- (BOOL)_shouldShowNetworkRouterDetails;
- (Class)_networkRouterDetailsViewControllerClass;
- (id)buildItemModuleControllerForModule:(id)a0;
- (Class)cellClassForItem:(id)a0 indexPath:(id)a1;
- (id)finishPresentation:(id)a0 animated:(BOOL)a1;
- (id)initWithItemManager:(id)a0 tableViewStyle:(long long)a1;
- (id)presentNetworkConfigurationSettingsForProfile:(id)a0 animated:(BOOL)a1;
- (id)presentNetworkRouterSettingsForItem:(id)a0 animated:(BOOL)a1;
- (id)presentNetworkRouterSettingsForProfile:(id)a0 animated:(BOOL)a1;
- (void)setupCell:(id)a0 forItem:(id)a1 indexPath:(id)a2;
- (void)switchCell:(id)a0 didTurnOn:(BOOL)a1;
- (void)updateCell:(id)a0 forItem:(id)a1 indexPath:(id)a2 animated:(BOOL)a3;

@end
